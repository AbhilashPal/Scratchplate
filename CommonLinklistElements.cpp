
#include<iostream>
using namespace std;



struct node
{
  int data;
  node* next;
};

bool isempty(node *& head)
{
  if (head==NULL)
    return true;
  else
    return false;
}







void insertatFirst(node*& head,int n)
{
  node *newnode=new node;
  newnode->next=NULL;
  newnode->data=n;
  head=newnode;
}






void insert(node* &head,int n)
{
  if (isempty(head))
  {
      insertatFirst(head ,n);
  }
  else
  {
    node *newnode=new node;
    newnode->next=NULL;
    newnode->data=n;
    node* temp=head;
    while(temp->next!=NULL)
    {
      temp=temp->next;
    }
    if(head->next==NULL)
    {
      head->next=newnode;
    }
    temp->next=newnode;
  }
}


void Print(node* head)
{
  node* temp=new node;
  temp->next=head;
  if(head!=NULL)
  {
  while(temp->next!=NULL)
  {
    if(temp->data!=0){
        cout<<"->"<<(temp->data);
    }
    temp=temp->next;
  }
  cout<<"->"<<temp->data<<endl;
  }
}
void printcommon(node* head1,node* head2,int n,int m)
{
	node* head= new node;
	head->next=NULL;
	node* temp1=new node;
	temp1=head1;
	node* temp2= new node;
	temp2=head2;
	while(temp1!=NULL)
	{
		temp2=head2;
		while(temp2!=NULL)
		{
			if(temp1->data==temp2->data)
			{
				cout<<"->"<<temp1->data;
			}
			temp2=temp2->next;
		}
		temp1=temp1->next;
	}

}

int main()
{
	int n,m;
	cin>>n>>m;
	node* head1=NULL;
	node* head2=NULL;
	for(int w=0;w<n;w++)
	{
		int number;
		cin>>number;
		insert(head1,number);
	}
	cout<<"List 1"<<endl;
	Print(head1);
	for(int w=0;w<n;w++)
	{
		int number;
		cin>>number;
		insert(head2,number);
	}
	cout<<"List 2"<<endl;
	Print(head2);
	cout<<"Common list"<<endl;
	printcommon(head1,head2,n,m);
	return 0;
}
