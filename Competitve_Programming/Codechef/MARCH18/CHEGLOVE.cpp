#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
int main() {
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n,i,flag1=1,flag2=1,j;
	    cin>>n;
	    ll l[n],g[n];
	    for(i=0;i<n;i++)
	        cin>>l[i];
	    for(i=0;i<n;i++)
	    {
	        cin>>g[i];
	        if(l[i] > g[i])
	            flag1=0;
	    }
	    for(i=n-1,j=0;i>=0;i--,j++)
	    {
	        if(l[j] > g[i])
	        {
	            flag2=0;
	            break;
	        }
	    }
	    if(flag1==1 && flag2==1)
	        cout<<"both\n";
	    else if(flag1==1 && flag2==0)
	        cout<<"front\n";
	    else if(flag1==0 && flag2==1)
	        cout<<"back\n";
	    else
	        cout<<"none\n";
	}
	return 0;
	
}
 