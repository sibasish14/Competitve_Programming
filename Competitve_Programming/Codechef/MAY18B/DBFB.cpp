#include<bits/stdc++.h>
#define mod 1000000007
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
    	ll m,n,i;
    	cin>>m>>n;
    	ll a[m],b[m],suma=0,sumb=0;
    	for(i=0;i<m;i++)
    	{
    		cin>>a[i];
    		suma=(suma+a[i])%mod;
    	}
    	for(i=0;i<m;i++)
    	{
    		cin>>b[i];
    		sumb=(sumb+b[i])%mod;
    	}
    	ll fib[n];
    	fib[0]=suma;
    	fib[1]=sumb;
    	for(i=2;i<n;i++)
    		fib[i]=(fib[i-1]+fib[i-2])%mod;

    	cout<<(fib[n-1]*m)%mod<<"\n";
    }
	return 0;
}
