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
    	ll n,i;
    	cin>>n;
    	ll a[n],g;
    	for(i=0;i<n;i++)
    		cin>>a[i];
    	g=a[0];
    	for(i=1;i<n;i++)
    		g=__gcd(g,a[i]);
    	if(g == 1)
    		cout<<"0\n";
    	else
    		cout<<"-1\n";
    }
	return 0;
}
