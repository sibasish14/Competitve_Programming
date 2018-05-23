#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;

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
    	ll a[n],ans;
    	for(i=0;i<n;i++)
    		cin>>a[i];
    	if(n==1)
    	{
    		cout<<a[0]*2<<"\n";
    		continue;
    	}
    	ans=(a[0]^a[1]);
    	for(i=2;i<n;i++)
   			ans=(ans^a[i]);
   		cout<<ans*2<<"\n";
    }
	return 0;
}
