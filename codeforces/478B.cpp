#include <iostream>
using namespace std;

int main()
{
    long long int n,m,d;
    cin >> n >> m;
    d=n-m+1;
    long long int max=(d)*(d-1)/2;
    long long int min; 
    long long int q=n/m;
        min=(m*q*(q-1))/2 + q*(n%m);
    cout << min << " " << max;
}
