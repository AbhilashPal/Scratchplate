#include<iostream>
using namespace std;
int main()
{
	char x[10],y[10];
	cin>>x;
	cin>>y;
	char* xx;
	char* yy;
	xx=x;
	yy=y;
	int a,b;
	try
	{
		a=int(x[0]);
		throw a;
	}
	catch(int x)
	{
		if (x>=49 && x<=57)
		{
			cout<<"Integer : "<<xx<<endl;
		}
		else
		{
			cout<<"Character : "<<xx<<endl;
		}
	}
	try
	{
		b=int(y[0]);
		throw b;
	}
	catch(int x)
	{
		if (x>=49 && x<=57)
		{
			cout<<"Integer : "<<yy<<endl;
		}
		else
		{
			cout<<"Character : "<<yy<<endl;
		}
	}
	return 0;
}