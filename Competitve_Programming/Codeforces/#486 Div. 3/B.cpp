#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,i,f=1;
	cin>>n;
	string s[n];
	vector<pair<ll,string> > a;
	for(i=0;i<n;i++)
	{
		cin>>s[i];
		a.push_back(make_pair(s[i].size(),s[i]));
	}
	sort(a.begin(),a.begin()+n);
	for(i=0;i<n-1;i++)
	{
		if(a[i+1].second.find(a[i].second) == string::npos)
		{
			f=0;
			break;
		}
	}
	if(f)
	{
		cout<<"YES\n";
		for(auto v:a)
			cout<<v.second<<"\n";
	}
	else
		cout<<"NO\n";
	return 0;
}