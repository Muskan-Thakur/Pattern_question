#include <iostream>
using namespace std;

int main() {
  int n;
  cin>>n;
 for(int row=0;row<n;row++)
   {
     for(int sp=0;sp<row;sp++)
     {
       cout<<"\t";
     }
     for(int col=0;col<n-row;col++)
       {
         cout<<"\t*\t";
       }cout<<endl;
   }
}