#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,ans=0,i;
	cin>>n;
	for(i=1;i<=n/2;i++)
		if(n%i==0)
			ans++;
	cout<<ans;
	return 0;
}
