#include<stdio.h>
struct SinhVien{
	int id;
	char name[20];
	int age; 
}; 
int main(){
	int n;
	struct SinhVien sv[50];
	
	printf("Moi nhap so sinh vien: ");
	scanf("%d", &n);
	
	for(int i=0; i<n; i++){
		printf("Nhap id: ");
		scanf("%d",&sv[i].id);
		fflush(stdin);
		printf("Nhap ten: ");
		fgets(sv[i].name, 20, stdin);
		fflush(stdin);
		printf("Nhap tuoi: ");
		scanf("%d", &sv[i].age);
	}
	FILE *fptr = fopen("students.txt", "w");
	for(int i=0; i<n; i++){
		fprintf(fptr,"%d %s %d \n", sv[i].id, sv[i].name, sv[i].age);
	}
	fclose(fptr);
	return 0;
}

