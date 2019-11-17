#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Mahasiswa{
	char nama [30];
	int npm;
	float mk  [10];
	float ips;
};


int main() {
	
	struct Mahasiswa mhs[10];
	int loop=1,menu,i,j,data=0;
	float ip=0;
	char maku[10][20]={"Metode Numerik","Pemograman Lanjut","Pancasila","Algoritma Dasar","Kewirausahaan"};
	
	while(loop==1){

		printf("======Sistem Akademik======\n");

		printf("\t\t Menu\t:\n\n\t1. Masukkan Data\n\t2. Lihat Data\n\t3. Keluar\n");
		printf("\tMasukkan Kode : ");
		scanf("%i",&menu);
		
		switch(menu){
			case 1 :{
				system("cls");

						printf("================Masukkan Data===================\n");
						
						printf("Masukkan Nama Mahasiswa\t: ");
						scanf("%s",&mhs[data].nama);
						printf("Masukkan NPM Mahasiswa\t: ");
						scanf("%i",&mhs[data].npm);
						for(i=0;i<5;i++){
							printf("Masukkan Nilai Kata Kuliah %s\tMahasiswa\t: ",maku[i]);
							scanf("%f",&mhs[data].mk[i]);
							ip = ip + mhs[data].mk[i];
						}
						mhs[data].ips = ip / 5;
						data++;
				}break;
			case 2 :{
				system("cls");
						if(data==0){

						printf("===============Data Tidak Ada==================\n");
					}
					else{
						for(i=0;i<data;i++){
						printf("Nama Mahasiswa\t: %s\n",mhs[i].nama);
						printf("NPM Mahasiswa\t: %i\n",mhs[i].npm);
						for(j=0;j<5;j++){
							printf("Nilai Kata Kuliah %s\tMahasiswa\t: %f\n",maku[i],mhs[i].mk[j]);
						}
						printf("IPS Mahasiswa\t: %f\n",mhs[i].ips);
						}
					}
				}break;
			case 3 : loop=0;
				break;
			default :{
				printf("\n\tKode Salah zzzzzzz");
				sleep(2);
				}break; 
		}
		system("cls");
	}

	return 0;
}
