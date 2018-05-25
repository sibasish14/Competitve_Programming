#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,k,i,j;
    cin>>n>>k;
    char a[4][120];
    for(i=0;i<4;i++)
    	for(j=0;j<n;j++)
    		a[i][j]='.';
    if(k%2==0)
    {
    	for(j=1;j<=k/2;j++)
    	{
    		a[1][j]='#';
    		a[2][j]='#';
    	}
    }
    else
    {
    	a[1][n/2]='#';
    	k--;
    	ll tmp=1,z=1;
    	while(k--)
    	{
    		if(n/2-tmp==0)
    		{
    			tmp=1;
    			z++;
    		}
    		a[z][n/2-tmp]='#';
    		a[z][n/2+tmp]='#';
    		tmp++;
    		k--;
    	}
    }
    cout<<"YES\n";
    for(i=0;i<4;i++)
    {
    	for(j=0;j<n;j++)
    		cout<<a[i][j];
    	cout<<"\n";
    }
	return 0;
}
