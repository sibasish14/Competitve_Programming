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
   	ll a[n],chk[300];
   	for(i=0;i<n;i++)
   		cin>>a[i];
   	memset(chk,-1,sizeof(chk));
   	for(i=0;i<n;i++)
   	{
   		if(chk[a[i]]==-1)
   		{
   			ll mn=max(0LL,a[i]-k+1);
	   		for(j=a[i];j>=mn && (chk[j]==-1 || (a[i]-k+1)<=chk[j]);j--);
   			j++;
   			for(ll m=j;m<=a[i];m++)
   				chk[m]=j;
   			cout<<chk[a[i]]<<" ";
   		}
   		else
   			cout<<chk[a[i]]<<" ";
   	}
	return 0;
}
