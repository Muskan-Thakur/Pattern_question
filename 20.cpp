#include<iostream>
using namespace std;
 int  main()
 {
 	int n;
 	cin>>n;
 	int num=1;
 	for(int row=0;row<n;row++)
 	{
 		for(int col=0;col<row+1;col++)
 		{
 				cout<<num;
 		        num++;
 			if(col!=row)
 			{
              	cout<<"*";
			 }
         	else
 	{
 		cout<<" ";
	 }
}
cout<<endl;
}
int start=num-n;
	 for(int row=0;row<n;row++)
	 {
	 	int nextelement=start;
	 	for(int col=0;col<n-row;col++)
	 	{
	 		cout<<nextelement;
	 		nextelement++;
	 		if(col<n-row-1)
	 		{
	 			cout<<"*";
			 }
		 }
		 
		 start=start-(n-row-1);
		 cout<<endl;
	 }}
	 


