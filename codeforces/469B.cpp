    #include <iostream>
    #include <fstream>
    #include <algorithm>
    #include <cmath>
    #include <cstdio>
    #include <cstdlib>
    #include <cstring>
    #include <deque>
    #include <functional>
    #include <list>
    #include <map>
    #include <queue>
    #include <set>
    #include <stack>
    #include <string>
    #include <vector>

    using namespace std;

    #define fi           first
    #define se           second
    #define pb           push_back
    #define INF          1000000000
    #define ll           long long
    #define vi           vector<int>
    #define vit          vector<int>::iterator
    #define pii          pair<int,int>
    #define FOR(a,b,c)   for(int a=b;a<c;a++)
    #define REP(i,n)     FOR(i,0,n)

    int main()
    {
        int p,q,l,r,count=0,flag;
        cin >> p >> q >> l >> r;

        pii Z[p], X[q];

        REP(i,p) {cin >> Z[i].fi >> Z[i].se;}
        REP(i,q) {cin >> X[i].fi >> X[i].se;}

        for(int i=l;i<=r;i++)
        {
            flag=0;
            REP(j,q)
            {
                int lp = X[j].fi + i, rp = X[j].se + i;
                REP(k,p)
                {
                    if((lp<=Z[k].fi && rp>=Z[k].fi) || (lp<=Z[k].se && rp>=Z[k].se) || (lp>=Z[k].fi && rp<=Z[k].se) || (lp<=Z[k].fi && rp>=Z[k].se)) {flag=1;}        
                }
            }
            if(flag) {count++;}    
        }
        cout << count;
        

    }
