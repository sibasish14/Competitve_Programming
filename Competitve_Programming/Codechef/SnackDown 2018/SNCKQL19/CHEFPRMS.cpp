#include<bits/stdc++.h>
#define mod 1000000007
#define F first
#define S second
using namespace std;
typedef long long int ll;

vector<ll> least(205);
vector<ll> uniqueFactors(205);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,i,j;
    cin>>t;
    least[1]=1;
    for(i=2;i<=200;i++)
    {
        if(!least[i])
        {
            for(j=i;j<=200;j+=i)
                if(!least[j])
                    least[j]=i;
        }
    }
    for(i=2;i<=200;i++)
    {
        int z=i;
        set<ll> s;
        while(z != 1)
        {
            s.insert(least[z]);
            z/=least[z];
        }
        auto it1=s.begin();
        if(s.size() == 1)
            continue;
        auto it2=(++it1);
        it1--;
        if((*it1)*(*it2) == i)
            uniqueFactors[i]=1;
    }
    while(t--)
    {
        int n,f=0;
        cin>>n;
        int a=1;
        int b=n-a;
        while(a <= b)
        {
            if(uniqueFactors[a] && uniqueFactors[b])
            {
                f=1;
                break;
            }
            a++;
            b--;
        }
        if(f)
            cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}