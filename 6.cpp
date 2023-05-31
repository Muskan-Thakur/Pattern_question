#include <iostream>
using namespace std;

int main() {

int n;
cin>>n;
for(int row=0;row<n;row++)
{
  for(int sp=0;sp<n-row-1;sp++)
  {
    cout<<" ";
  }
  for(int col=0;col<2*row+1;col++)
  { 
    if(col==0||col==2*row)
    {
      cout<<"*";
    }
    else
    {
cout<<" ";
    } 
}cout<<endl;
}

for(int row=0;row<n;row++)
{
  for(int sp=0;sp<row;sp++)
  {
    cout<<" ";
  }
  for(int col=0;col<n-row;col++)
  { 
  if(col==0||col==n-row-1)
  {
  cout<<"* ";	
  }
 else
 {
 	cout<<"  ";
 }

}
cout<<endl;
}}


