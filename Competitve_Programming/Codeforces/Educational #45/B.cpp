#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,k,i,j;
	cin>>n>>k;
	ll a[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	multiset<ll> ms;
	ll l,r,mid;
	for(i=0;i<n-1;i++)
	{
		l=i+1;
		r=n-1;
		mid=(l+r)/2;
		while(l<=r)
		{
			mid=(l+r)/2;
			if(a[mid] == a[i])
				l=mid+1;
			else if(a[mid]<=a[i]+k)
			{
				ms.insert(a[i]);
				break;
			}
			else 
				r=mid-1;
		}
	}
	cout<<n-ms.size();
	return 0;
}
