#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
int main() {
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n,i,j;
	    cin>>n;
	    ll a[n],ans=0;
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    ll c=1;
	    for(i=0;i<n;i++)
	    {
	        if(a[i]==a[i+1])
            {
                c++;
            }
            else
            {
                if(c>1 || i==n-1)
                {
                    ans+=(c-1);
                    c=1;
                }
            }
        }
 
	    cout<<ans<<"\n";
	}
	return 0;
}