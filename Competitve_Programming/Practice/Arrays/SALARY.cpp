#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,i,sum=0;
		cin>>n;
		ll w[n];
		for(i=0;i<n;i++)
		{
			cin>>w[i];
			sum+=w[i];
		}
		sort(w,w+n);
		cout<<sum - n*w[0]<<"\n";
	}
	return 0;
}