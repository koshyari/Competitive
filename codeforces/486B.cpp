#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>

using namespace std;


int main() 
{
     int i, j, k;
     int m, n, p, q;
     int a[101][101];
     int b[101][101];
     
	cin >> m >> n;
	
	for (i = 0; i < m; ++ i)
	{
		for (j = 0; j < n; ++ j)
			a[i][j] = 1;
	}
	
	for (i = 0; i < m; ++ i)
		for (j = 0; j < n; ++ j) 
		{
			cin >> b[i][j];
			if (b[i][j]==0)
			{
				for (k = 0; k < m; ++ k)
					a[k][j] = 0;
				for (k = 0; k < n; ++ k)
					a[i][k] = 0;
			}
		}
		
	for (i = q = 0; i < m && q == 0; ++ i)
		for (j = 0; j < n; ++ j)
		{
			p = 0;
			for (k = 0; k < m; ++ k)
				p += a[k][j];
			for (k = 0; k < n; ++ k)
				p += a[i][k];
			if (p == 0 && b[i][j] == 1)
			{
				q = 1;
				break;
			}
		}
	if (q == 0) {
		cout << "YES" << endl;
		for (i = 0; i < m; ++ i) {
			for (j = 0; j < n; ++ j)
				cout << a[i][j] << ' ';
			cout << endl;
		}
	} 
	else
		cout << "NO";
	return 0 ; 
}
