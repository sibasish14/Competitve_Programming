#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string s;
	set<char> t[100];
	int i;
	cin>>s;
	for(i=0;i<s.size();i++)
	{
		if(s[i]!='.')
			t[i].insert(s[i]);
		if(i==0 && s[i]!='.')
			t[i+1].insert(s[i]);
		else if(i==s.size()-1 && s[i]!='.')
			t[i-1].insert(s[i]);
		else if(s[i]!='.')
		{
			t[i-1].insert(s[i]);
			t[i+1].insert(s[i]);
		}
	}
	for(i=0;i<100;i++)
	{
		if(t[i].size()==3)
		{
			cout<<"Yes";
			return 0;
		}
	}
	cout<<"No";
	return 0;
}
