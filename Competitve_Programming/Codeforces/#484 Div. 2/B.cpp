#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,i;
    cin>>n;
    ll w[n];
    vector<ll> extv;
    vector<pair<ll,ll>> intv;
    for(i=0;i<n;i++)
    {
    	cin>>w[i];
    	intv.push_back(make_pair(w[i],i+1));
    }
    sort(intv.begin(),intv.end());
    string s;
    cin>>s;

    ll j=0;
    for(i=0;i<s.size();i++)
    {
    	if(s[i]=='0')
    	{
    		cout<<intv[j].second<<" ";
    		extv.push_back(intv[j].second);
    		j++;
    	}
    	else
    	{
    		cout<<extv[extv.size()-1]<<" ";
    		extv.pop_back();
    	}
    }
	return 0;
}
