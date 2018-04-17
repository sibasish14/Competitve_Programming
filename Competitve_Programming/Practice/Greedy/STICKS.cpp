#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,i,ans=1,k=0;
		cin>>n;
		ll a[n],cnt[1005]={0},tmp[1005];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			cnt[a[i]]++;
		}
		for(i=1000;i>=0;i--)
		{
			if(cnt[i]>=4)
			{
				tmp[k++]=i;
				tmp[k++]=i;
			}
			else if(cnt[i]>=2)
				tmp[k++]=i;
		}
		sort(tmp,tmp+k);

		if(k>=2)
			cout<<tmp[k-1]*tmp[k-2]<<"\n";
		else
			cout<<"-1\n";
	}
	return 0;
}