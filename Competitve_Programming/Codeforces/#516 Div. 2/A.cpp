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
    int a,b,c;
    int mx=0;
    cin>>a>>b>>c;
    if(a > b && a > c)
    {
        if(b+c <= a)
            cout<<(a+1)-(b+c);
        else cout<<0;
    }
    else if(b > c)
    {
        if(a+c <= b)
            cout<<(b+1)-(a+c);
        else cout<<0;
    }
    else
    {
        if(b+a <= c)
            cout<<(c+1)-(b+a);
        else cout<<0;
    }
    return 0;
}