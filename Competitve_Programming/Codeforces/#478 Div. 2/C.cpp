#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	ll n,q,ans=0,k,i;
	cin>>n>>q;
	ll a[n];
	cin>>a[0];
	for(i=1;i<n;i++)
	{
		cin>>a[i];
		a[i]+=a[i-1];
	}
	// for(i=0;i<n;i++)
	// 	cout<<a[i]<<" ";
	ll z=0;
	for(i=0;i<q;i++)
	{
		cin>>k;
		z+=k;
		if(z >= a[n-1])
		{
			z=0;
			ans=0;
		}
		else
			ans=upper_bound(a,a+n,z)-a;
		cout<<n-ans<<"\n";
	}   	
	return 0;
}
