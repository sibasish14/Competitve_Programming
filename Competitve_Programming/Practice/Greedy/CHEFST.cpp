#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n1,n2,m;
		cin>>n1>>n2>>m;
		cout<<n1+n2-2*min((m*(m+1))/2,min(n1,n2))<<"\n";
	}
	return 0;
}