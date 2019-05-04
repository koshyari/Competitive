#include <bits/stdc++.h>
using namespace std;
#define ll long long
/*int P[1000001];
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
}*/
int main()
{
    int i,ind=0,m=0,count=0;
    string s;
    cin >> s;
    int n = s.length();
    for(i=0;i<n;i++){
        if(s[i]%2==0)
            count++;
    }
    if(count==0) cout <<-1;
    else{
    for(i=0;i<n;i++){
        if((s[i]-'0')%2==0 && ((s[i]-'0') < (s[n-1]-'0'))){
            m=i;
            break;}
        if(s[n-1-i]%2==0 && ind==0)
            ind=n-1-i;
        }
        //cout << "z is " << z << endl;
        if(m!=0){
            swap(s[m],s[n-1]);
            cout << s;
        }else{
            swap(s[ind],s[n-1]);
            cout << s;
        }
    }

}
