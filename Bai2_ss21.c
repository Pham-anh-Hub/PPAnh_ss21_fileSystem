#include<stdio.h>
#include<string.h>
int main(){
	FILE *fptr;
	fptr = fopen("bt01.txt","r");
	
	if(fptr == NULL){
		printf("Loi mo file");
		return 1; 
	}
	int str = fgetc(fptr);
	printf("ky tu 1: %c", str);
	fclose(fptr);
 
	return 0;
}

