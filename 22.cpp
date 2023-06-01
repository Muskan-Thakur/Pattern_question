#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  //leftside
  for(int row=0;row<n;row++)
  {
    for(int col=0;col<row+1;col++)
    {
      cout<<"*";
    } 
  {//rightside
    for(int sp=0;sp<2*n-2*row-1;sp++)//space
    {
      cout<<" ";
    }
    for(int col=0;col<row+1;col++)
    {
      cout<<"*";
    }   cout<<endl;
} 
  }
  //leftside bottom star
    for(int row=0;row<n;row++)
    {
     for(int col=0;col<n-row;col++)
    {
      cout<<"*";
    }
    //rightside bottom star
      for(int sp=0;sp<=2*row;sp++) //for space
      {
        cout<<" ";
      }
     for(int col=0;col<n-row;col++)
    {
       cout<<"*";
    } cout<<endl;
    }
}  
