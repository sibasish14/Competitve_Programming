#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cout<<fixed<<setprecision(6);
	int t;
	cin>>t;
	while(t--)
	{
		ll r,l,c,vin;
		cin>>r>>l>>c>>vin;
		double ans=1.0*(r*r*c)/(4*l);
		cout<<1-ans<<"\n";
	}
	return 0;
}
