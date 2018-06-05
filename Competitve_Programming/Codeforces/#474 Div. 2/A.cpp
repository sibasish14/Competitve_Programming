#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string s,s1;
	cin>>s;
	s1=s;
	sort(s1.begin(),s1.end());
	ll a=0,b=0,c=0,i;
	for(i=0;i<s.size();i++)
	{
		if(s[i] == 'a')
			a++;
		if(s[i] == 'b')
			b++;
		if(s[i] == 'c')
			c++;
	}
	if(s == s1 && (c == a || c == b) && a>0 && b>0 && c>0)
		cout<<"YES\n";
	else
		cout<<"NO\n";
	return 0;
}
