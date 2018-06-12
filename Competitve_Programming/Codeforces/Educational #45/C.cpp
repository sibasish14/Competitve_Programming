#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

ll solve(string s)
{
	ll z=0,i;
	for(i=0;i<s.size();i++)
	{
		if(s[i]=='(')
			z++;
		else
			z--;
		if(z<0)
			return z;
	}
	return z;
}

string mirror(string s)
{
	ll i;
	reverse(s.begin(), s.end());
	for(i=0;i<s.size();i++)
	{
		if(s[i]=='(')
			s[i]=')';
		else
			s[i]='(';
	}
	return s;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,i,ans=0,diff=0;
	cin>>n;
	string s[n];
	ll cnt[300010]={0};
	for(i=0;i<n;i++)
	{
		cin>>s[i];
		diff=solve(s[i]);
		// cout<<diff<<" ";
		if(diff>=0)
			cnt[diff]++;
	}
	for(i=0;i<n;i++)
	{
		diff=solve(mirror(s[i]));
		// cout<<diff<<" ";
		if(diff>=0)
			ans+=cnt[diff];
	}
	cout<<ans;
	return 0;
}
