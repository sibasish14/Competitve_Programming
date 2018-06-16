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
	ll r,x1,y1,x2,y2;
	cin>>r>>x1>>y1>>x2>>y2;
	ll d=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
	if(d>=r*r)
	{
		cout<<x1<<" "<<y1<<" "<<r;
		return 0;
	}
	double dist=1.0*sqrt(1.0*d);
	double X,Y,R;
	if(dist==0)
	{
		R=1.0*r/2;
		X=x1+R;
		Y=y1;
		cout<<X<<" "<<Y<<" "<<R;
		return 0;
	}
	R=1.0*(dist+r)/2;
	X=1.0*x2 + 1.0*(x1-x2)/dist*R;
	Y=1.0*y2 + 1.0*(y1-y2)/dist*R;
	cout<<X<<" "<<Y<<" "<<R;
	return 0;
}
