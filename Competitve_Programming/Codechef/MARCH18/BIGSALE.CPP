#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n,i;
	    cin>>n;
	    long double pr,qty,dis,loss=0.0,np,np1;
	    for(i=0;i<n;i++)
	    {
	        cin>>pr>>qty>>dis;
	        np=(pr + dis*pr*0.01);
	        np1=(np-dis*np*0.01);
	        loss+=(pr-np1)*qty;
	    }
	    cout<<fixed;
	    cout<<loss<<setprecision(10)<<"\n";
	}
	return 0;
}