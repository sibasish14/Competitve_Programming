#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m,i,ans=0;
    cin>>n>>m;
    int a[m];
    map<int,int> mp;
    for(i=0;i<m;i++)
    {
        cin>>a[i];
        mp[a[i]]++;
    }
    for(i=1;i<=100;i++)
    {
        int tmp=0;
        for(auto z:mp)
            tmp+=(z.second/i);
        if(tmp >= n)
            ans=i;
    }
    cout<<ans;
    return 0;
}
