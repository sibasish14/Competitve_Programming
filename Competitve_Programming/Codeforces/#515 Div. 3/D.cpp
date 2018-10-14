#include<bits/stdc++.h>
#define mod 1000000007
#define F first
#define S second
using namespace std;
typedef long long int ll;

ll n,m,k,i;
ll a[200010];

bool check(ll x)
{
    ll box_num=1;
    ll cur=k;
    for(i=x;i<=n;i++)
    {
        if(cur-a[i] < 0)
        {
            box_num++;
            cur=k-a[i];
        }
        else cur-=a[i];
        if(box_num > m)
            return false;
    }
    return true;
}

ll binSearch(ll low,ll high)
{
    while(low < high)
    {
        ll mid=(low+high)/2;
        if(check(mid))
            high=mid;
        else low=mid+1;
    }
    return low;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n>>m>>k;
    for(i=1;i<=n;i++)
        cin>>a[i];
    cout<<n-binSearch(1,n)+1;
    return 0;
}