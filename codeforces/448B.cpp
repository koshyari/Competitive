    #define INF 1000000000
    #define pb push_back
    #define ll long long
    #define vi vector<int>
    #define ii pair<int>
    
    #include <iostream>
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

    int x[26]={0}, y[101]={0};

    int freq()
    {
        for(int i=0;i<26;i++)
        {
            if(x[i]<y[i]) {return 0;}
        }
        return 1;
    }

    int main()
    {
        string s,t;
        cin >> s >> t;
        int ls = s.length(),lt = t.length();
        int i,j=0,count=0,flag=0;

        for(i=0;i<ls;i++){
            if(t[j]==s[i]) {j++;}
            if(j==lt) {cout << "automaton"; return 0;}
        }

        for(i=0;i<ls;i++)
            x[s[i]-'a']++;

        for(i=0;i<lt;i++)
            y[t[i]-'a']++;

        if(ls==lt && freq()) {cout << "array"; return 0;}
        else if(ls>lt && freq()) {cout << "both"; return 0;}
        else {cout << "need tree"; return 0;}


    }


