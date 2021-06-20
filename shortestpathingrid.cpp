#include <bits/stdc++.h>
using namespace std;

int main() {
	int m, c; 
	cin>>m>>c;
	int a[m+1][c+1];
	for(int i = 0; i <= m; i++)
	{
	    a[i][0] = 1;
	}
	
	for(int i = 0; i <= c; i++)
	{
	    a[0][i] = 1;
	}
	
	for(int i = 1; i <= m; i++)
	{
	    for(int j = 1; j <= c; j++)
	    {
	        a[i][j] = a[i][j-1] + a[i-1][j];
	    }
	}
	
	cout<<a[m][c];
	return 0;
}
