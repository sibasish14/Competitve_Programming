#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	int n,m,i;
	cin>>n>>m;
	int c,cnt[n+1]={0};
	for(i=0;i<m;i++)
	{
		cin>>c;
		cnt[c]++;
	}
	int ans=1e19;
	for(i=1;i<=n;i++)
	{
		if(ans>cnt[i])
			ans=cnt[i];
	}
	cout<<ans<<"\n";
	return 0;
}