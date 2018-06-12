#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,m,a,b,ans=0;
	cin>>n>>m>>a>>b;
	ll rem=n%m;
	ans=rem*b;
	rem=(m-rem);
	ans=min(ans,rem*a);
	cout<<ans;
	return 0;
}
