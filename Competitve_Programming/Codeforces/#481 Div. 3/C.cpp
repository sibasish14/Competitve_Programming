#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,m,i;
    cin>>n>>m;
    ll a[n],b[m];
    for(i=0;i<n;i++)
    	cin>>a[i];
    for(i=0;i<m;i++)
    	cin>>b[i];

    ll j=0,ans1=0,ans2=0;
    for(i=1;i<n;i++)
    	a[i]=a[i]+a[i-1];
    for(i=0;i<m;i++)
    {
    	while(1)
    	{
    		if(b[i] <= a[j])
    		{
    			if(j == 0)
	    		{
    				ans1=1;
    				ans2=b[i];
    			}
    			else
  	  			{
    				ans1=j+1;
    				ans2=b[i]-a[j-1];
  		  		}
  		  		break;
    		}
   	 		else
    			j++;
    	}
    	cout<<ans1<<" "<<ans2<<"\n";
    }
	return 0;
}
