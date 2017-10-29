#include<iostream>
using namespace std;
class Unary
{
	int a;
	public:
		Unary()
		{
			a=0;
		};
		Unary(int x){
			a=x;
		};
		//overloading
		Unary operator-()
		{
			Unary K(-this->a);
			return K;
		}
		//Display
		void disp()
		{
			cout<<this->a<<" ";
		}
};
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	Unary A(a),B(b),C(c);
	Unary D,E;
	D=-A;
	E=-B;
	C=-C;
	A.disp();
	D.disp();
	E.disp();
	C.disp();
	cout<<endl;
	return 0;
}