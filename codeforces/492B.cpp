#include<bits/stdc++.h> 
using namespace std;


int main()
{
    int n;
    int i;
    float t;
    long long int l;
    cin >> n >> l;
    int A[n];
    for(i=0;i<n;i++)
        cin >> A[i];
    sort(A,A+n);
    if(n==1)
    {
        if((l-A[0])>=A[0])
            cout<<fixed<<setprecision(10)<<l-A[0];
        else cout<<fixed<<setprecision(10)<<A[0];

    }
    else{
    t=A[1]-A[0];
    for(i=0;i<n-1;i++)
    {
        if(t<(A[i+1]-A[i]))
            t=A[i+1]-A[i];
    }
    float last=l-A[n-1];
    float first=A[0];
    if(last>t/2 || first >t/2)
    {
        if(last>=first)
            cout << fixed << setprecision(10) << last;
        else cout << fixed << setprecision(10) << first;
    }else cout << fixed << setprecision(10) << t/2;
}   
}
