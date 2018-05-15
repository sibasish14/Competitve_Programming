#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,m,i,j;
    cin>>n>>m;
    char a[n+2][m+2]={'?'};
    for(i=1;i<=n;i++)
    	for(j=1;j<=m;j++)
    		cin>>a[i][j];

    ll f=1,c=0;
    for(i=1;i<=n;i++)
    {
    	for(j=1;j<=m;j++)
    	{
    		c=0;
    		if((a[i][j] >= '1' && a[i][j] <= '8') || a[i][j] == '.')
    		{
    			if(a[i-1][j-1]=='*')
  		  			c++;
    			if(a[i-1][j]=='*')
    				c++;
    			if(a[i-1][j+1]=='*')
    				c++;
	    		if(a[i][j-1]=='*')
    				c++;
    			if(a[i][j+1]=='*')
    				c++;
	    		if(a[i+1][j-1]=='*')
    				c++;
    			if(a[i+1][j]=='*')
    				c++;
    			if(a[i+1][j+1]=='*')
    				c++;
    			ll k=a[i][j]-48;
    			if((k!=c && (a[i][j] >= '1' && a[i][j] <= '8')) || (c!=0 && a[i][j] == '.'))
    				f=0;
    		}
    		if(f==0)
    			break;
    	}
    	if(f==0)
    		break;
    }
    if(f)
    	cout<<"YES";
    else
    	cout<<"NO";
	return 0;
}
