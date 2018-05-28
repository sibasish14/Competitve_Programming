#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
   	ll n,a,b,sum=0;
   	cin>>n>>a>>b;
   	ll s[n],i;
   	for(i=0;i<n;i++)
   	{
   		cin>>s[i];
   		sum+=s[i];
   	}
   	sort(s+1,s+n);
   	ll c=0;
   	for(i=n-1;i>=1;i--)
   	{
   		if(s[0]*a/b >= sum)
   		{
   			cout<<c;
   			return 0;
   		}
   		else
   		{
   			c++;
   			sum-=s[i];
   		}
   	}
   	cout<<c;
	return 0;
}
