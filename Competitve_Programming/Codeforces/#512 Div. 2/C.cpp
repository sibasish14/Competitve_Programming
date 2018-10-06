#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,i,j,sum1=0,sum2=0,f;
    cin>>n;
    string s;
    cin>>s;
    for(i=0;i<n-1;i++)
    {
        f=1;
        sum1+=(s[i]-48);
        for(j=i+1;j<n;)
        {
            f=1;
            sum2=(s[j++]-48);
            while(sum2+(s[j]-48) <= sum1 && j < n)
            {
                sum2+=(s[j++]-48);
            }
            if(sum2 != sum1)
            {
                f=0;
                break;
            }
        }
        if(f)
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}