#include<bits/stdc++.h>
using namespace std;


struct Node
{
    int data;
    Node* next;
    Node(int x)
    {
        this->data=x;
        this->next=NULL;
    }
};

void showList(Node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}

int main()
{   
    Node* node1=new Node(1);
    Node* node2=new Node(2);
    node1->next=node2;
    Node* node3=new Node(3);
    node2->next=node3;

    Node* node4=new Node(4);
    Node* node5=new Node(5);
    node4->next=node5;
    Node* node6=new Node(6);
    node5->next=node6;

    
    Node* list1=node1;
    Node* list2=node4;

    cout<<"List1: ";
    showList(list1);
    cout<<"\n";
    cout<<"List2: ";
    showList(list2);
    //123
    //456
    //579
    cout<<"\n";
    int x=0,y=0;
    for(int i=0;i<3;i++)
    {
        x=x*10+(list1->data);

        y=y*10+(list2->data);
        list1=list1->next;
        list2=list2->next;
    }

     int sum=x+y;

     Node* resHead=NULL;
     while(sum>0)
     {
         int digi=sum%10;
         cout<<digi<<" ";
         if(resHead==NULL)
         {
         Node* tnode=new Node(digi);
         resHead=tnode;

         }
         else{
             Node* tnode=new Node(digi);
             tnode->next =resHead;
             resHead=tnode;
         }
         sum=(sum-digi)/10;

     }

     cout<<"\n"<<"Result List: ";
     showList(resHead);
     



    cout<<"\n";
    return 0 ;
}