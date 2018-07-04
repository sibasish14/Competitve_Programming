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
        v.push_back({a[i],i+1});
    }
    if(n == 1)
    {
        cout<<"-1";
        return 0;
    }
    int sum=0;
    sort(v.begin(),v.end());
    for(i=n-1;i>=1;i--)
        sum+=v[i].first;
    if(sum == v[0].first)
    {
        cout<<-1;
        return 0;
    }
    cout<<n-1<<"\n";
    for(i=n-1;i>=1;i--)
        cout<<v[i].second<<" ";
	return 0;
}
