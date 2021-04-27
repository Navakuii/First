#include<iostream>			//菜单 

using namespace std;

void Menu(){
	int select;
	cout<<"请选择："<<endl;
	cout<<"1.输出模型基本信息"<<endl;
	cout<<"2.用编号搜索顶点坐标"<<endl; 
	cout<<"3.用编号搜索面中各顶点坐标"<<endl; 
	cout<<"\n"<<endl; 
	cout<<"0.退出程序"<<endl; 
	cin>> select;
	switch(select){
		case 1:
			PrintFile(dot,face);
			Menu(); 
			break;
		case 2:
			SearchDot();
			Menu(); 
			break;
		case 3:
			SearchFaceDot();
			Menu(); 
			break;
		case 0:
			exit(0);
		default:
			cout<<"输入非法！"<<endl;
			Menu(); 
			break; 
	}
}

