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
	set<ll> s;
	ll z;
	for(i=0;i<n;i++)
	{
		cin>>z;
		if(z!=0)
			s.insert(z);
	}
	cout<<s.size();
	return 0;
}
