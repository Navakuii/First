#include<iostream>				//��ѯ���� 
using namespace std;

void SearchDot(){
	int s_number;
	cout<<"������Ҫ��ѯ�Ķ����ţ�"<<endl;
	cin>>s_number;
	if(s_number < 0 || s_number >= dotvector.size()){
		cout<<"�Ƿ����룡"<<endl; 
	}
	else{
		cout<<"���Ϊ"<<s_number<<"�ĵ�����Ϊ��"<<endl; 
		cout<<"\t"<<dotvector[s_number].getX()<<"\t"<<dotvector[s_number].getY()<<"\t"<<dotvector[s_number].getZ()<<endl;
	}
	
}
