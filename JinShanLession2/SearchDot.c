#include<iostream>				//查询顶点 
using namespace std;

void SearchDot(){
	int s_number;
	cout<<"请输入要查询的顶点编号："<<endl;
	cin>>s_number;
	if(s_number < 0 || s_number >= dotvector.size()){
		cout<<"非法输入！"<<endl; 
	}
	else{
		cout<<"编号为"<<s_number<<"的点坐标为："<<endl; 
		cout<<"\t"<<dotvector[s_number].getX()<<"\t"<<dotvector[s_number].getY()<<"\t"<<dotvector[s_number].getZ()<<endl;
	}
	
}
