#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,z,f=0;
    cin>>n;
    while(n--)
    {
        cin>>z;
        if(z)
            f=1;
    }
    if(!f)
        cout<<"EASY\n";
    else cout<<"HARD\n";
    return 0;
}