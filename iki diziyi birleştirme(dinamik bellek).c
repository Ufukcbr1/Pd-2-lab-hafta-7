#include <stdio.h>
#include <stdlib.h>

int main(){
	int *dizi1, *dizi2;
	int x, y;
	int i, k, j;
	
	printf("bir eleman sayisi giriniz:");
	scanf("%d", &x);
	
	dizi1 =(int*)malloc(n * sizeof(int));
	for(i=0; i<x; i++){
		printf("dizi[%d]:", i);
		scanf("%d", dizi1+i);
	}
	
	printf("bir eleman sayisi giriniz:");
	scanf("%d", &y);
	
	dizi2 =(int*)malloc(y* sizeof(int));
	for(k=0; k<y; k++,i++){
		printf("dizi[%d]:", i);
		scanf("%d", dizi2+k);
	}
	
	int *sonuc;
	sonuc = (int*)calloc((y+x), sizeof(int));
	
	for(i=0; i<x; i++){
		sonuc[i]=dizi1[i];
	}
		
	for(k=0; k<y+x; k++, i++){
	   sonuc[i]= dizi2[k];
	}
	
	for(j=0; j<(m+x); j++){
		printf("%d", sonuc[j]);
	}
	return 0;
}
