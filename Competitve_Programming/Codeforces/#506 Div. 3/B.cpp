#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,i,ans=1,j,tmp,k;
    cin>>n;
    ll a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
    {
        tmp=1;
        k=i;
        for(j=i+1;j<n;j++,k++)
        {
            if(a[j] <= a[k]*2)
                tmp++;
            else break;
        }  
        ans=max(ans,tmp);
        i=j-1;
    }
    cout<<ans;
    return 0;
}