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
    	ll n,c,i,z;
    	cin>>n>>c;
    	for(i=0;i<n;i++)
    	{
    		cin>>z;
    		c-=z;
    	}
    	if(c < 0)
    		cout<<"No\n";
    	else
    		cout<<"Yes\n";
    }
    return 0;
}