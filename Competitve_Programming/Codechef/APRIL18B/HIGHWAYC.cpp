#include<bits/stdc++.h>
#define diff 0.000001
using namespace std;
typedef long long int ll;

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,s,y,i;
		cin>>n>>s>>y;
		ll v[n],d[n],p[n],c[n];
		for(i=0;i<n;i++)
			cin>>v[i];
		for(i=0;i<n;i++)
			cin>>d[i];
		for(i=0;i<n;i++)
			cin>>p[i];
		for(i=0;i<n;i++)
			cin>>c[i];

		long double ans=0.0,back_end_0,back_end_curr;
		for(i=0;i<n;i++)
		{
			back_end_0=p[i]+(c[i]*(d[i]==0?1:-1));
			back_end_curr=back_end_0+(ans+1.0*y/s)*v[i]*(d[i]==0?-1:1);

			if((d[i]==1 && back_end_0>diff) || (d[i]==0 && back_end_0<diff) || (abs(back_end_0)<ans*v[i]+diff))
				ans+=(1.0*y/s);
			else if((d[i]==1 && back_end_curr<-diff && back_end_curr+c[i]<-diff) || (d[i]==0 && back_end_curr>diff && back_end_curr-c[i]>diff))
				ans+=(1.0*y/s);
			else
			{
				ans+=(abs(back_end_0)-1.0*v[i]*ans)/v[i]*1.0;
				ans+=1.0*y/s;
			}
		}
		cout<<fixed<<setprecision(6)<<ans<<"\n";
	}	
	return 0;
}