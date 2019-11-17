#include <stdio.h>
#include <stdlib.h>


int main() 
{
	int
	

	char nama[30];
	char alamat[40];
	char nomer[20];
	char jurusan[20];
	char universitas[30];
	
		printf("===================================\n");
		printf("----Masukkan Data Diri Anda----\n");
		printf("===================================\n");		
	
	printf("\n\n Masukkan nama anda \t\t: ");	
	gets(nama);
	printf(" Masukkan alamat anda \t\t: ");
	gets(alamat);
	printf(" Masukkan nomor anda \t\t: ");
	scanf("%s",&nomer);
	printf(" Masukkan jurusan anda \t\t: ");
	scanf("%s", &jurusan);
	printf(" Masukkan Universitas anda \t: ");
	scanf("%s", &universitas);
	
	
	printf("\n ----Data Diri Anda---- \n");
	printf(" Nama \t\t : %s\n",nama);
	printf(" Alamat \t : %s\n",alamat);
	printf(" Nomor Telp \t : %s\n",nomer);
	printf(" Jurusan  \t : %s\n",jurusan);
	printf(" Universitas \t : %s\n",universitas);

		

	return 0;
}
