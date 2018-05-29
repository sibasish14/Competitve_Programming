#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll w,l,i;
	cin>>w>>l;
	ll a[w+1]={0},ans=INT64_MAX;
	cin>>a[1];
	for(i=2;i<w;i++)
	{
		cin>>a[i];
		a[i]+=a[i-1];
	}
	for(i=l;i<w;i++)
		ans=min(ans,a[i]-a[i-l]);
   	cout<<ans;
	return 0;
}