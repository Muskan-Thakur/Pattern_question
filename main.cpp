#include <iostream>
using namespace std;
int main() {
  int n;
  cout<<"Enter value  ";
  cin>>n;
  for(int row=0;row<n;row++)
  {
    //for spacces
    for(int sp=0;sp<n-row;sp++)
    {
      cout<<"\t";
    }
//for numbers
    for(int col=0;col<row+1;col++)
    {
cout<<row+col+1<<"\t";
    }
    
    //for right side
    int st=2*row;
    for(int rev=0;rev<row;rev++)
    {
cout<<st<<"\t";
st--;
    }cout<<endl;
} }

