#include<stdio.h>
#include<string.h>

int main(){
	char str[50];
	FILE *fptr6 = fopen("bt06.txt", "w");
	FILE *fptr1 = fopen("bt01.txt", "r");
	while (1) {
		char *result = fgets(str, 100, fptr1); 
	
	    if (result == NULL) {
	        break;
	    }
        fprintf(fptr6, "%s", str);
    }
	fclose(fptr6);
	fclose(fptr1);

	return 0;
}

