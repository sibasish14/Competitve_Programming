#include<bits/stdc++.h>
#define mod 1000000007
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
		ll a,b,c,u,v;
		cin>>a>>b>>c>>u>>v;
		float t1,t2;
		t1=1.0*abs(a-c)/u;
		t2=1.0*abs(b-c)/v;
		if(t1 == t2)
			cout<<"Draw\n";
		else if(t1 <= t2)
			cout<<"Chef\n";
		else
			cout<<"Kefa\n";
	}   
	return 0;
}
