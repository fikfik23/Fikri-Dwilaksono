#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

	struct ipkmhs{
		char npm[11];
		char nama[10];
		float ipk;
	};

int main() {
	
	int arr[20] = {12,34,53,54,55,82,36,65,95,63,24,85,38,20,17,43,84,28,30,98};
	int i,j=0;
	int search;
		struct ipkmhs mhsi[10];
	
	for(i=0;i<5;i++){
		printf("\nMasukkan Nama mahasiswa\t: ");
		scanf("%s",&mhsi[i].nama);
		printf("Masukkan NPM mahasiswa\t: ");
		scanf("%s",&mhsi[i].npm);
		printf("Masukkan IPK mahsiswa\t: ");
		scanf("%f",&mhsi[i].ipk);
		fflush(stdin);		
	}
	
	printf("\n\n");
	
	for(i=0;i<5;i++){
		if(mhsi[i].ipk>3)
			printf("\nMahasiswa %s memiliki IPK Diatas 3",mhsi[i].nama);
		else{
			if (mhsi[i].ipk<3)
				printf("\nMahasiswa %s memiliki IPK Dibawah 3",mhsi[i].nama);
			else
				printf("Data Tidak Ada");}
	}	
	
	return 0;
}


