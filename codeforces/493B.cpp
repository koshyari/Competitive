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
        int n,nA=0,nB=0;
        cin >> n;
        ll sum1=0,sum2=0,bhen[n];
        REP(i,n) {cin >> bhen[i];}

        vector <ll int> A,B;
        vector <ll int>::iterator it;

        REP(i,n)
        {
            if(bhen[i]>0) {A.pb(bhen[i]); nA++;}
            else {B.pb(bhen[i]); nB++;}
        }
        for(it=A.begin();it<A.end();it++) {sum1=sum1 + *it;}
        for(it=B.begin();it<B.end();it++) {sum2=sum2 + *it;}
        sum2=-sum2;
        //cout << sum1 << " " << sum2 << endl;            
        //for(it=A.begin();it<A.end();it++) {cout << *it << " ";}
        if(sum1!=sum2) {(sum1>sum2) ? cout << "first" : cout << "second";}
        else
        {
            REP(i,min(nA,nB))
            {
                if(A[i]>-B[i]) {cout << "first";return 0;}
                else if (A[i]<-B[i]) {cout << "second";return 0;}
            }

            (bhen[n-1] >0) ? cout << "first" : cout << "second";
            
        }

        return 0;
    }
