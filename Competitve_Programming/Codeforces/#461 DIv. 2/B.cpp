#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,k,cnt=0,i,j;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            k=(i^j);
            if(k >= j && 1 <= k && k <= n && (i+j) > k)
                cnt++;
        }
    }
    cout<<cnt;
    return 0;
}