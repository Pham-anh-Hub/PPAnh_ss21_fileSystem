#include<stdio.h>
#include<string.h> 
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
	
	fptr = fopen("bt05.txt","r");
	if(fptr==NULL){
		printf("Loi mo file");
		return 1; 
	}
	
	for(int i=0; i<n; i++){
		char readSentence[50];
		fgets(readSentence, 50, fptr);
		printf("\nDong %d: %s",i+1, readSentence);
	} 
	fclose(fptr);
	return 0;
}

