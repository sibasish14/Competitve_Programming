#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
   	ll n,m,cl,ce,v,i,q;
   	cin>>n>>m>>cl>>ce>>v;
   	ll l[cl],e[ce];
   	for(i=0;i<cl;i++)
   		cin>>l[i];
   	sort(l,l+cl);
   	for(i=0;i<ce;i++)
   		cin>>e[i];
   	sort(e,e+ce);
   	cin>>q;
   	while(q--)
   	{
   		ll xa,xb,ya,yb,ans=INT64_MAX;
   		cin>>xa>>ya>>xb>>yb;
   		if(xa==xb)
   			ans=abs(ya-yb);
   		else
   		{
   			ll p_stair,p_lift;
   			p_stair=lower_bound(l,l+cl,ya)-l;
   			if(p_stair < cl)
   				ans=min(ans,abs(xa-xb)+abs(ya-l[p_stair])+abs(yb-l[p_stair]));
   			if(p_stair > 0)
   				ans=min(ans,abs(xa-xb)+abs(ya-l[p_stair-1])+abs(yb-l[p_stair-1]));
   			p_lift=lower_bound(e,e+ce,ya)-e;
   			if(p_lift < ce)
   				ans=min(ans,(abs(xa-xb)+v-1)/v+abs(ya-e[p_lift])+abs(yb-e[p_lift]));
   			if(p_lift > 0)
   				ans=min(ans,(abs(xa-xb)+v-1)/v+abs(ya-e[p_lift-1])+abs(yb-e[p_lift-1]));
   		}
   		cout<<ans<<"\n";
   	}
	return 0;
}
