#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//========================================================

struct node {
	 int data;
    struct node *next;
};
typedef struct node node;

node *createNode(void);
void tambahAwal(node **head);
void tambahData(node **head);
void tranverse(node *head);
void insertNode(node **head, node *pPre, node *pNew);
void deleteNode(node **head, node *pPre, node *pCur);
void hapusData(node **head);
void deleteList(node *head);
void jumlahData(node *head);
void hapusAwal(node **head);
void hapusAkhir(node **head);
void tambahAkhir(node **head);

//========================================================

int main()
{
  node *head;
  char pilih;

  head = NULL;
  do{
    //untuk membersihkan tampilan
    //untuk windows
    system("cls");
    //untuk linux
     //system("clear");
     
     printf("masukkan pilihan\n");
     printf("1. tambah data di awal\n");
     printf("2. tambah data di tengah list\n");
     printf("3. tambah data di akhir list\n");
     printf("4. hapus data\n");
     printf("5. hapus data di awal\n");
     printf("6. hapus data di akhir\n");
     printf("7. cetak isi list\n");
     printf("8. jumlah data list\n");
     printf("MASUKKAN PILIHAN (tekan q untuk keluar) : ");
     fflush(stdin);
     scanf("%c", &pilih);
     if (pilih == '1')
     		tambahAwal(&head);
     else if (pilih == '2')
			tambahData(&head);
     else if (pilih == '3')
			tambahAkhir(&head);
     else if (pilih == '4')
     		hapusData(&head);
     else if (pilih == '5')
     		hapusAwal(&head);
     else if (pilih == '6')
     		hapusAkhir(&head);
     else if (pilih == '7'){
     		tranverse(head);
         	getch();}
     else if (pilih == '8'){
     		jumlahData(head);
         	getch();}
  } while (pilih != 'q');
  deleteList(head);
}

//========================================================

node *createNode(void){
  node *ptr;

  ptr = (node *)malloc(sizeof(node));
  return(ptr);
}

//========================================================

void jumlahData(node *head){
   //Jumlah data linked list
	node *pWalker;
	int jumlah=0;

    system("cls");

    pWalker = head;
	jumlah = pWalker -> data;
	while (pWalker != NULL){
	printf("%d->", pWalker -> data);
	jumlah = jumlah + pWalker -> data;
   	pWalker = pWalker -> next;
	}
   printf("NULL");
   printf("\nJumlah Data = %d",jumlah);
}

//========================================================

void hapusAwal(node **head){
	node *hapus;
	system("cls");
	if(*head == NULL){
		printf("Node tidak ditemukan");
		getch();
		return;
	}
	tranverse(*head);
	hapus=*head;
	*head = hapus->next;
	free(hapus);
	getch();
	
}

//========================================================

void hapusAkhir(node **head){
	node *hapus,*temp;
	system("cls");
	if(*head == NULL){
		printf("node tidak ditemukan");
		getch();
		return;
	}
	tranverse(*head);
	hapus = *head;
	temp = NULL;
	while(hapus -> next != NULL){
		temp = hapus;
		hapus = hapus -> next;
	}
	free(hapus);
	temp -> next = NULL;
	getch();
}

//========================================================

void tambahAkhir(node **head){
	node *tambah,*pTemp;
	int bil;
	system("cls");
	tambah = *head;
	pTemp = NULL;
	fflush(stdin);
  	printf("masukkan bilangan integer : ");
  	fflush(stdin);
  	scanf("%d", &bil);
  	pTemp = (node *)malloc(sizeof(node));
  	if (pTemp == NULL){
	  	    printf("\nalokasi memeori gagal");
		    getch();
		    return ;
	}
  	//Awal
  	if(*head == NULL){
		 pTemp->data = bil;
	     pTemp->next = NULL;
	     insertNode(head, NULL, pTemp);
	}
	//Akhir
	else {
		while(tambah != NULL && tambah -> next != NULL){
			tambah = tambah -> next;
		}
		     pTemp->data = bil;
		     pTemp->next = NULL;
		     insertNode(head, tambah, pTemp);
	}
	
		
}

//========================================================

void tambahAwal(node **head){
  int bil;
  node *pTemp;

  //untuk membersihkan tampilan
  //untuk windows
  system("cls");
  //untuk linux
  //system("clear");
  fflush(stdin);
  printf("masukkan bilangan integer : ");
  fflush(stdin);
  scanf("%d", &bil);
  pTemp = (node *)malloc(sizeof(node));

  if (pTemp != NULL){
  		pTemp->data = bil;
      pTemp->next = NULL;
      insertNode(head, NULL, pTemp);
  }
  else{
      printf("Alokasi memori gagal");
      getch();
  }
}

//========================================================

void tambahData(node **head){
  int pos, bil;
  node *pTemp, *pCur;

  //untuk membersihkan tampilan
  //untuk windows
  system("cls");
  //untuk linux
  //system("clear");
  
  tranverse(*head);
  printf("\nposisi penyisipan setelah data bernilai : ");
  fflush(stdin);
  scanf("%d", &pos);
  printf("\nData yang disisipkan : ");
  fflush(stdin);
  scanf("%d", &bil);

  pCur = *head;
  while (pCur != NULL && pCur -> data != pos) {
    pCur = pCur -> next;
  }

  pTemp = (node *)malloc(sizeof(node));

  if (pCur == NULL){
     printf("\nnode tidak ditemukan");
     getch();
  }
  else if (pTemp == NULL){
     printf("\nalokasi memeori gagal");
     getch();
  }
  else{
     pTemp->data = bil;
     pTemp->next = NULL;
     insertNode(head, pCur, pTemp);
  }
}

//========================================================

void tranverse(node *head){
   //traverse linked list
	node *pWalker;

    system("cls");
	pWalker = head;
	while (pWalker != NULL){
   	printf("%d->", pWalker -> data);
   	pWalker = pWalker -> next;
	}
   printf("NULL");
}

//========================================================

void insertNode(node **head, node *pPre, node *pNew){
    if (pPre == NULL){
       //menambahkan diawal atau pada empty list
	    pNew -> next = *head;
       *head = pNew;
    }
    else {
       //menambahkan node di tengah atau di akhir
       pNew -> next = pPre -> next;
       pPre -> next = pNew;
   }
}

//========================================================

void deleteNode(node **head, node *pPre, node *pCur)
{
	if (pPre == NULL)
	   *head = pCur -> next;
	else
       pPre -> next = pCur -> next;
	free(pCur);
}

//========================================================

void hapusData(node **head)
{
  int pos;
  node *pCur, *pPre;

  //clrscr();
  system("cls");
  tranverse(*head);
  printf("\nData yang akan dihapus : ");
  fflush(stdin);
  scanf("%d", &pos);

  pPre = NULL;
  pCur = *head;
  //cari target value sampai ditemukan atau sampai pada akhir list
  while (pCur != NULL && pCur -> data != pos) {
    pPre = pCur;
    pCur = pCur -> next;
  }

  if (pCur == NULL){
     printf("\nnode tidak ditemukan");
     getch();
  }
  else
     deleteNode(head, pPre, pCur);
}

//========================================================

void deleteList(node *head){
  node *pTemp;


  while(head != NULL){
     pTemp = head;
     head = head->next;
     free(pTemp);
  }
}

//========================================================


 /*tugas :
 1. jumlah seluruh data
 2. hapus di awal
 3. hapus di akhir
 4. tambah data di akhir
 */

