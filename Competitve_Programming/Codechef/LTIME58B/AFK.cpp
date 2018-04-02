#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll a,b,c,x,y,z;
		cin>>a>>b>>c;
		x=b-a;
		y=c-b;
		z=abs(x-y);
		cout<<(z/2 + z%2)<<"\n";
	}
	return 0;
}