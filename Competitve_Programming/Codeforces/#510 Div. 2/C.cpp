#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,i,zero=0,neg=0,p_neg=-1;
    cin>>n;
    ll a[n],check[n];
    memset(check,0,sizeof(check));
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i] == 0)
        {
            zero++;
            check[i]=1;
        }
        if(a[i] < 0)
        {
            neg++;
            if(p_neg == -1 || (abs(a[p_neg]) > abs(a[i])))
                p_neg=i;
        }
    }
    if(neg%2) check[p_neg]=1;
    if(zero == n || (zero == n-1 && neg == 1))
    {
        for(i=0;i<n-1;i++)
            cout<<"1 "<<i+1<<" "<<i+2<<"\n";
        return 0;
    }
    int remv=-1;
    for(i=0;i<n;i++)
    {
        if(check[i])
        {
            if(remv != -1)
                cout<<"1 "<<remv+1<<" "<<i+1<<"\n";
            remv=i;
        }
    }
    if(remv != -1) cout<<"2 "<<remv+1<<"\n";
    remv=-1;
    for(i=0;i<n;i++)
    {
        if(!check[i])
        {
            if(remv != -1)
                cout<<"1 "<<remv+1<<" "<<i+1<<"\n";
            remv=i;
        }
    }
    return 0;
}