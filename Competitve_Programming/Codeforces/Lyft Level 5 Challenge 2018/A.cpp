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
    int n,a1,a2,b1,b2,c1,c2;
    cin>>n>>a1>>a2>>b1>>b2>>c1>>c2;
    if(((a1 > b1 && a1 > c1) || (a1 < b1 && a1 < c1)) && ((a2 > b2 && a2 > c2) || (a2 < b2 && a2 < c2)))
        cout<<"YES";
    else cout<<"NO";
    return 0;
}