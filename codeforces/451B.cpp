#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n,i,t1,t2,count=0,flag=0;
    cin >> n;
    long long a[n],b[n],c[n];
    for(i=0;i<n;i++)
        cin >> a[i];
    for(i=0;i<n;i++)
        b[i]=a[i];
    sort(b,b+n);
    for(i=0;i<n;i++)
    {
        if(a[i]==b[i])
            flag++;
    }
    if(flag==n){
        cout << "yes" << endl;
        cout <<"1 1";
    }else{

    for(i=0;i<n;i++)
    {
        if(a[i]!=b[i]){
            t1=i;
            break;
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!=b[i]){
            t2=i;
        }
    }
    for(i=0;i<t1;i++)
        c[i]=a[i];
    for(i=0;i<=t2-t1;i++)
        c[t1+i]=a[t2-i];
    for(i=t2+1;i<n;i++)
        c[i]=a[i];
    for(i=0;i<n;i++)
    {
        if(b[i]!=c[i]){
            cout << "no" << endl;
            break;}
    }
    for(i=0;i<n;i++)
    {
        if(b[i]==c[i])
            count++;
    }
    if(count==n)
    {
        cout << "yes" << endl;
        cout << t1+1 << " " << t2+1;
    }
}
}
