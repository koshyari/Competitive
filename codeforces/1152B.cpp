    #include <bits/stdc++.h>
    using namespace std;

    #define all(a)       a.begin(), a.end()
    #define fi           first
    #define se           second
    #define pb           push_back
    #define INF          1000000000
    #define ll           long long
    #define vi           vector<int>
    #define vlli         vector<long long int>  
    #define pii          pair<int,int>
    #define FOR(a,b,c)   for(int a=b;a<c;a++)
    #define REP(i,n)     FOR(i,0,n)

    bool ispower(int x)
    {
        return(x && !(x&(x-1)));
    }

    int MSB(int x)
    {
        for(int i=20;i>=0;i--)
        {
            if(x>=(1<<i)) {return i; break;}
        }
    }

    void solve(int x)
    {
        int count=0;
        vi v;
        while(1)
        {
            int m = MSB(x);
            v.pb(m+1);
            x^=((1<<(m+1))-1);
            count++;
            if(ispower(x+1)) {break;}
            x++;count++;
            if(ispower(x+1)) {break;}
        }
        cout << count << endl;
        for(auto it=v.begin(); it!=v.end();it++)
            cout << *it << " ";
    }

    int main()
    {
        ios_base::sync_with_stdio(false); cin.tie(0);
        int x;
        cin >> x;
        if(x==1) {cout << 0; return 0;}
        if(ispower(x+1)) {cout << 0; return 0;}
        solve(x);
    }
