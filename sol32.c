#include <stdio.h>
#define N	100000
int min(int a, int b) { return a < b ? a : b; }
int cc[N], qq[N], cnt;
int search(int a2) {
	int lower = 0, upper = cnt;
	while (upper - lower > 1) {
		int i = (lower + upper) / 2;
		if (cc[qq[i]] * 2 < a2)
			lower = i;
		else
			upper = i;
	}
	return lower;
}
int main() {
	static int aa[N];
	int n, h, i, j;
	scanf("%d",&n);
	for (i = 0; i < n; i++)
		scanf("%d", &aa[i]);
	h = 0;
	for (i = 1; i < n; i++)
		if (aa[h] < aa[i])
			h = i;
	for (i = 0; i < n; i++)
		cc[i] = aa[(h + i) % n];
	j = 1;
	while (j < n && cc[j] * 2 >= cc[0])
		j++;
	if (j == n) {
		for (i = 0; i < n; i++)
			aa[i] = -1;
	} else {
		aa[h] = j;
		cnt = 0;
		for (j = n - 1; j > 0; j--) {
			int a;
			while (cnt && cc[qq[cnt - 1]] >= cc[j])
				cnt--;
			qq[cnt++] = j;
			a = aa[(h + j + 1) % n] + 1;
			if (cc[qq[0]] * 2 < cc[j])
				a = min(a, qq[search(cc[j])] - j);
			aa[(h + j) % n] = a;
		}
	}
	for (i = 0; i < n; i++)
		printf("%d \n", aa[i]);
	return 0;
}