#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,k,i,f=0;
	cin>>n>>k;
	string s;
	cin>>s;
	vector<ll> v[30];
	for(i=0;i<n;i++)
	{
		v[s[i]-97].push_back(i);
	}
	for(i=0;i<26;i++)
	{
		if(!v[i].empty())
		{
			set<ll> st;
			for(auto a:v[i])
				st.insert(a);
			for(auto a:st)
			{
				s[a]=' ';
				k--;
				if(k==0)
				{
					f=1;
					break;
				}
			}
		}
		if(f==1)
			break;
	}
	string ans="";
	for(i=0;i<n;i++)
		if(s[i] != ' ')
			ans+=s[i];
	cout<<ans;
	return 0;
}
