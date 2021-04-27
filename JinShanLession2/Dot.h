class Dot{			//µãÀà 
	public:
		Dot(){
			num = 0;
			x = 0;
			y = 0;
			z = 0;
		}
		Dot(int a, double b, double c, double d):
		num(a),x(b),y(c),z(d){
		//	num = a;
		//	x = b;
		//	y = c;
		//	z = d;
		}
		int getNum(){
			return num;
		}
		double getX(){
			return x;
		}
		double getY(){
			return y;
		}
		double getZ(){
			return z;
		}
		private:
			int num;
			double x,y,z;
};
