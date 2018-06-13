#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		string s,r="";
		ll i,c1=0,c2=0;
		cin>>s;
		for(i=0;i<s.size();i++)
		{
			if(s[i]=='f' || s[i]=='r' || s[i]=='i' || s[i]=='e' || s[i]=='a' || s[i]=='z')
			{
				c1++;
				if(c2>0)
				    r+=to_string(c2);
				c2=0;
			}
			else
			{
				c2++;
				if(c1>0)
					r+=to_string(c1);
				c1=0;
			}
		}
		if(c1>0)
		    r+=to_string(c1);
		else if(c2>0)
		    r+=to_string(c2);
		cout<<r<<"\n";
	}
	return 0;
}
