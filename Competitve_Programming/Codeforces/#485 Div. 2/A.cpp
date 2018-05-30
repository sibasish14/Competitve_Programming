#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,i;
	cin>>n;
	string s[n];
	map<string,string> mp;
	map<string,string>::iterator it;
	mp["purple"]="Power";
	mp["green"]="Time";
	mp["blue"]="Space";
	mp["orange"]="Soul";
	mp["red"]="Reality";
	mp["yellow"]="Mind";
	int c=6-n;
	for(i=0;i<n;i++)
	{	
		cin>>s[i];
		mp.erase(s[i]);
	}
	cout<<c<<"\n";
	for(it=mp.begin();it!=mp.end();it++)
		cout<<it->second<<"\n";
	return 0;
}
