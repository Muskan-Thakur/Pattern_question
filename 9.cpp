#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  for(int row=0;row<n;row++)
 {
   for(int col=0;col<row+1;col++)
   {
     char ch=col+'A';
     cout<<ch;
     }
     for(int col=row-1;col>=0;col--)
     {
       char ch=col+'A';
       cout<<ch;
     }
cout<<endl;
 }
}
