#include<iostream>				//��ѯ���Լ������������� 
using namespace std;

void SearchFaceDot(){
	int s_number;
	cout<<"������Ҫ��ѯ�����ţ�"<<endl;
	cin>>s_number;
	if(s_number < 0 || s_number >= facevector.size()){
		cout<<"�Ƿ����룡"<<endl; 
	}
	else{
		cout<<"���Ϊ"<<s_number<<"���������µ������"<<endl; 
		cout<<facevector[s_number].getDot1()<<"\t"<<facevector[s_number].getDot2()<<"\t"<<facevector[s_number].getDot3()<<"\t"<<facevector[s_number].getDot4()<<endl;
		cout<<"���ǵ�����ֱ�Ϊ��"<<endl;
		int a[4] = {facevector[s_number].getDot1(),facevector[s_number].getDot2(),facevector[s_number].getDot3(),facevector[s_number].getDot4()};
		for(int i = 0; i <facevector[s_number].getAmount(); i++){
			cout<<dotvector[a[i]].getX()<<"\t"<<dotvector[a[i]].getY()<<"\t"<<dotvector[a[i]].getZ()<<"\t"<<endl;
		}
	}
}
