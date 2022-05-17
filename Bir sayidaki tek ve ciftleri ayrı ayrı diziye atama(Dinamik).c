#include <stdio.h>
#include <stdlib.h>
int main(){
	long int sayi;
	int i=0, j=0;
	int gecici;
	int *TekP, *CiftP;
	
	TekP=(int*)malloc(i*sizeof(int));
	CiftP=(int*)malloc(j*sizeof(int));
	
	printf("bir sayi giriniz:\n");
	scanf("%d", &sayi);
	
	while(sayi>0){
	     if(sayi%2==0){
	     	i++;
	     	CiftP=(int*)realloc(CiftP, i*sizeof(int));
	     	*(CiftP+i-1)=sayi%10;
		 }	
		 else{
		 	j++;
	     	TekP=(int*)realloc(TekP, j*sizeof(int));
	     	*(TekP+j-1)=sayi%10;
		 	}
		 	sayi=sayi/10;
	}
	
	for(gecici=0; gecici<j; gecici++){
		printf("%d", *(TekP+gecici));
	}
	for(gecici=0; gecici<i; gecici++){
		printf("%d", *(CiftP+gecici));
	}
	
	free(TekP);
	free(CiftP);
	return 0;
}
