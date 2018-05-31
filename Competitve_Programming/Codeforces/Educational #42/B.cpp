#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,a,b,i,c=0,v[n],j=0,ans=0;
	cin>>n>>a>>b;
	string s;
	cin>>s;
	for(i=0;i<s.size();i++)
	{
		if(s[i] == '.')
			c++;
		else
		{
			v[j++]=c;
			c=0;
		}
	}
	if(c > 0)
		v[j++]=c;

	for(i=0;i<j;i++)
	{
		if(a < b)
			swap(a,b);
		ll z=min(a,(v[i]+1)/2),w=min(b,v[i]/2);
		a-=z;
		b-=w;
		ans+=(z+w);
	}
	cout<<ans;
	return 0;
}
