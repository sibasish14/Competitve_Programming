#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int l,r,a,mn,mx,ans=0;
	cin>>l>>r>>a;
	mn=min(r,l);
	mx=max(r,l);
	if(mn+a <= mx)
	{
		cout<<(mn+a)*2;
		return 0;
	}
	ans=mx;
	a-=(mx-mn);
	ans+=(a/2);
	cout<<ans*2;
	return 0;
}
