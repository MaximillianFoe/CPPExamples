	#include<iostream>
	using namespace std;

	int main()
	{
	int i,j,k;
	for(i=1;i<=9;i++)
	{
		for(j=9;j>i;j--)
			cout<<" ";
		for(k=1;k<=i;k++)
			cout<<k;
		cout<<endl;
	}

	
	return 0;
	}
	

