#include <stdio.h>
#include <stdlib.h>
int main(){
	int sayi;
	int *p;
	int i=0, j=0, k=0;
	
	p=(int*)malloc(1*sizeof(int));
	
	while(1){
		printf("sayi giriniz:\n");
		scanf("%d", &sayi);
		
		if(sayi==0){
			break;
		}
		
		*(p+j)=sayi;
		j++;
		p=(int*)realloc(p, sizeof(int));
	}
	for(k=0; k<j; k++){
		printf("%d", *(p+k));
	}
	free(p);
	return 0;
	
}
