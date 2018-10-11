#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll k,i;
    cin>>k;
    if(k == 1)
    {
        cout<<"4";
        return 0;
    }
    if(k > 36)
    {
        cout<<-1;
        return 0;
    }
    for(i=0;i<k/2;i++)
        cout<<"8";
    k%=2;
    if(k)
        cout<<"0";
    return 0;
}