#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m,i;
    cin>>n>>m;
    int a[n],mx=0,diff=0,mn,mx_ans;
    for(i=0;i<n;i++)
        cin>>a[i];
    if(n == 1)
    {
        cout<<a[0]+m<<" "<<a[0]+m;
        return 0;
    }
    sort(a,a+n);
    mx=a[n-1];
    mx_ans=a[n-1]+m;
    for(i=0;i<n-1;i++)
        diff+=(mx-a[i]);
    if(diff >= m)
        mn=mx;
    else
    {
        int z=m,j;
        z-=diff;
        for(i=0;i<n;i++)
            a[i]=mx;
        for(i=0,j=0;i<z;i++)
        {
            a[j++]++;
            if(j == n)
                j=0;
        }
        sort(a,a+n);
        mn=a[n-1];
    }
    cout<<mn<<" "<<mx_ans;
    return 0;
}