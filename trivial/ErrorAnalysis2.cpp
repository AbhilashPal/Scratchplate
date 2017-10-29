#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	try
	{
		char s[10];
		cin>>s;
		if (int(s[0])>=48&&int(s[0])<=57)
		{
			int i;
			float f;
			f=atof(s);
			i=atoi(s);
			if(f-i==0)
			{
				throw i;
			}
			else
			{
				throw f;
			}
		}
		else
		{
			cout<<"Not a bloody Number :)"<<endl;
		}
	}
	catch(int i)
	{
		cout<<"Ekdum Valid ! "<<endl;
	}
	catch(float i)
	{
		cout<<"bloody float "<<endl;
	}

	return 0;
}