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
    ll a,b,i,j;
    cin>>a>>b;
    ll mx=a+b;
    i=1;
    while(i*(i+1)/2 <= mx)
        i++;
    i--;
    vector<ll> v1,v2;
    for(j=i;j>=1;j--)
    {
        if(j <= a)
        {
            v1.push_back(j);
            a-=j;
        }
        else if(j <= b)
        {
            v2.push_back(j);
            b-=j;
        }
    }
    cout<<v1.size()<<"\n";
    for(auto z:v1)
        cout<<z<<" ";
    cout<<"\n";
    cout<<v2.size()<<"\n";
    for(auto z:v2)
        cout<<z<<" ";
    return 0;
}