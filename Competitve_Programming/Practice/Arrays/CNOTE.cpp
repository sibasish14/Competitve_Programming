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
		ll x,y,k,n,i,p,c,f=0;
		cin>>x>>y>>k>>n;
		for(i=0;i<n;i++)
		{
			cin>>p>>c;
			if((p >= x-y) && (k >= c))
				f=1;
		}
		if(f == 1)
			cout<<"LuckyChef\n";
		else
			cout<<"UnluckyChef\n";
	}
	return 0;
}