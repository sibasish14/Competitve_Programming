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
    string s;
    cin>>s;
    s='0'+s+'0';
    for(i=1;i<s.size()-1;i++)
    {
    	if(s[i] == '0')
    	{
    		if((s[i-1]=='0' || i==1) && (s[i+1]=='0' || i+1==s.size()-1))
    		{
    			cout<<"No\n";
    			return 0;
    		}
    	}
    	if(s[i]=='1' && s[i+1]=='1')
    	{
    		cout<<"No\n";
    		return 0;
    	}
    }
    cout<<"Yes\n";
	return 0;
}
