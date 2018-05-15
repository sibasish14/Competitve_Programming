#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin>>n;
    while(n--)
    {
    	ll p,q,b;
    	cin>>p>>q>>b;
    	if(p==0)
    		cout<<"Finite\n";
    	else
    	{
    		p=p%q;
    		ll k=__gcd(p,q);
    		p/=k;
    		q/=k;
    		while(1)
    		{
    			k=__gcd(q,b);
    			if(k==1)
    			{
    				if(b%q==0)
    				{
    					cout<<"Finite\n";
    					break;
    				}
    				else
    				{
    					cout<<"Infinite\n";
    					break;
    				}
    			}
    			else
    				while(q%k==0)
    					q/=k;
    		}
    	}
    }
	return 0;
}
