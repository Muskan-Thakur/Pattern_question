#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  for(int row=0;row<n;row++)
  {
    for(int sp=0;sp<n-row;sp++)
    {
      cout<<"  ";
    }
    for(int col=0;col<2*row+1;col++)
    {
      if(col==0||col==2*row||row==0||row==n-1)
     {
cout<<"* ";
     }
     else
     {
       cout<<"  ";
     }
  }cout<<endl;
}
}

