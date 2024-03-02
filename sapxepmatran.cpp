#include <stdio.h>
void swap(int *a, int *b){
	int c;
	c = *a;
	*a = *b;
	*b = c;
}
int main(){
	int t;
	scanf("%d", &t);
	int v = 1;
	while (t--){
		printf("Test %d:\n",v);
		v++;
		int n,x;
		scanf("%d%d", &n, &x);
		int a[n][n];
		for (int i =0; i<n; i++){
			for (int j =0; j<x; j++) scanf("%d", &a[i][j]);
		}
		for (int i =0; i<n; i++){
			for (int j =0; j<x; j++){
				for (int k = i; k<n; k++){
					for (int m = j; m<x; m++){
						if (a[k][m] < a[i][j]) swap(&a[k][m],&a[i][j]);
					}
				}
			}
		}
	for (int i =0; i<n; i++){
			for (int j =0; j<x; j++) printf("%d ", a[i][j]);
			printf("\n");
			}	
		}
}