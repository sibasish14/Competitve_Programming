#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,i;
		cin>>n>>k;
		int a[n],b[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			b[i]=i+1;
		}
		int f=1,c=0,ans=0;
		do
		{
			c=0,f=1;
			for(i=0;i<n;i++)
			{
				if(a[i]!=b[i] && a[i]!=0)
				{
					f=0;
					break;
				}
			}
			if(f)
				for(i=1;i<n;i++)
					if(b[i] > b[i-1])
						c++;
			if(c==k && f)
				ans++;
		}while(next_permutation(b,b+n));
		cout<<ans<<"\n";
	}
	return 0;
}
