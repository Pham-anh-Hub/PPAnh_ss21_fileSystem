#include<stdio.h>

int main(){
	FILE *fptr;
	fptr = fopen("bt01.txt","a");
	 
	fprintf(fptr, "Bai nay la bai tap 1");
	
	fclose(fptr);
	return 0;
}

