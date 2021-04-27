#include<iostream>
#include<string>
#include<cmath>

using namespace std;

class Shape
{
	public: 
		virtual double Perimeter() = 0;
		virtual double Area() = 0;
		virtual string Type() = 0;
		void Print()
		{
			cout<<"�ܳ�Ϊ��"<<Perimeter()<<endl;
			cout<<"���Ϊ��"<<Area()<<endl;
			cout<<"���ͣ�"<<Type()<<endl;
		}
	 	
};

class Triangle:public Shape			//������ 
{
	public:
		Triangle(double a1, double b1, double c1):
			a(a1),b(b1),c(c1)
			{
				p = 0;
			}
		double Perimeter()
		{
			return a+b+c;
		}
		double Area()
		{
			p=(a+b+c)/2;
			return sqrt(p*(p-a)*(p-b)*(p-c));
		}
		string Type()
		{
			return "Triangle";
		}
	private:
		double a ,b ,c,p;
};

class Square: public Shape			//������ 
{
	public:
		Square(double a):
			side(a)
			{
			}
		double Perimeter()
		{
			return side*4;
		}
		double Area()
		{
			return side*side;
		}
		string Type()
		{
			return "Square";
		}
	private:
		double side = 0;
};

class Rectangle: public Shape		//������ 
{
	public:
		Rectangle(double a,double b):
			length(a),width(b)
			{
			}
		double Perimeter()
		{
			return (length+width)*2;
		}
		double Area()
		{
			return length*width;
		}
		string Type()
		{
			return"Rectangle";
		}
	private:
		double length = 0, width = 0;
		
};

class Trapezium: public Shape		//����
{
	public:
		Trapezium(double a, double b, double c, double d):
			topline(a),baseline(b),leftside(c),rightside(d)
			{
			q = 0; p = 0;s = 0; h = 0;
			}
		double Perimeter()
		{
			return topline+baseline+leftside+rightside;
		}
		double Area()
		{
			q = baseline - topline;
			p = (leftside + rightside+q)/2;
			s = sqrt(p*(p-leftside)*(p-rightside)*(p-q));
			h = s/q;
			s+=topline*h;
			return s;
		}
		string Type()
		{
			return "Trapezium";
		}
	private:
		double q,p,s,h,topline ,baseline , leftside , rightside ;
};

class Round:public Shape			//Բ
{
	public:
		Round(double a):
			radius(a)
			{
			}
		double Perimeter()
		{
			return 2*3.14*radius;
		}
		double Area()
		{
			return 3.14*radius*radius;
		}
		string Type()
		{
			return "Round";
		}
	private:
		double radius = 0;
};

class CompoundShape: public Shape			//������״
{
public:
	CompoundShape(int x)
	{
		cout << "��������ɸø���ͼ�ε������Σ�Triangle�� �����Σ�Square�� �����Σ�Rectangle�� ���Σ�Trapezium�� Բ��Round���Լ�����ͼ�Σ�CompoundShape��������:" << endl;
		cin >> triangle >> square >> rectangle >> trapezium >> round>>cs;
		if (triangle > 0)
		{
			cout << "��������������������ߵĳ���" << endl;
			for (int i = 0; i < triangle; i++)
			{
				cin >> s1 >> s2 >> s3;
				if (s1 + s2 < s3 || s1 + s3 < s2 || s2 + s3 < s1)
				{
					cout << "���������޷����������Σ�" << endl;
				}
				else
				{
					Triangle triangle2(s1, s2, s3);
					Psum += triangle2.Perimeter();
					Asum += triangle2.Area();
				}
			}
		}
		if (square > 0)
		{
			cout << "������������εı߳���" << endl;
			for (int i = 0; i < square; i++)
			{
				cin >> s1;
				Square square2(s1);
				Psum += square2.Perimeter();
				Asum += square2.Area();
			}
		}
		if (rectangle > 0)
		{
			cout << "������������εĳ��Ϳ�" << endl;
			for (int i = 0; i < rectangle; i++)
			{
				cin >> s1 >> s2;
				Rectangle rectangle2(s1, s2);
				Psum += rectangle2.Perimeter();
				Asum += rectangle2.Area();
			}
		}
		if (trapezium > 0)
		{
			cout << "����������ε����µ׺����ұ߳���" << endl;
			for (int i = 0; i < trapezium; i++)
			{
				cin >> s1 >> s2 >> s3 >> s4;
				Trapezium trapezium2(s1, s2, s3, s4);
				Psum += trapezium2.Perimeter();
				Asum += trapezium2.Area();
			}
		}
		if (round > 0)
		{
			cout << "�������Բ�İ뾶��" << endl;
			for (int i = 0; i < round; i++)
			{
				cin >> s1;
				Round round2(s1);
				Psum += round2.Perimeter();
				Asum += round2.Area();
			}
		}
		if (cs > 0)
		{
			for (int i = 0; i < cs; i++)
			{
				CompoundShape CS(1);
				Psum += CS.Perimeter();
				Asum += CS.Area();
			}
		}
	}
	double Perimeter()
	{
		return Psum;
	}
	double Area()
	{
		return Asum;
	}
	string Type()
	{
		return "CompoundShape";
	}
private:
	double Psum = 0, Asum = 0,s1 =0, s2 = 0, s3 = 0, s4 = 0;
	int triangle = 0, square = 0, rectangle = 0, trapezium = 0, round = 0,cs = 0;
};


