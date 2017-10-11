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
	int initstate;
	int signalno;
	trafficlights(int n,int i)
	{
		signalno=n;
		initstate=i;
	}
	void printstate(int n)
	{
		//setting the default starting state
		if (n==0)
		{
			initstate=1;
		}
		else 
		{
			initstate=n;
		}
		//the real switching based on initialstate
		if (initstate==1)																							//state 1
		{
			if (signalno==1)
			{
				cout<<"=====================\n SIGNAL AT A : \n============================\n";
				showsignal(2);
			}
			else
			{
				cout<<"=====================\n SIGNAL AT B : \n============================\n";
				showsignal(4);
			}
		}
		else if (initstate==2)																						//state 2
		{
			if (signalno==1)
			{
				cout<<"=====================\n SIGNAL AT A : \n============================\n";
				showsignal(1);
			}
			else
			{
				cout<<"=====================\n SIGNAL AT B : \n============================\n";
				showsignal(4);
			}
		}
		else if (initstate==3)																						//state 3
		{
			if (signalno==1)
			{
				cout<<"=====================\n SIGNAL AT A : \n============================\n";
				showsignal(4);
			}
			else
			{
				cout<<"=====================\n SIGNAL AT B : \n============================\n";
				showsignal(3);
			}
		}
		else if (initstate==4)																						//state 4
		{
			if (signalno==1)
			{
				cout<<"=====================\n SIGNAL AT A : \n============================\n";
				showsignal(4);
			}
			else
			{
				cout<<"=====================\n SIGNAL AT B : \n============================\n";
				showsignal(2);
			}
		}
		else if (initstate==5)																						//state 5
		{
			if (signalno==1)
			{
				cout<<"=====================\n SIGNAL AT A : \n============================\n";
				showsignal(4);
			}
			else
			{
				cout<<"=====================\n SIGNAL AT B : \n============================\n";
				showsignal(1);
			}
		}
		else if (initstate==6)																						//state 6
		{
			if (signalno==1)
			{
				cout<<"=====================\n SIGNAL AT A : \n============================\n";
				showsignal(3);
			}
			else
			{
				cout<<"=====================\n SIGNAL AT B : \n============================\n";
				showsignal(4);
			}
		}
	}
	void showsignal(int n)
	{
		if (n==1)
		{
			cout<<"Right"<<endl;
		}
		else if (n==2)
		{
			cout<<"Up Left"<<endl;
		}
		else if (n==3)
		{
			cout<<"Yellow"<<endl;
		}
		else
		{
			cout<<"Red"<<endl;
		}
	}

};
void menu()
{
	cout<<"=================================================\nC++ PROJECT TRAFFIC LIGHT IMPLEMENTATION\n=================================================\n";
	cout<<"WELCOME TO THE TRAFFIC MANAGEMENT SYSTEM \n";
	cout<<"Press 1 for Changing the Signals\n";
	cout<<"Press 2 to Automate the process\n";
	cout<<"Press 0 to Exit\n";	
	cout<<">>>";
}

trafficlights A(1,1);
trafficlights B(2,1);

void printbystate(int p)
{
	int state = p;
	A.printstate(p);
	B.printstate(p);
}

void automate(int n)
{
	int state=n;
	cout<<"Loading Traffic System";
	Sleep(0700);
	cout<<".";
	Sleep(0700);
	cout<<".";
	Sleep(0700);
	cout<<".";
	cout<<endl;
	int count=1;
	int time= 0;
	while(count!=20)
	{
		A.printstate(state);
		B.printstate(state);
		switch (state)
		{
			case 1:
			{
				Sleep(5000);
				break;
			}
			case 2:
			{
				Sleep(2000);
				break;
			}
			case 3:
			{
				Sleep(2000);
				break;
			}
			case 4:
			{
				Sleep(5000);
				break;
			}
			case 5:
			{
				Sleep(2000);
				break;
			}
			case 6:
			{
				Sleep(2000);
				break;
			}
			default:
			{
				break;
			}
		}
		state=count%6+1;
		if (count==0)
		{
			count++;
		}
		count++;
	}
}

int main()
{
	int n;
	int p=1;
	menu();
	cin>>n;
	printbystate(p);
	while(n!=0)
	{
		menu();
		cin>>n;
		p++;
		if(n==1)
			printbystate(p);
		else if (n==2)
		{
			automate(1);
		}
		else
		{
			break;
		}
	}

	return 0;
}

