#include<bits/stdc++.h>
#define mod 1000000007
#define F first
#define S second
using namespace std;
typedef long long int ll;

ll t,n,i,j,k,f;
ll a[100010],b[100010];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n-1;i++)
        {
            if(a[i] > a[i+1])
                break;
        }
        if(i == n)
        {
            cout<<"YES\n";
            continue;
        }
        k=0,f=1;
        for(j=i+1;j<n;j++)
            b[k++]=a[j];
        for(j=0;j<=i;j++)
            b[k++]=a[j];
        sort(a,a+n);
        for(i=0;i<n;i++)
        {
            if(b[i] != a[i])
            {
                f=0;
                break;
            }
        }
        if(f)
            cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}