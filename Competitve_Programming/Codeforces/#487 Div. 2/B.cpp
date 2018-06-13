#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,p,i=0,f=0,j;
	cin>>n>>p;
	string s,s2="";
	cin>>s;
	s2=s;
	for(i=0,j=i+p;j<n;j++,i++)
	{
		if(s[i]=='.' && s[j]=='.')
		{
			s2[i]='1';
			s2[j]='0';
			f=1;
			break;
		}
		else if(s[i]=='.')
		{
			if(s[j]=='1')
				s2[i]='0';
			else
				s2[i]='1';
			f=1;
			break;
		}
		else if(s[j]=='.')
		{
			if(s[i]=='1')
				s2[j]='0';
			else
				s2[j]='1';
			f=1;
			break;
		}
		else if(s[i] != s[j])
		{
			f=1;
			break;
		}
	}
	if(!f)
		cout<<"No";
	else
	{
		for(i=0;i<s2.size();i++)
			if(s2[i]=='.')
				s2[i]='0';
		cout<<s2;
	}
	return 0;
}
