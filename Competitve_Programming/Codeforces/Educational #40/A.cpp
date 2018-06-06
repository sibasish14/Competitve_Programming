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
	string s;
	cin>>s;
	vector<char> v;
	for(i=0;i<s.size();i++)
	{
		if(i==n-1)
			v.push_back(s[i]);
		else if((s[i]=='U' && s[i+1]=='R') || (s[i]=='R' && s[i+1]=='U'))
		{
			v.push_back('D');
			i++;
		}
		else
			v.push_back(s[i]);
	}
	cout<<v.size();
	return 0;
}
