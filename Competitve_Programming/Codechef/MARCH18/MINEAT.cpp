#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
int main() {
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,h,i;
        cin>>n>>h;
        ll a[n],mx=0,sum=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i] > mx)
                mx=a[i];
            sum+=a[i];
        }
 
        ll k=0,low=(sum/h),high=sum;
        while(low<=high)
        {
            ll ck=0,mid=(low+high)/2;
            for(i=0;i<n;i++)
            {
                if(a[i]%mid == 0)
                    ck+=(a[i]/mid);
                else
                    ck+=((a[i]/mid)+1);
            }
            if(ck<=h)
            {
                k=mid;
                high=mid-1;
            }
            else
                low=mid+1;
        }
        cout<<k<<"\n";
    }
    return 0;
}