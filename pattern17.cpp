#include<iostream>
using namespace std;
int main()
{
	int i,j,k,a=1,n,s;
	cin>>n;
	s=n-1;
	while(s!=0)
	{
		cout<<" ";
		s--;
	}
	cout<<a<<endl;
	s=n-2;
	
	for(i=1;i<n;i++)
	{
		a=1;
		for(k=1;k<=s;k++)
		cout<<" ";
		for(j=0;j<=i*2;j++)
		{
			if(j<i)
			{
				cout<<a;
				a++;
			}
			else
			{
				cout<<a;
				a--;
			}
		}
		cout<<endl;
		s--;
	}
	for(i=n-1;i>=1;i--)
	{
		s=n-i;
		a=1;
	    for(k=1;k<=s;k++)
	    {
	    cout<<" ";
		}
		for(j=1;j<=i*2-1;j++)
		{
			if(j<i)
			{
			cout<<a;
			a++;
			}
			else
			{
			cout<<a;
			a--;
			}
		}
		cout<<endl;
		s--;
		
	}
}
		 