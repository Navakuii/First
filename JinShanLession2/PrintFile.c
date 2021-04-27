#include<iostream>				//输出模型数据 

using namespace std;

void PrintFile(int dot, int face){
	cout<<"OFF"<<endl;
	for(int i = 0; i < dot; i++){
		cout<<dotvector[i].getX()<<"\t"<<dotvector[i].getY()<<"\t"<<dotvector[i].getZ()<<endl;
	}
	for(int j = 0; j < face; j++){
		cout<<facevector[j].getAmount()<<"\t"<<facevector[j].getDot1()<<"\t"<<facevector[j].getDot2()<<"\t"<<facevector[j].getDot3()<<"\t"<<facevector[j].getDot4()<<endl;
	}	
}
