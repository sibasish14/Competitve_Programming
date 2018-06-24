#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string s[2];
	int i,j,ans=0;
	cin>>s[0]>>s[1];
	for(i=0;i<s[0].size()-1;i++)
	{
		if(s[0][i] == '0' && s[0][i+1] == '0' && s[1][i] == '0')
		{
			s[0][i]='X';
			s[0][i+1]='X';
			s[1][i]='X';
			ans++;
		}
		else if(s[0][i] == '0' && s[0][i+1] == '0' && s[1][i+1] == '0')
		{
			s[0][i]='X';
			s[0][i+1]='X';
			s[1][i+1]='X';
			ans++;
		}
		else if(s[0][i] == '0' && s[1][i] == '0' && s[1][i+1] == '0')
		{
			s[0][i]='X';
			s[1][i]='X';
			s[1][i+1]='X';
			ans++;
		}
		else if(s[0][i+1] == '0' && s[1][i] == '0' && s[1][i+1] == '0')
		{
			s[0][i+1]='X';
			s[0][i]='X';
			s[1][i+1]='X';
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
