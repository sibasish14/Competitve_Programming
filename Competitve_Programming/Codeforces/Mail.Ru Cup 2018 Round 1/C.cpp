#include<bits/stdc++.h>
#define mod 1000000007
#define F first
#define S second
using namespace std;
typedef long long int ll;

int l[1010],r[1010],a[1010],pref[1010],suff[1010];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,i,j;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>l[i];
    for(i=1;i<=n;i++)
        cin>>r[i];
    if(l[1] > 0 || r[n] > 0)
    {
        cout<<"NO";
        return 0;
    }
    memset(a,0,sizeof(a));
    int val=n;
    for(i=1;i<=n;i++)
    {
        memset(pref,0,sizeof(pref));
        memset(suff,0,sizeof(suff));
        for(j=1;j<=n;j++)
        {
            if(!l[j] && !r[j] && !a[j])
            {
                a[j]=val;
                pref[j]=suff[j]=1;
            }
        }
        for(j=1;j<=n;j++)
            pref[j]+=pref[j-1];
        for(j=n;j>=1;j--)
            suff[j]+=suff[j+1];
        for(j=1;j<=n;j++)
        {
            l[j]-=pref[j];
            r[j]-=suff[j];
        }
        val--;
    }
    for(i=1;i<=n;i++)
    {
        if(!a[i])
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES\n";
    for(i=1;i<=n;i++)
        cout<<a[i]<<" ";
    return 0;
}