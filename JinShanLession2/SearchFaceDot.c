#include<iostream>				//查询面以及其上面点的坐标 
using namespace std;

void SearchFaceDot(){
	int s_number;
	cout<<"请输入要查询的面编号："<<endl;
	cin>>s_number;
	if(s_number < 0 || s_number >= facevector.size()){
		cout<<"非法输入！"<<endl; 
	}
	else{
		cout<<"编号为"<<s_number<<"的面由以下点决定："<<endl; 
		cout<<facevector[s_number].getDot1()<<"\t"<<facevector[s_number].getDot2()<<"\t"<<facevector[s_number].getDot3()<<"\t"<<facevector[s_number].getDot4()<<endl;
		cout<<"他们的坐标分别为："<<endl;
		int a[4] = {facevector[s_number].getDot1(),facevector[s_number].getDot2(),facevector[s_number].getDot3(),facevector[s_number].getDot4()};
		for(int i = 0; i <facevector[s_number].getAmount(); i++){
			cout<<dotvector[a[i]].getX()<<"\t"<<dotvector[a[i]].getY()<<"\t"<<dotvector[a[i]].getZ()<<"\t"<<endl;
		}
	}
}