void Select(string T)
{
	double a,b,c,d,e;
	if (T == "Triangle")
	{
		cout << "�����������ε������ߣ�" << endl;
		cin>>a>>b>>c;
		if (a + b < c || a + c < b || b + c < a)
		{
			cout << "���������޷����������Σ�" << endl;
		}
		else
		{
			Triangle triangle(a, b, c);
			triangle.Print();
		}
	}
	if (T == "Square")
	{
		cout << "�����������εı߳���" << endl;
		cin >> a;
		Square square(a);
		square.Print();
	}
	if (T == "Rectangle")
	{
		cout << "�����볤���εĳ��Ϳ�" << endl;
		cin >> a >> b;
		Rectangle rectangle(a, b);
		rectangle.Print();
	}
	if (T == "Trapezium")
	{
		cout << "���������ε����µ׺����ұ߳��ĸ�����" << endl;
		cin >> a >> b >> c >> d;
		Trapezium trapezium(a, b, c, d);
		trapezium.Print();
	}
	if (T == "Round")
	{
		cout << "������Բ�İ뾶��" << endl;
		cin >> a;
		Round round(a);
		round.Print();
	}
	if(T =="CompoundShape")
	{
		CompoundShape cs(1);
		cs.Print();
	}
}; 

void Menu()
{
	int n;
	double a,b,c;
	cout << "****************************************************************" << endl;
	cout <<"********"<<"\t\t"<< "��ѡ��" << "\t\t\t"<<"********"<< endl;
	cout << "********" << "\t\t" << "1.�����Σ�Triangle��" <<"\t\t"<< "********" << endl;
	cout << "********" << "\t\t"<< "2.�����Σ�Square��" << "\t\t"<<"********" << endl;
	cout << "********" << "\t\t"<< "3.�����Σ�Rectangle��" <<"\t\t" << "********" << endl;
	cout << "********" << "\t\t" << "4.���Σ�Trapezium��" <<"\t\t" << "********" << endl;
	cout << "********" << "\t\t"<< "5.Բ��Round��" << "\t\t\t"<<"********" << endl;
	cout << "********" << "\t\t"<< "6.������״��CompoundShape��" << "\t" << "********" << endl;
	cout << "********" << "\t\t" << "0.�˳�����exit��" << "\t\t" << "********" << endl;
	cout << "****************************************************************" << endl;
	cin>>n;
	switch(n)			//�������⣬��case�ﶨ��������ᱨ�����±��벻ͨ�� 
	{
		case 1:
			Select("Triangle");
			break;
		case 2:
			Select("Square");
			break;
		case 3:
			Select("Rectangle");
			break;
		case 4:
			Select("Trapezium");
			break;
		case 5:
			Select("Round");
			break;
		case 6:
			Select("CompoundShape");
			break;
		case 0:
			exit(0);
		default:
			Menu();
			break;		
	}
	Menu();
}

int main()
{
	Menu();
	return 0;
}
