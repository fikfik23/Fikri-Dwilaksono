#include <stdio.h>

int cari(int awal, int akhir, int search){
	
	int Data[10] = {3,9,11,12,15,17,23,31,35};
	
	int m;
	int f=0;
	
	m=(awal+akhir)/2;
	
	if(Data[m] == search){
		printf("Data %d ditemukan pada loop ke %d baris ke %d\n",Data[m],m,m+1);
	}

	else if(Data[m] < search){
		cari(awal=m+1, akhir, search);
	}
	
	else if(Data[m] > search){
		cari(awal, akhir=m-1, search);
	}
	
}

int main(){
	
	int Data[10] = {3,9,11,12,15,17,23,31,35};

	int awal=0;
	int akhir=10;
	int search; 
	int m;
	int f;
	int i;
	
	
	printf("\nMasukkan data yang anda cari : ");
	scanf("%d",&search);
	cari(awal, akhir, search);
}
