    #include <iostream>
    #include <algorithm>
    #include <cmath>
    #include <cstdio>
    #include <cstring>
    #include <string>
    #include <vector>

    // (づ°ω°)づﾐ★゜・。。・゜゜・。。・゜☆゜・。。・゜゜・。。・゜

    using namespace std;

    #define all(a)       a.begin(), a.end()
    #define pi           3.1415926536
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

    bool comp(pii i, pii j)
    {
        if(i.se==j.se){
            return (i.fi > j.fi);
        }
        else {
            return (i.se > j.se);
        }
    }

    int main()
    {
        int n,count=1,sum=0;
        cin >> n;
        pii p[n];
        REP(i,n) {cin >> p[i].fi >> p[i].se;}
        
        sort(p,p+n,comp);

        //REP(i,n) {cout << "\n" << p[i].fi << " " << p[i].se;}
        REP(i,n)
        {
            if(count){
                sum+=p[i].fi;
                count+=p[i].se-1;
            }else {break;}
        }
        cout << sum;

    }


