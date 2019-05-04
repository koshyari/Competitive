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


    int main()
    {
        int n,sumA=0,sumG=0;
        cin >> n;
        pii p[n];
        string s[n];
        REP(i,n) {cin >> p[i].fi >> p[i].se;}
        sumA+=p[0].fi;
        if((sumA-sumG)<500){
            cout << "A";
        }else{
            sumA-=p[0].fi;
            sumG+=p[0].se;
            cout << "G";
        }
        FOR(i,1,n)
        {
            sumA+=p[i].fi;
            if((sumA-sumG)>500){
                s[i]='G';
                sumA-=p[i].fi;
                sumG+=p[i].se;
            }else{ 
                s[i]='A';
            }
        }
        
        FOR(i,1,n) {cout << s[i];}

    }

