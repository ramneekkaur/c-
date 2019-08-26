#include<iostream>
#include<conio.h>
using namespace std;
#define double Double


template<class T>
class node
{
      public:
             T data;
             node *l,*r;
};


template<class T>
class double
{
      private:
              node<T> *first;
      public:
             double()
             {
                     first==NULL;
             }
             void createlist();
             void del();
             void insert();
             void disp();
};


template<class T>
void double<T>::createlist()
{
     int a;
     node<T> *cur,*ptr;
     first=NULL;
     cout<<"\nEnter data for new node : ";
     cin>>a;
     while(a)
     {
             cur=new node<T>;
             cur->data=a;
             cur->l=cur->r=NULL;
             if(first==NULL)
             {
                            first=cur;
             }
             else
             {
                 cur->l=ptr;
                 ptr->r=cur;
             }
             ptr=cur;
             cout<<"\nEnter data of node : ";
             cin>>a;
     }
}


template<class T>
void double<T>::disp()
{
     node<T> *ptr,*last;
     ptr=first;
     last=NULL;
     cout<<"\nThe list is\n";
     while(ptr!=NULL)
     {
                     cout<<ptr->data<<"\t";
                     if(ptr->r==NULL)
                     last=ptr;
                     ptr=ptr->r;
     }
     cout<<"\nThe reverse list is\n";
     ptr=last;
     while(ptr!=NULL)
     {                  
                     cout<<ptr->data<<"\t";
                     ptr=ptr->l;
     }
}


template<class T>
void double<T>::insert()
{
     T ele;
     char ch;
     node<T> *ptr,*cur;
     ptr=first;
     cur=new node<T>;
     cout<<"Enter data for the node:";
     cin>>cur->data;
     cur->r=cur->l=NULL;
     cout<<"Do u want to insert at first place [y/n]:";
     cin>>ch;
     if(ch=='y'||ch=='Y')
     {
                         ptr->l=cur;
                         cur->r=ptr;
                         first=cur;
     }
     else
     {
         cout<<"After which element you want to insert? : ";
         cin>>ele;
         while(ptr!=NULL)
         {
                         if(ptr->data==ele)
                         {
                                           cur->r=ptr->r;
                                           cur->l=ptr;
                                           ptr->r->l=cur;
                                           ptr->r=cur;
                                           break;
                         }
                         else
                         {
                             ptr=ptr->r;
                         }
         }
     }
}


template<class T>
void double<T>::del()
{
     T ele;
     char ch;
     node<T> *ptr;
     ptr=first;
     cout<<"Do you want to delete first element[y/n]? : ";
     cin>>ch;
     if(ch=='y'||ch=='Y')
     {
                         ptr->r->l=NULL;
                         first=ptr->r;
     }
     else
     {
         cout<<"\nEnter the element you want to delete : ";
         cin>>ele;
         while(ptr!=NULL)
         {
                         if(ptr->data==ele)
                         {
                                           ptr->r->l=ptr->l;
                                           ptr->l->r=ptr->r;
                                           break;
                         }
                         else
                         {
                             ptr=ptr->r;
                         }
         }
     }
}


int main()
{
    int ch;
    double<int> d;
    d.createlist();
    do
    {
                   cout<<"\n 1.Insert \n 2.Delete \n 3.Display \n 4.Exit \n";
                   cout<<"Enter choice : ";
                   cin>>ch;
                   switch(ch)
                   {
                             case 1: d.insert();
                             break;
                             case 2: d.del();
                             break;
                             case 3: d.disp();
                             break;
                             case 4:exit(0);
                             break;
                             default: cout<<"\nWrong choice!";
                   }
    }while(ch<=4);
    system("pause");
}

