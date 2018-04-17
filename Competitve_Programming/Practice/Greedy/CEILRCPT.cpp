#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	long t,p;
	int i,c;
	cin>>t;
	while(t--)
	{
		cin>>p;
		c=0;
		for(i=11;i>=0;i--)
		{
			while(pow(2,i)<=p)
			{
				c++;
				p-=pow(2,i);
			}
		}
		cout<<c<<"\n";
	}
	return 0;
} 