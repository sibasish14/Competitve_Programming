#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

ll solve(char a,char b,string s)
{
	ll i,j,m=0,n=0,z=0;
	for(i=s.size()-1;i>=0;i--)
	{
		if(s[i] == b)
		{
			m=1;
			for(j=i;j<s.size()-1;j++)
			{
				swap(s[j],s[j+1]);
				z++;
			}
			break;
		}
	}
	for(i=s.size()-2;i>=0;i--)
	{
		if(s[i] == a)
		{
			n=1;
			for(j=i;j<s.size()-2;j++)
			{
				swap(s[j],s[j+1]);
				z++;
			}
			break;
		}
	}
	if(m == 0 || n == 0)
		return INT64_MAX;
	if(s[0] == '0')
	{
		for(i=1;i<s.size()-2;i++)
		{
			if(s[i]!='0')
			{
				z+=i;
				break;
			}
		}
	}
	return z;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string s;
	cin>>s;
	if(s.size()==1)
	{
		cout<<"-1";
		return 0;
	}
	ll ans=INT64_MAX;
	ans=min(ans,solve('2','5',s));
	ans=min(ans,solve('5','0',s));
	ans=min(ans,solve('7','5',s));
	ans=min(ans,solve('0','0',s));
	if(ans == INT64_MAX)
		cout<<"-1";
	else
		cout<<ans;
	return 0;
}
