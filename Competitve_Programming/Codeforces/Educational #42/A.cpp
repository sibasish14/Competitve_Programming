#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,i;
	cin>>n;
	ll a[n];
	cin>>a[0];
	for(i=1;i<n;i++)
	{
		cin>>a[i];
		a[i]+=a[i-1];
	}
	for(i=0;i<n;i++)
	{
		if(a[i] >= 1.0*a[n-1]/2)
		{
			cout<<i+1;
			return 0;
		}
	}
	return 0;
}
