#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,i,j,k=0,f=1;
    cin>>n;
    ll a[n],b[n],asum=0,bsum=0;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
        cin>>b[i];
    sort(a,a+n);
    sort(b,b+n);
    for(i=n-1,j=n-1;k<2*n;k++)
    {
        // cout<<k<<" "<<i<<" "<<j<<"\n";
        if(k%2 == 0)
        {
            if(a[i] >= b[j])
            {
                asum+=a[i];
                i--;
            }
            else j--;
        }
        else
        {
            if(b[j] >= a[i])
            {
                bsum+=b[j];
                j--;
            }
            else i--;
        }
        if(i == -1 || j == -1)
        {
            f=0;
            break;
        }
    }
    if(!f)
    {
        if(i == -1)
        {
            if(k%2)
                j--;
            while(j >= 0)
            {
                bsum+=b[j];
                j-=2;
            }
        }
        else
        {
            if(k%2 == 0)
                i--;
            while(i >= 0)
            {
                asum+=a[i];
                i-=2;
            }
        }
    }
    // cout<<asum<<" "<<bsum<<" ";
    cout<<asum-bsum;
    return 0;
}