#include<iostream>			//�˵� 

using namespace std;

void Menu(){
	int select;
	cout<<"��ѡ��"<<endl;
	cout<<"1.���ģ�ͻ�����Ϣ"<<endl;
	cout<<"2.�ñ��������������"<<endl; 
	cout<<"3.�ñ���������и���������"<<endl; 
	cout<<"\n"<<endl; 
	cout<<"0.�˳�����"<<endl; 
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
			cout<<"����Ƿ���"<<endl;
			Menu(); 
			break; 
	}
}

