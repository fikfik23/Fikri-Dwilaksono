#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


	struct tgllahir {
		int tanggal;
		int bulan;
		int tahun;
	};
	struct alamat {
		char jalan[50];
		char kota[40];
		char provinsi[40];
	};
	struct rekening {
		char norek[15];
		long int saldo;
		char nama[40];
		char bank[20];
		struct tgllahir tgllahir;
		int umur;
		struct alamat alamat;
	};
	
int main(int argc, char *argv[]) {
	int index=0,now=2019, i=0, j, bank;
	char convert[128];
	int loop=1, menu, total=0, icari;
	char ccari[20];
	struct rekening rek[3];
	
	while(loop==1){
	printf("====================Program Bank Indonesia====================\n");
		printf("\t1. Buat Data Nasabah\n");
		printf("\t2. Tampilkan Data Nasabah\n");
		printf("\t3. Cari Saldo Nasabah\n");
		printf("\t4. Total Saldo Nasabah\n");
		printf("Kode Pilihan\t: ");
		scanf("%i",&menu);
		
		switch(menu){
		case 1:
	{
		printf("Input Nama : ");
		scanf("%s",&rek[i].nama);
		rek[i].saldo = rand() %100000000+1000000;
		printf("Masukkan Kode Bank : \n");
		printf ("\t1. Bank Indonesia\n");
		printf("\t2. Bank Asea\n");
		printf("\t3. Bank Jatim\n");
		printf("\t4. Bank Republic\n");
		printf("Masukkan Kode Bank : ");
		scanf("%i",&bank);
			switch(bank){
			case 1:
			strcpy(rek[i].bank,"Bank Indonesia");
			strcpy(rek[i].norek,"001");
			break;
			case 2:
			strcpy(rek[i].bank,"Bank Asea");
			strcpy(rek[i].norek,"002");
			break;
			case 3:
			strcpy(rek[i].bank,"Bank Jatim");
			strcpy(rek[i].norek,"003");
			break;
			case 4:
			strcpy(rek[i].bank,"Bank Jatim");
			strcpy(rek[i].norek,"004");
			break;}
					printf("MasukkanTanggal Lahir : \n");
					printf("\tTanggal		: ");
					scanf("%i",&rek[i].tgllahir.tanggal);	
					printf("\tBulan		: ");
					scanf("%i",&rek[i].tgllahir.bulan);
					printf("\tTahun		: ");
					scanf("%i",&rek[i].tgllahir.tahun);
					fflush(stdin);
					
					rek[i].umur = now - rek[i].tgllahir.tahun;
					
						printf("Masukkan Alamat Rumah : \n");
						printf("\tAlamat		: ");
						scanf("%[^\n]",&rek[i].alamat.jalan);	
						fflush(stdin);
						printf("\tKota		: ");
						scanf("%[^\n]",&rek[i].alamat.kota);
						fflush(stdin);
						printf("\tProvinsi	: ");
						scanf("%[^\n]",&rek[i].alamat.provinsi);
						fflush(stdin);

						strcat(rek[i].norek,itoa(rand()%512+128,convert,10));
						if(rek[i].tgllahir.tanggal<10){
						strcat(rek[i].norek,"0");
						}
						strcat(rek[i].norek,itoa(rek[i].tgllahir.tanggal,convert,10));	
						if(rek[i].tgllahir.bulan<10){
						strcat(rek[i].norek,"0");
						}
						strcat(rek[i].norek,itoa(rek[i].tgllahir.bulan,convert,10));
						if((rek[i].tgllahir.tahun%100)<10){
						strcat(rek[i].norek,"0");
						}
						strcat(rek[i].norek,itoa((rek[i].tgllahir.tahun)%10,convert,10));
						printf("%s\n",rek[i].norek);
						fflush(stdin);			
				i++;
			}
			break;
			
		case 2:	
		{
			printf("Data Bank Nasabah	 \n");
			for(j=0;j<i;j++){
				printf("Nama		: %s\n",rek[j].nama);
				printf("Nama Bank	: %s\n",rek[j].bank);
				printf("No Rek		: %s\n",rek[j].norek);
				printf("Umur		: %i\n",rek[j].umur);
				printf("Tanggal Lahir	: %i-%i-%i\n",rek[j].tgllahir.tanggal,rek[j].tgllahir.bulan,rek[j].tgllahir.tahun);
				printf("Alamat		: Jl.%s Kota %s Provinsi %s\n",rek[j].alamat.jalan,rek[j].alamat.kota,rek[j].alamat.provinsi);
				printf("Saldo 		: %i\n",rek[j].saldo);
				printf("\n\n");
				}	
		}
			break;
			
		case 3:
		{
		printf("\nMasukkan saldo Nasabah : ");
		scanf("%i",&icari);
		for(j=0;j<i;j++){
		if(rek[j].saldo<icari){
		printf("Nama %s saldo kurang dari %d\tSaldo Nasabah : %i\n",rek[j].nama,icari,rek[j].saldo);
		}else{
		printf("Nama %s saldo lebih dari %d\tSaldo Nasabah : %i\n",rek[j].nama,icari,rek[j].saldo);
		}
		}
	}
	break;
	
		case 4:
		{
			for(j=0;j<i;j++){
			total = total + rek[j].saldo;
			}
			printf("\nTotal Saldo Seluruh Nasabah\t: %d",total);
		}
			break;
			
		case 5:
		{
			printf("\nMasukkan Umur :");
			scanf("%d",&icari);
			for(j=0;j<i;j++){
			if(rek[j].umur<icari){
			printf("Nama %s umur kurang dari %d\tUmur Nasabah : %i\n",rek[j].nama,icari,rek[j].umur);
			}else {
			printf("Nama %s umur lebih dari %d\tUmur Nasabah : %i\n",rek[j].nama,icari,rek[j].umur);
			}
		}	
	}
			break;
			
		case 6:
		{
			printf("\nMasukkan input Provinsi : ");
			scanf("%s",&ccari);
			fflush(stdin);
			for(j=0;j<i;j++){
			if(strcmp(rek[j].alamat.provinsi,ccari)==0){
			printf("Nama %s ada pada provinsi %s\n",rek[j].nama,ccari);
			}
		}
	}
	break;
		}	

	}

	return 0;
}
