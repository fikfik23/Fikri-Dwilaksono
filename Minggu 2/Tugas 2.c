#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int rekursif(int angka, int pangkat, int hasil){
	if(pangkat==0){
		hasil==1;
		printf("\nHasil = %d", hasil);
	}
	else if(pangkat==1){
		printf("\nHasil = %d", hasil);
	}
	else if(pangkat!=1){
		hasil=hasil*angka;
		pangkat = pangkat - 1;
		rekursif(angka, pangkat, hasil);
	}
}

int iteratif(int angka, int pangkat, int hasil){
	if(pangkat==0){
		hasil == 1;
		printf("\nHasil = %d", hasil);
	}
	else if(pangkat==1){
		printf("\nHasil = %d", hasil);
	}
	else if(pangkat>=1){
		while(pangkat>1){
			hasil = hasil*angka;
			pangkat = pangkat - 1;
		}
		printf("\nHasil = %d", hasil);
	}
}

int main(){
	int angka, pangkat, hasil;
	int pilihan=1;
	while(pilihan==1){
		system("cls");
		printf("\n Aplikasi  bilangan berpangkat");
		printf("\n---------------------------------");
		printf("\Masukkan angka = ");
		scanf("%d",&angka);
		printf("Masukkan pangkat = ");
		scanf("%d",&pangkat);
		hasil = angka;
		printf("\nMetode rekursif");
		rekursif(angka,pangkat,hasil);
		printf("\nMetode iteratif");
		iteratif(angka,pangkat,hasil);
		printf("\n\nAnda ingi mengulangi lagi?\n1. Ya\n2. Tidak");
		printf("\nMasukkan pilihan : ");
		scanf("%d", &pilihan);
	}
		return 0;	
}
