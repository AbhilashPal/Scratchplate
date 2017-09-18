/*
    Insert Node in a doubly sorted linked list 
    After each insertion, the list should be sorted
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/
Node* SortedInsert(Node *head,int data)
{
    Node* temp=new Node;
    temp->next=NULL;
    temp->prev=NULL;
    Node* newnode=new Node;
    newnode->data=data;
    newnode->next=NULL;
    newnode->prev=NULL;
    temp=head;
    if(temp==NULL)
    {
       temp=newnode;   
       return head; 
    }
    else if(temp->next=NULL)
    {
      if(temp->data<data)
      {
        temp->next=newnode;
        newnode->prev=temp;
        return head;  
      }
      else
      {
        temp->prev=newnode;
        newnode->next=temp;
        head=newnode;
        return head;
      }
    }
    else
    {
      while(temp->next!=NULL&&temp->data<data)
      {
        temp=temp->next;
      }
      newnode->prev=temp;
      if(temp->next!=NULL)
      {
        newnode->next=temp->next;
        temp->next->prev=newnode;
      }
      temp->next=newnode;
      return head;
    }
}
