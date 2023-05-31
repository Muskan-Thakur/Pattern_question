#include <iostream>
using namespace std;
int main() {
int n;
cin>>n;
for(int row=0;row<n;row++)
{
	for(int col=0;col<n-row;col++)
	{
		cout<<"*";
	}
for(int sp=0;sp<row+1;sp++)
{
cout<<"  ";	
}
	for(int col=0;col<n-row;col++)
	{
	cout<<"*";	
	}cout<<endl;

}	
for(int row=0;row<n;row++)
{
	for(int col=0;col<row+1;col++)
	{
		cout<<"*";
	}
	
	for(int sp=0;sp<n-row;sp++)
	{
		cout<<"  ";
	}
	for(int col=0;col<row+1;col++)
	{
		cout<<"*";
	}	cout<<endl;
}
}



