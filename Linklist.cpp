#include<iostream>
#include<cstdlib>
#include<stdio.h>
using namespace std;
//This Implementation does not use "Last" pointer that points to last node.
struct node
{
  int data;
  node* next;
};
bool isempty(node* &head);
char menu();
void insertatFirst(node* &head, int n);
void insert(node* &head,int n);
void removebyValue(node *&head, int V);
void printlist(node* &head);



char menu()
{
  char choice;
  cout<<"A-la-carte Menu fur Singly Linked Link List:\n";
  cout<<"1. Add an Item.\n";
  cout<<"2. Remove an Item.\n";
  cout<<"3. Show the List.\n";
  cout<<"4. Exit.\n";
  cin>>choice;
  return choice;
}








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
      cout<<"New node inserted as the first element.\n";
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
    cout<<"New Node Inserted after list elements.\n";
  }
}







void removebyValue(node *&head, int V)
{
  if (isempty(head))
  {
    cout<<"List Empty.\n";
  }
  else if ((head->data==V)&&(head->next!=NULL))
  {
    node*temp=head;
    head=temp->next;
    free(temp);
  else
  {
    node* temp=head;
    node* temp2=head;
    while(temp->next!=NULL)
    {

      if (temp->data==V)
      {
        temp2=temp->next;
        free(temp);
        break;
      }
      temp2=temp;
      temp=temp->next;
    }
  }
}







void printlist(node* &head)
{
  node* temp=head;
  while(temp->next!=NULL)
  {
    cout<<(temp->data)<<endl;
    temp=temp->next;
  }
  cout<<temp->data<<endl;
}






//Driver Code
int main()
{
  node* head=NULL;
  char choice;
  int number;
  do{
      choice =menu();
      switch(choice)
      {
        case '1':
          cout<<"Enter number to insert:";
          cin>>number;
          insert(head,number);
          break;
        case '2':
          cout<<"Enter number to delete:";
          cin>>number;
          removebyValue(head,number);
          break;
        case '3':
          cout<<"List Elements are:\n";
          printlist(head);
          break;
        default:
          cout<<"System Exit\n";
          break;
      }

  }while(choice!='4');
  return 0;
}
