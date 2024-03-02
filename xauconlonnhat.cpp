#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
	char s[100001];
	int a[100001];
	memset(a,0,sizeof(a));
	fgets(s, 100001, stdin);
	int k =0,q=0;
	for (int i =25; i>= 0; i--){
		char c = i+'a';
		for (int j = q; j< strlen(s); j++){
			if ( c == s[j] && a[j] == 0){
				for (int x = q; x< strlen(s); x++){
					if ( c == s[x]){
						printf("%c",s[x]);
						k = x;
						a[x] = 1;
					}
				}
				q =k;
				
			}
		}
	}
}