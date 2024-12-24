#include<stdio.h>

int main(){
	int n;
	FILE *fptr = fopen("bt05.txt", "w");
	printf("Moi nhap so dong: ");
	scanf("%d", &n);
	char sentence[50];
	for(int i=0; i<n; i++){
		fflush(stdin);
		printf("\nNhap noi dung: ");
		fgets(sentence, 50, stdin);
		
		fprintf(fptr, "%s", sentence);
	}
	fclose(fptr);
	return 0;
}

