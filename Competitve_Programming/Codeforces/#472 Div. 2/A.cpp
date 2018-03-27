#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,f=0;
	cin>>n;
	string s;
	cin>>s;
	for(i=0;i<s.size()-1;i++)
	{
		if((s[i] == s[i+1]) && s[i] != '?')
		{
			cout<<"No\n";
			return 0;
		}
	}
	if(s[0] == '?' || s[s.size()-1]=='?')
	{
		cout<<"Yes\n";
		return 0;
	}
	for(i=1;i<s.size()-1;i++)
	{
		if(s[i] == '?')
		{
			if(s[i-1] == s[i+1] && s[i-1]!='?')
			{
				cout<<"Yes\n";
				return 0;
			}
			if(s[i-1] == '?' || s[i+1] == '?')
			{
				cout<<"Yes\n";
				return 0;
			}
		}
	}
	cout<<"No\n";
	return 0;
}