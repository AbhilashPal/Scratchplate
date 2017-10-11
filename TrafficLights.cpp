//=================================================
//C++ PROJECT TRAFFIC LIGHT IMPLEMENTATION
//=================================================
#include<iostream>
#include<string>
#include<Windows.h>
//#include "stdafx.h"
using namespace std;
class trafficlights
{
public:
	int r,g,y;
	trafficlights()
	{
		r=1;g=2;y=3;
	}
	void showlights(int n)
	{
		if (n==r)
		{
			showred();
		}
		else if(n==g)
		{
			showgreen();
		}
		else if(n==y)
		{
			showyellow();
		}
		else
		{
			showall();
		}
	}
	void showall()
	{
		cout<<"Loading Traffic System";
		Sleep(0700);
		cout<<".";
		Sleep(0700);
		cout<<".";
		Sleep(0700);
		cout<<".";
		cout<<endl;
		int count=0;
		int time= 0;
		while(count!=10)
		{
			if(count%3==0)
			{
				cout<<"Time : "<<time<<endl;
				showred();
				Sleep(5000);
				time+=5;
			}
			else if(count%3==1)
			{
				cout<<"Time : "<<time<<endl;
				showyellow();
				Sleep(3000);
				time+=3;
			}
			else
			{
				cout<<"Time : "<<time<<endl;
				showgreen();
				Sleep(5000);
				time+=5;
				
			}
			count++;
		}
	}
	void showred()
	{
		cout<<"===========================================\n              TRAFFIC LIGHTS              \n===========================================\n";
		cout<<"		 .....		\n";
		cout<<"	      ... Red ...		\n";
		cout<<"		 .....		\n";
		cout<<"		   .		\n";
		cout<<"		   .		\n";
		cout<<"		   .		\n";
		cout<<"		   .		\n";
		cout<<"		   .		\n";
		cout<<"		   .		\n";
		cout<<"		 .....		\n";
	}
	void showgreen()
	{
		cout<<"===========================================\n              TRAFFIC LIGHTS              \n===========================================\n";
		cout<<"		 .....		\n";
		cout<<"	     ... Green ...		\n";
		cout<<"		 .....		\n";
		cout<<"		   .		\n";
		cout<<"		   .		\n";
		cout<<"		   .		\n";
		cout<<"		   .		\n";
		cout<<"		   .		\n";
		cout<<"		   .		\n";
		cout<<"		 .....		\n";
	}
	void showyellow()
	{
		cout<<"===========================================\n              TRAFFIC LIGHTS              \n===========================================\n";
		cout<<"		 ......		\n";
		cout<<"	     ... Yellow ...		\n";
		cout<<"		 ......		\n";
		cout<<"		   ..		\n";
		cout<<"		   ..		\n";
		cout<<"		   ..		\n";
		cout<<"		   ..		\n";
		cout<<"		   ..		\n";
		cout<<"		   ..		\n";
		cout<<"		 ......		\n";
	}
		
};

void menu()
{
	cout<<"=================================================\nC++ PROJECT TRAFFIC LIGHT IMPLEMENTATION\n=================================================\n";
	cout<<"WELCOME TO THE TRAFFIC MANAGEMENT SYSTEM \n";
	cout<<"Press 1 for Red Signal\n";
	cout<<"Press 2 for Green Signal\n";
	cout<<"Press 3 for Yellow Signal\n";	
	cout<<"Press 0 to exit and Automate the process.\n";	
	cout<<">>>";
}
int main()
{
	trafficlights T;
	int n;
	menu();
	cin>>n;
	T.showlights(n);
	while(n!=0)
	{
		menu();
		cin>>n;
		T.showlights(n);
	}

	return 0;
}

