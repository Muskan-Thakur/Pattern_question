#include <iostream>
using namespace std;

int main() {
  int n;
  cin>>n;
 for(int row=0;row<n;row++)
   {
     for(int sp=0;sp<n-row-1;sp++)
     {
       cout<<"\t";
     }
     for(int col=0;col<row+1;col++)
       {
         cout<<"\t*\t";
       }cout<<endl;
   }
}