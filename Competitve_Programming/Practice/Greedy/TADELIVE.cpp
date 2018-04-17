#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{	
	ll n,x,y,i;
	cin>>n>>x>>y;
	ll dp[n]={0},a[n],b[n],sum=0;
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++)
		cin>>b[i];
	for(i=0;i<n;i++)
	{
		sum+=a[i];
		b[i]-=a[i];
	}
	sort(b,b+n,greater<int>());
	for(i=0;(n-i>x) || (i<y && b[i]>=0);i++)
	{
		sum+=b[i];
	}
	cout<<sum<<"\n";
	return 0;
}