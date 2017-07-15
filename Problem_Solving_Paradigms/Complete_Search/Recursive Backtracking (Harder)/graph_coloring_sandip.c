#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

/* BEGIN USEFUL_MACROS */
#define TRUE 1
#define FALSE 0

#define MAX(x, y) (((x) > (y)) ? (x) : (y))
#define MIN(x, y) (((x) < (y)) ? (x) : (y))
#define UPD_IF_MAX(acc, x) if ((x) > (acc)) ((acc) = (x))
#define UPD_IF_MIN(acc, x) if ((x) < (acc)) ((acc) = (x))

#define SET_BIT(x, n) ((x) |= (1 << (n)))
#define UNSET_BIT(x, n) ((x) &= (~(1 << (n))))
#define IS_SET(x, n) ((x) & (1 << (n)))
#define FLIP_BIT ((x) ^= (1 << (n)))

typedef int (*cmp_func) (const void *, const void *);
#define MK_INT_CMP(T, sht) \
int cmp ## sht (const T *p, const T *q) \
{ \
	if ( *p == *q) return 0; \
	else if (*p < *q) return -1; \
	else return 1; \
}

MK_INT_CMP (char, c)
MK_INT_CMP (unsigned char, uc)
MK_INT_CMP (int, i)
MK_INT_CMP (unsigned int, ui)
MK_INT_CMP (long, l)
MK_INT_CMP (unsigned long, ul)
MK_INT_CMP (long long, ll)
MK_INT_CMP (unsigned long long, ull)
/* END USEFUL_MACROS */

#define MAX_NODES 112
unsigned char adj[MAX_NODES][MAX_NODES];
unsigned char colour[MAX_NODES], opt_colour[MAX_NODES];

int n_blacks;
int max_blacks;
int N, M;

void process (int i) {
	int j;

	if (i >= N) {
		if (n_blacks > max_blacks) {
			max_blacks = n_blacks;
			memcpy (opt_colour, colour, N);
		}
		return;
	}

	colour[i] = 0;
	process (i + 1);

	for (j = 0; j < i; j++)
		if (adj[i][j] && colour[j])
			break;
	
	if (j == i) {
		colour[i] = 1;
		n_blacks++;
		process (i + 1);
		n_blacks--;
	}
}

int main ()
{
	int T;
	for (scanf ("%d", &T); T--;) {
		int n, m;
		char sep[2];
		scanf ("%d %d", &N, &M);
		
		memset (adj, 0, MAX_NODES * MAX_NODES);
		for (m = 0; m < M; m++) {
			int st, end;
			scanf ("%d %d", &st, &end);
			st--; end--;
			adj[st][end] = adj[end][st] = 1;
		}
		
		max_blacks = n_blacks = 0;
		memset (colour, 0, N);
		memset (opt_colour, 0, N);
		process (0);

		printf ("%d\n", max_blacks);
		sep[0] = sep[1] = 0;
		for (n = 0; n < N; n++) {
			if (opt_colour[n]) {
				printf ("%s%d", sep, n + 1);
				sep[0] = ' ';
			}
		}
		putchar ('\n');
	}

	return 0;
}

