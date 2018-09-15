#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll q,n,m,k;
    cin>>q;
    while(q--)
    {
        cin>>n>>m>>k;
        if(n < m)
            swap(n,m);
        if(n%2 != m%2)
        {
            n--;
            k--;
        }
        else if(n%2 != k%2)
        {
            n--;
            m--;
            k-=2;
        }
        if(k < n)
            cout<<"-1\n";
        else cout<<k<<"\n";
    }
    return 0;
}