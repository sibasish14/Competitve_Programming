#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,i;
    cin>>n;
    int a[n];
    vector<pair<int,int> > v;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==1)
        {
            v.push_back({a[i],i});
        }
    }
    cout<<v.size()<<"\n";
    for(i=0;i<v.size()-1;i++)
    {
        cout<<v[i+1].second-v[i].second<<" ";
    }
    cout<<n-v[v.size()-1].second;
	return 0;
}
