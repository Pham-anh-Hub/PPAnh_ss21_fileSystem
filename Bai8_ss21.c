#include<stdio.h>
#include<string.h>

typedef struct {
	int id;
	char name[50];
	int age;
} SinhVien ;

int main(){
	SinhVien sv[100];
	FILE *fptr = fopen("students.txt","r");
	int n=0;
	while(1){
		int check = fscanf(fptr,"%d. %[^-] - %d ", &sv[n].id, sv[n].name, &sv[n].age);
		if(check != 3){
			break;
		}
		n++;
	}
	fclose(fptr);
	
	for(int i=0; i<n; i++){
		printf(" %d. \t%s \t %d \n", sv[i].id, sv[i].name, sv[i].age );
	}
	
	return 0;
}

