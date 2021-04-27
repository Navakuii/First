class Face{			//√Ê¿‡ 
	public:
		Face(){
			number = 0;
			dot1 = 0;
			dot2 = 0;
			dot3 = 0;
			dot4 = 0;
			amount = 0;
		}
		Face(int a, int b, int c, int d,int e,int f):
		amount(a),dot1(b),dot2(c),dot3(d),dot4(e),number(f){
		}
		int getAmount(){
			return amount;
		}
		int getDot1(){
			return dot1;
		}
		int getDot2(){
			return dot2;
		}
		int getDot3(){
			return dot3;
		}
		int getDot4(){
			return dot4;
		}
		int getNumber(){
			return number;
		}
		private:
			int amount,dot1 ,dot2 ,dot3 ,dot4,number ;
};
