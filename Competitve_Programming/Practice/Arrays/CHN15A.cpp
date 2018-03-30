#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,i,z,c=0;
		cin>>n>>k;
		for(i=0;i<n;i++)
		{
			cin>>z;
			if((z+k)%7 == 0)
				c++;
		}
		cout<<c<<"\n";
	}
	return 0;
}