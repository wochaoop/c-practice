#include <stdio.h>
#include <string.h>

int main(){
	int i;
	char a[100];
	scanf("%s",&a);
	//char a[] = "abcdefghijklmnopqrstuvwxyaicjnu2ecbvyrubvhrvhfueigrefuerfhr7e8wfioewjqfewofchewvuifewgf";
	for(i=1; i < strlen(a); i++){
		printf("%c",a[i]+1);
	}
return 0;
}
