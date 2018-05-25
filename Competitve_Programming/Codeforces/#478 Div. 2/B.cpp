#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
   	ll i,j,ans=0,x=0;
   	ll a[14],tmp[14];
   	for(i=0;i<14;i++)
   		cin>>a[i];
   	for(i=0;i<14;i++)
   	{
   		x=a[i];
   		for(j=0;j<14;j++)
	   		tmp[j]=a[j];
	  	tmp[i]=0;
	   	for(j=0;j<14;j++)
	   		tmp[j]+=(x/14);
	   	x%=14;
	   	ll k=i+1;
	   	while(x--)
	   	{
	   		if(k==14)
	   			k=0;
	   		tmp[k++]++;
	   	}
	   	ll z=0;
	   	for(j=0;j<14;j++)
	   	{
	   		if(!(tmp[j]&1))
	   			z+=tmp[j];
	   	}
	   	ans=max(ans,z);
   	}
   	cout<<ans;
	return 0;
}
