#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define MAX 10
int Data[MAX];
int i;
void masukkan ()
{
            printf ("Masukkan data sebanyak 10 : \n\n");
            for (i=1; i<MAX; i++)
            {
                        printf("Data ke %d : ", i);
                        scanf("%d", &Data[i]);
            }
            for (i=1; i<MAX; i++)
            {
                        printf(" %d ", Data[i]);
            }
}
void Tukar (int *a, int *b)
{
            int temp;
            temp = *a;
            *a = *b;
            *b = temp;
}
void BubbleSort()
{
            int j;
            for(i=1; i<MAX-1; i++)
                        for(j=MAX-1; j>=i; j--)
                                    if(Data[j-1] > Data[j])
                                    Tukar(&Data[j-1], &Data[j]);
}

void keluaran ()
{
            printf ("\n");
            printf ("-----------------------------\n");
            printf ("Data yang telah diurutkan : \n\n");
            printf ("Ascending : ");
            for (i=1; i<MAX; i++)
            {
                        printf(" %d ", Data[i]);
            }
}
int main()
{
            masukkan();
            BubbleSort();
            keluaran();
            scanf("%d");
            return(0);
}
