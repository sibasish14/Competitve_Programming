#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin>>n;
    if(n%3 == 2)
    {
        cout<<"1 2 "<<(n-3);
        return 0;
    }
    cout<<"1 1 "<<(n-2);
    return 0;
}