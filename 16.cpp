#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  for(int row=0;row<n;row++)
  { for(int sp=0;sp<n-row;sp++)
  {
    cout<<" ";
  }
  
    for(int col=0;col<row+1;col++)
    {
      cout<<col+1;
      
    }
for(int rev=row;rev>=1;rev--)
      {
        cout<<rev; 
      }
     cout<<endl;
  }
}
