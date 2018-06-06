#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cout<<fixed<<setprecision(10);
	ll hh,mm,time,h,d,c,n;
	cin>>hh>>mm;
	cin>>h>>d>>c>>n;
	time=hh*60+mm;
	ll disc=1200,req1=0,req2=0;
	long double ans1=0,ans2=0;
	if(time >= disc)
	{
		req1=ceil(1.0*h/n);
		ans1=0.8*req1*c;
		cout<<ans1<<"\n";
		return 0;
	}
	req1=ceil(1.0*(h+(disc-time)*d)/n);
	ans1=0.8*req1*c;
	req2=ceil(1.0*h/n);
	ans2=req2*c;
	cout<<min(ans1,ans2)<<"\n";
	return 0;
}
