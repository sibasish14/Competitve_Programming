#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll n,d,i,c=0;
	cin>>n>>d;
	ll a[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	for(i=0;i<n-1;i++)
	{
		if(a[i+1]-a[i] <= d)
		{
			c++;
			i++;
		}
	}
	cout<<c<<"\n";
	return 0;
}