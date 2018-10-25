#include<bits/stdc++.h>
#define mod 1000000007
#define F first
#define S second
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll w,h,k,i,ans=0;
    cin>>w>>h>>k;
    i=1;
    while((w-4*(i-1))*(h-4*(i-1)) > 1 && k)
    {
        ans+=(2*(w-4*(i-1))+2*((h-4*(i-1))-2));
        i++;
        k--;
    }
    if((w-4*(i-1))+(h-4*(i-1)) == 1 && k == 1)
        ans++;
    cout<<ans;
    return 0;
}