    #include <iostream>
    #include <algorithm>
    #include <cmath>
    #include <cstdio>
    #include <cstring>
    #include <string>
    #include <vector>

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
        int m,z;
        cin >> m >> z;
        int s=z;
        if(s==0 && m!=1||s>9*m) {cout << "-1 -1"; return 0;}
        if(s==0 && m==1) {cout << "0 0"; return 0;}
        int min[m],max[m];

        REP(j,m)
        {
            if(j==0)
            {
                FOR(i,1,10)
                {
                    int temp=s;
                    temp-=i;
                    if(9*(m-1-j)>=temp) {min[j]=i;s-=i;break;}
                }
            }
            else
            {
                FOR(i,0,10)
                {
                    int temp=s;
                    temp-=i;
                    if(9*(m-1-j)>=temp) {min[j]=i;s-=i;break;}
                }   
            }
        }

        REP(j,m)
        {
            for(int i=9;i>=0;i--)
            {
                int temp=z;
                temp-=i;
                if(temp>=0) {max[j]=i;z-=i;break;}
                else {max[j]=z;z=0;break;}
            }
        }

        REP(j,m) {cout << min[j];}
        cout << " ";
        REP(j,m) {cout << max[j];}

    }
