    #include <iostream>
    #include <iomanip>
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

    int main()
    {
        int n,m,x;
        cin >> n >> m;
        
        pii A[m];
        int B[n+1];
        REP(i,n+1) {B[i]=i;}
        REP(i,m)
        {
            cin >> A[i].fi >> A[i].se;
            REP(j,n+1) 
            {
                if(B[j]==A[i].fi || B[j]==A[i].se) {B[j]=0;}
            }
        }
        FOR(i,1,n+1) 
        {
            if(B[i]!=0) {x=B[i];break;}
        }
        cout << n-1 << endl;

        REP(i,n)
        {
            if((i+1)!=x) {cout<<i+1 << " " << x << endl;}
        }

        return 0;

    }
