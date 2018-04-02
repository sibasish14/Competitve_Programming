#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	ll t;
	cin>>t;
	while(t--)
	{
		ll k,n,i,sum=0,c=0;
		cin>>n>>k;
		ll a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			sum+=a[i];
		}
		sort(a,a+n);
		for(i=n-1;i>=0;i--)
		{
			if((2*a[i]+k) > sum)
				c++;
			else
				break;
		}
		cout<<c<<"\n";
	}
	return 0;
}