#include <bits/stdc++.h>
using namespace std;

#define MAXN 27

char a[MAXN][MAXN];
int visited[MAXN][MAXN], n;

int dx[] = {-1, -1, -1, 0, 1, 1,  1,  0 };
int dy[] = {-1,  0,  1, 1, 1, 0, -1, -1 };

void floodfill (int i, int j)
{	
	visited[i][j] = 1;
	
	for (int k = 0; k < 8; k++) {
		int ti = i + dx[k];
		int tj = j + dy[k];

		if (ti < 0 || tj < 0 || ti >= n || tj >= n) continue;
		if (a[i][j] == '1' && !visited[ti][tj])
			floodfill(ti,tj);
	}
}

int main ()
{
	int ct = 1, count;
	
	while (scanf ("%d", &n) == 1) {	
		for (int i = 0; i < n; i++)
			scanf ("%s", a[i]);

		memset (visited, 0, sizeof (visited));

		count = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (a[i][j] == '1' && !visited[i][j]) {
					count++;
					floodfill(i,j);
				}
			}
		}

		printf ("Image number %d contains %d war eagles.\n", ct, count);
		ct++;
	}

	return 0;	
}
