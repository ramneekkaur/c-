#include<iostream.h>
#include<conio.h>

class Matrix
{
 int i,j,k,r,c,a[100][100],b[100][100];
 public: void getdata();
	 void showdata();
	 Matrix matmul(Matrix a);
 };
void Matrix::getdata()
{

 cout<<"Enter the number of rows and columns of matrices";
 cin>>r>>c;
 cout<<"Enter the elements of matrix";
 for(i=0;i<r;i++)
 { for(j=0;j<c;j++)
   { cin>>a[i][j];
   }
 }

}

void Matrix::showdata()
{
  for(i=0;i<r;i++)
 { for(j=0;j<c;j++)
   { cout<<a[i][j];
   }
 }

}
Matrix Matrix::matmul(Matrix m1)
{ Matrix temp;
 for(i=0;i<r;i++)
 { for(j=0;j<c;j++)
   {
    for(k=0;k<c;k++)
    {
     temp.a[i][j]=a[i][k]*m1.a[k][j];
     return temp;
     }
    }
   }
 }
 void main()
 {clrscr();
 Matrix m1,m2,m3;
 m1.getdata();
 m2.getdata();
 m3=m1.matmul(m2);
 getch();
 }