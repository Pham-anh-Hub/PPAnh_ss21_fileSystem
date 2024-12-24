#include<stdio.h>
#include<string.h>
 
int main(){
	char str[50]; 
	FILE *fptr = fopen("bt01.txt", "r");
	fgets(str, 50, fptr);
	
	printf("Dong 1 la: %s",str);
	
	fclose(fptr);
	return 0;
}

