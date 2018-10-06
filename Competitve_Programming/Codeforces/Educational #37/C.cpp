#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,i,j,k;
    cin>>n;
    ll a[n],tmp[n];
    string s;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        tmp[i]=a[i];
    }
    cin>>s;
    j=0,k=0;
    for(i=0;i<n;i++)
    {
        if(s[i] == '0')
        {
            sort(tmp+k,tmp+j+1);
            k=i+1;
            j=i+1;
        }
        else
        {
            j++;
        }
    }
    if(j == n)
        sort(tmp+k,tmp+j);
    sort(a,a+n);
    for(i=0;i<n;i++)
    {
        if(a[i] != tmp[i])
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}