#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,m,i,j;
		cin>>n>>m;
		ll a[n][m];
		for(i=0;i<n;i++)
			for(j=0;j<m;j++)
				cin>>a[i][j];

		ll tmp=1,f=1;
		for(i=0;i<m;i++)	//Check for 1st row elements
		{
			if(a[0][i] == -1)
				a[0][i]=tmp;
			else
				tmp=a[0][i];
		}
		for(i=0;i<m-1;i++)
		{
			if(a[0][i] > a[0][i+1])
			{
				f=0;
				break;
			}
		}
		if(f==0)
		{
			cout<<"-1\n";
			continue;
		}

		tmp=1,f=1;
		for(i=0;i<n;i++)	//Check for 1st coloumn elements
		{
			if(a[i][0] == -1)
				a[i][0]=tmp;
			else
				tmp=a[i][0];
		}
		for(i=0;i<n-1;i++)
		{
			if(a[i][0] > a[i+1][0])
			{
				f=0;
				break;
			}
		}
		if(f==0)
		{
			cout<<"-1\n";
			continue;
		}

		f=1;
		for(i=1;i<n;i++)	//Check for remaining elements
		{
			for(j=1;j<m;j++)
			{
				if(a[i][j] == -1)
					a[i][j]=max(a[i][j-1],a[i-1][j]);
				if((a[i][j] < a[i][j-1]) || (a[i][j] < a[i-1][j]))
				{
					f=0;
					break;
				}
			}
			if(f==0)
				break;
		}
		if(f==0)
		{
			cout<<"-1\n";
		}
		else
		{
			for(i=0;i<n;i++)
			{
				for(j=0;j<m;j++)
					cout<<a[i][j]<<" ";
				cout<<"\n";
			}
		}
	}
	return 0;
}