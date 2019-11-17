#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

main(){
	int jarak[3][3][3];
	float lab, lbc, lt;
	int l, p, g;
	printf("Tentukan Koordinat tiap titik sebagai berikut\n");
	for(l=0;l<3;l++){
		printf("Lintasan ke-%d\n",l+1);
		for(p=0; p<3; p++){
			printf("\tTitik ke-%d\n",p+1);
			printf("\t\tKoordinat x: ");
			scanf("%d",&jarak[l][p][0]);
			printf("\t\tKoordinat y: ");
			scanf("%d",&jarak[l][p][1]);
			printf("\t\tKoordinat z: ");
			scanf("%d",&jarak[l][p][2]);
		}
	}
	getch();
	printf("\n\n");
	for(l=0;l<3;l++){
		printf("Lintasan ke-%d\n",l+1);
		for(p=0;p<3;p++){
			printf("  Titik ke-%d\n",p+1);
			printf("    Koordinat : \n");
			
			printf("\n|\tx\t|\ty\t|\tz\t|\n");
			printf("-------------------------------------------------\n");
			for(g=0;g<3;g++){
				printf("|\t%d\t",jarak[l][p][g]);
				
			}
			printf("|");
		printf("\n\n");
		}
	printf("\n");
	lab = sqrt(pow((jarak[l][1][0]-jarak[l][0][0]),2) + pow((jarak[l][1][1]-jarak[l][0][1]),2) + pow((jarak[l][1][2]-jarak[l][0][2]),2));
	lbc = sqrt(pow((jarak[l][2][0]-jarak[l][1][0]),2) + pow((jarak[l][2][1]-jarak[l][1][1]),2) + pow((jarak[l][2][2]-jarak[l][1][2]),2));		
	lt = lab+lbc;
	printf("\tPanjang lintasan ke-%d adalah : %lf\n\n",l+1,lt);
	}
}
