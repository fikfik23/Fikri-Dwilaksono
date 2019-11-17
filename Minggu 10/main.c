#include "stdio.h"		

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
    int angka[20],temp,i,j,n=10;
    
    printf ("--------------------------------------------\n");
	printf ("---------- Program Insertion Sort ----------\n");
	printf ("--------------------------------------------\n");
	
    printf("\nMasukkan %d elements: \n",n);
    for(i=0;i<n;i++){
        scanf("%d",&angka[i]);}

    printf("\nAngka Sebelum di Sorting:");

    for(i=0;i<n;i++){
	printf("%d ",angka[i]);
	}

    for(i=1;i<n;i++){
        temp=angka[i];
        j=i-1;
        while((temp<angka[j])&&(j>=0)){
            angka[j+1]=angka[j];
            j=j-1;
        }
        angka[j+1]=temp;
    }

    printf("\nAngka Yang Sudah di Sorting: ");
    for(i=0;i<n;i++){
	printf("%d",angka[i]);
	}
    printf("\n");
    
    return 0;
}	
