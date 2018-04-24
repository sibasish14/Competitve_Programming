#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
    	ll n,i,j,dee=0,dum=0;
    	string s1,s2;
    	cin>>n>>s1;
    	for(i=0;i<n;i++)
    	{
    		cin>>s2;
    		for(j=0;j<s2.size();j++)
    		{
    			if(s2[0] == '0' && s2[j] == '0')
    				dee++;
    			else if(s2[0] == '1' && s2[j] == '1')
    				dum++;
    		}
    	}
    	if(dee == dum)
    		cout<<(s1 == "Dee" ? "Dum\n" : "Dee\n");
    	else
    		cout<<(dee > dum ? "Dee\n" : "Dum\n");
    }
	return 0;
}
