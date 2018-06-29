#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,ans=0,i,j;
	cin>>n;
	ll a[2*n+10];
	for(i=0;i<2*n;i++)
		cin>>a[i];
	for(i=0;i<2*n;i++)
	{
		ll ind=0;
		for(j=i+1;j<2*n;j++)
		{
			if(a[j] == a[i])
			{
				ind=j;
				break;
			}
		}
		for(j=ind;j>i+1;j--)
		{
			swap(a[j],a[j-1]);
			ans++;
		}
		i++;
	}
	cout<<ans;
	return 0;
}
