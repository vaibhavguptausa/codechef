#include<bits/stdc++.h>
#define LL long long int
#define REP(i,n) for(int i=0;i<n;++i)
#define REPP(i,a,b) for(int i=a;i<b;++i)
#define TC int t;scanf("%d",&t);while (t-->0)
#define INP(x) scanf("%d",&x)
#define OUT(x) printf("%d\n",x)
#define INPLL(x) scanf("%lld",&x)
#define OUTLL(x) printf("%lld\n",x)
#define INPS(x) scanf("%s",x)
#define INPD(x) scanf("%lf",&x)
#define MEM(a,b) memset(a,b,sizeof(a))
#define MP make_pair
#define PB push_back
#define PII pair<int,int>
#define PLL pair<long long,long long>
#define VPII vector<pair<int,int >
#define F first
#define S second
#define MOD 1000000007
using namespace std;
LL n,a[1000005],l,r;
LL solve1()
{
    LL m=INFINITY;
    sort(a,a+n);
    REP(i,n-1)
    {
        m=min(m,a[i+1]-a[i]);
    }
    LL e=a[n-1]+a[n-2]-1;
    LL s=m+1;
    //cout<<s<<" "<<e<<endl;
    if(s<l)
        s=l;
    if(e>r)
        e=r;
    //cout<<s<<" "<<e<<endl;
    LL ans;
    if(s>r||e<l)
        ans=0;
    else
        ans=e-s+1;
    return ans;
}
LL solve2()
{
    LL cnt,ans=0;
    REPP(i,l,r+1)
    {
        cnt=0;
        REP(j,n)
        {
            REPP(t,j+1,n)
            {
                if((a[j]+a[t])>i && (a[t]+i>a[j]) && (a[j]+i>a[t]))
                    {
                        cnt++;
                        ans++;
                        break;
                    }
            }
            if(cnt>0)
            {
                break;
            }
        }

    }
    return ans;
}
int main()
{
    INPLL(n);INPLL(l);INPLL(r);
    REP(i,n)
    {
        INPLL(a[i]);
    }
    if(n<10000&&r<=10000)
        OUTLL(solve2());
    else
        OUTLL(solve1());
    return 0;
}
