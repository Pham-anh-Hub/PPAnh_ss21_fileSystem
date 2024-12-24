#include<stdio.h>
#include<string.h> 
int main(){
	char str[50]; 
	printf("Moi nhap chuoi them vao: ");
	fgets(str, 50, stdin);
	FILE *fptr;
	fptr = fopen("bt01.txt","a");  //apppend
	
	fprintf(fptr,"\nCon day la: %s", str);
	fclose(fptr);
	
	return 0; 
}
