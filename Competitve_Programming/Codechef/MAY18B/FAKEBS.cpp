#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
   	int t;
   	cin>>t;
   	while(t--)
   	{
   		ll n,q,i;
   		cin>>n>>q;
   		ll a[n+1];
   		vector<ll> v;
   		map<ll,ll> mp;
   		for(i=0;i<n;i++)
   		{
   			cin>>a[i+1];
   			v.push_back(a[i+1]);
   			mp[a[i+1]]=i+1;
   		}
   		sort(v.begin(), v.end());
   		while(q--)
   		{
   			ll x,idx=0,mx=0,mn=0,l=1,h=n,mid=0;
   			vector<ll> lv,hv;
   			cin>>x;
   			idx=lower_bound(v.begin(), v.end(),x)-v.begin()+1;
   			mx=n-idx,mn=idx-1;
   			while(l<=h)
   			{
   				mid=(l+h)/2;
   				if(mp[x] > mid)
   				{
   					lv.push_back(mid);
   					l=mid+1;
   				}
   				else if(mp[x] < mid)
   				{
   					hv.push_back(mid);
   					h=mid-1;
   				}
   				else
   					break;
   			}
   			ll c1=0,c2=0;
   			for(auto z:lv)
   			{
   				if(a[z] > x)
   					c1++;
   				else
   					mn--;
   			}
   			for(auto z:hv)
   			{
   				if(a[z] < x)
   					c2++;
   				else
   					mx--;
   			}
   			if(c1 <= mn && c2 <= mx)
   				cout<<max(c1,c2)<<"\n";
   			else
   				cout<<"-1\n";
   		}
   	}
	return 0;
}
