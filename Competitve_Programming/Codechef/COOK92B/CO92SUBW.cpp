#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll t,i;
	cin>>t;
	ll arr[100100]={0};
	arr[1]=1;
	for(i=2;i<100100;i++)
		arr[i]=arr[i-1]+i;

	while(t--)
	{
		ll x,a=0,b=0,ans=0;
		cin>>x;
		ll z=((-1+sqrt(1+(8*x)))/2);
		a=z+(x-arr[z]);
		b=(z+1)+(arr[z+1]-x);
		ans=min(a,b);
		cout<<ans<<"\n";
	}
	return 0;
}