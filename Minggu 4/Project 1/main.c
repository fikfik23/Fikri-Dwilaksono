#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main() {
	int arr[20] = {12,34,53,54,55,82,36,65,95,63,24,85,38,20,17,43,84,28,30,98};
	int i,j=0;
	int search;
	
	for(i=0;i<20;i++){
		arr[i] = rand() %100 +1;
	}
	
	printf("\n\n\tTampilan Data\n=====================================================");
	for(i=0;i<20;i++){
		printf("\nData ke-%i\t= %i",i+1,arr[i]);
	}

	
	printf("\n\nMasukkan Angka Yang dicari : "); scanf("%i",&search);
	while(j<20)
	{
		if(arr[j]==search){
			printf("Data Ditemukan Pada Data ke-%i",j+1);
			break;}
		else 
			if(j<19)
				j++;
			else{
				printf("Data Tidak Ditemukan");
				j++;}
	}

}
