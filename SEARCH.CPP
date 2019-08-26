#include<iostream.h>
#include<conio.h>
#include<ctype.h>
#define MAX 100
int value,search;
int arr[MAX],n,i,j;
void linear(int arr[],int n);
void binary(int arr[],int n);

void main()
{
clrscr();
int arr[100],num,n,m,i,j,last,mid,first;
char ch='Y';
cout<<"Enter the total number in array";
cin>>n;

cout<<"Array elements"<<endl;
for(i=0;i<n;i++)
{cout<<"Value"<<i+1<<".";
cin>>arr[i];
}
do{
cout<<"\nEnter the type of search->1.Linear,2.Binary";
cin>>m;
switch(m)
{case 1:linear(arr,n);

	break;
case 2:
	binary(arr,n);
	break;
default:cout<<"\n wrong number";
	break;
}
cout<<"\nDo want to search more elements";
cin>>ch;
}while(toupper(ch)=='Y');
getch();
}



void linear(int arr[],int n)
{int pos=0;
cout<<"\n Enter the search value";
cin>>value;
for(i=0;i<n;i++)
{if(value==arr[i])
{pos=i+1;
} }
cout<<"search value->"<<value<<",position->"<<pos;

}



void binary(int arr[],int n)
{      int num,first,mid,last;
for(i=0;i<n;i++)
{for(j=i+1;j<n;j++)
{if(arr[i]>arr[j])
{ num=arr[i];
  arr[i]=arr[j];
  arr[j]=num;
}}}
cout<<"\nSorted elements are\n";
for(i=0;i<n;i++)
{cout<<"\n Value"<<i+1<<"."<<arr[i];}
int find=0;
cout<<"\nEnter the search value";
cin>>search;
first=0;mid=0;last=n-1;

while((first<=last)&&(find==0))
{
mid=(first+last)/2;
if(arr[mid]==search)
{find=mid;}
else
if(arr[mid]<search)
{first=mid+1;
}
else
last=mid-1;
}
if(find>0)
{cout<<"\nThe position of the element"<<++find;      }
else
cout<<"\n Search not perfect";

}
