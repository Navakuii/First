#include<iostream>			//将模型数据输入到内存中 
#include<vector>
#include<string>
#include<fstream>


using namespace std;
int dot,face,line;
vector<Dot> dotvector(0);

vector<Face> facevector(0);

void ReadFile(){
	string start1;
	double x,y,z;
	int amount,dot1,dot2,dot3,dot4;
	ifstream File1("lession2.off");
	if(!File1.is_open()){
		cout<<"Open file failure!"<<endl;
	}
	while(!File1.eof()){
		File1>>start1;
		if(start1 != "OFF"){
			continue;
		}
		File1>>dot>>face>>line;
		for(int i = 0; i < dot; i++){
			File1>>x>>y>>z;
			Dot E_dot(i,x,y,z);
			dotvector.push_back(E_dot);
		}
		for(int j = 0; j < face; j++){
			File1>>amount>>dot1>>dot2>>dot3>>dot4;	
			Face E_face(amount,dot1,dot2,dot3,dot4,j);
			facevector.push_back(E_face);
		}
	
	}
	File1.close();
	
}
