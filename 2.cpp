#include <iostream>
using namespace std;
int main() {
  int n;
  cin>>n;
  for(int row=0;row<n;row++)
  {
     if(row==0)
 for(int col=0;col<n-row;col++)
    {
     cout<<col+1<<"\t"; 
     }
    else 
    {  
       cout<<row+1;
    for(int i=0;i<n-row-1;i++)
      {
        cout<<"\t";
      }
      if (n - row > 1) 
      {
        cout << n;
      }  
      }cout<<endl;      
}}