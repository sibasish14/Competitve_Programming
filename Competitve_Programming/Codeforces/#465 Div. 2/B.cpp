#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,i,ans=0;
	string s;
	cin>>n>>s;
	ll x[100010],y[100010];
	for(i=0;i<s.size();i++)
	{
		if(s[i]=='R')
		{
			x[i+1]=x[i]+1;
			y[i+1]=y[i];
		}
		else
		{
			y[i+1]=y[i]+1;
			x[i+1]=x[i];
		}
		// cout<<x[i+1]<<" "<<y[i+1]<<"\n";
	}
	if(n==1)
	{
		cout<<"0";
		return 0;
	}
	for(i=1;i<=s.size()-2;i++)
	{
		if(x[i]==x[i+1] && x[i+1]==x[i+2] && y[i+1]==x[i+1] && y[i]==y[i+1]-1 && y[i+2]==y[i+1]+1)
			ans++;
		else if(y[i]==y[i+1] && y[i+1]==y[i+2] && x[i+1]==y[i+1] && x[i]==x[i+1]-1 && x[i+2]==x[i+1]+1)
			ans++;
	}
	cout<<ans;
	return 0;
}
