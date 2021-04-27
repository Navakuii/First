#include<iostream>
#include<vector>
#include<string>
#include<fstream>
#include"Dot.h"
#include"Face.h"
#include"ReadFile.c"
#include"SearchDot.c"
#include"SearchFaceDot.c"
#include"PrintFile.c"
#include"Menu.c"

using namespace std;

int main(){
	ReadFile();
	Menu();
	return 0;
} 
