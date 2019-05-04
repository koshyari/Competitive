#include <bits/stdc++.h>
using namespace std;
#define ll long long

int P[1000001];
void prime(){
    int i,j;
    for(i=1;i<1000001;i++)
        P[i]=1;
    P[1]=0;
    for(i=2;i<=1000;i++){
        if(P[i]==1){
            for(j=2;j*i<=1000001;j++)
                P[j*i]=0;
        }
    }
}
int main()
{
    int n,i;
    cin >> n;
    ll A[n];
    prime();
    for(i=0;i<n;i++)
        cin >> A[i];
    for(i=0;i<n;i++){
        ll root=sqrt(A[i]);
        if(root*root==A[i] && P[root])
            cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    

}
