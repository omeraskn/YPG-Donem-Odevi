#include <stdio.h>
#include <time.h>

#define MAX 100


void shellsort(int dizi[], int gap);			
		
int main(){
	
	char ss;
	int i, j, k, a, b, secim, gap;
	int dizi[MAX];
	
	srand(time(NULL));	
	
	do{
	
	printf("\t\t\t\tYAPISAL PROGRAMLAMA DONEM PROJESI\n\n\nKullanilacak siralama algoritmasi 'Shell Sort' algoritmasi olacaktir.\n\n\n+ Dizi elemanlarini kendiniz atamak isterseniz 1'e \n\n+ Rastgele olusturulmus bir dizinin siralanmasini gormek icin 2'ye basiniz\n\n+ Cikis icin ise 3'e basiniz\n\n\n-->");
	scanf("%d", &secim);
	if(secim==1){
		system("cls");
		printf("\t\t\t\t\tShell Sort\n\n\nDizinin eleman sayisini giriniz. (Maksimum 100 eleman kabul edilir)\nEleman sayisi:");
		scanf("%d", &gap);
		printf("\nDizinin elemanlarini giriniz.\n");															// DIZI ELEMANALRINI ALMA
		for(i=0; i<gap; i++){
			printf("Dizi[%d]=", i);
			scanf("%d", &dizi[i]);
		}
		
		printf("\n\n\nDizi basariyla siralandi. Olusan dizi\n");
		shellsort(dizi, gap);
		for(i=0; i<gap; i++){
			printf("%d  ", dizi[i]);																			// SIRALANANA DIZIYI YAZDIRMA
		}		
		
		printf("\n\n\n\n\nIslem tamamlandi. Menuye donmek icin enter tusuna basabilirsiniz.");
		scanf("%c", &ss);
		scanf("%c", &ss);
		system("cls");
	}
	else if(secim==2){
		system("cls");
		printf("\t\t\t\t\tShell Sort\n\n\nDizi rastgele olusturulacak\n\n");
		printf("Dizinin eleman sayisini giriniz. (Maksimum 100 eleman kabul edilir)\nEleman sayisi:");
		scanf("%d", &gap);
		printf("\n\nRastgele olusturulacak dizini elemanlari hangi degerler arasinda olsun?\nAlt limit:");
		scanf("%d", &a);
		printf("\n\nUst limit:");
		scanf("%d", &b);
		for(i=0; i<gap; i++){																					//DIZIYI RASTGELE DEGERLERLE OLUSTURMA		
			dizi[i]= ((rand() % (b-a))+a);
			
		}
		printf("\n\nRastgele olusturulan matris.\n\n");
		for(i=0; i<gap; i++){
			printf("%d  ", dizi[i]);			
		}
		
		sleep(1);
		printf("\n\n\nDizi basariyla siralandi. Olusan dizi\n");
		shellsort(dizi, gap);
		for(i=0; i<gap; i++){																					//DIZIYI SIRALAMA
			printf("%d  ", dizi[i]);			
		}	
		
		printf("\n\n\n\n\nIslem tamamlandi. Menuye donmek icin enter tusuna basabilirsiniz.");
		scanf("%c", &ss);
		scanf("%c", &ss);
		system("cls");

		
	}
	else if(secim!=1 && secim!=2 && secim!=3){
		printf("Lutfen gecerli bir sayi girin.");
		sleep(2);
		system("cls");
	}
	}
	while(secim!= 3 || a>3 );
	
		
	
	return 0;
}


void shellsort(int dizi[], int gap){				// SHELL SORT ALGORÝTMASI
	int i, j, k, temp, gap1, gap2;
    
	for (i= gap/2; i>0; i/=2){      				// GAP MIKTARINI DUZENLEMEYE YARAYAN FOR DONGUSU
		for (j=i; j<gap; j++){         				// GAP 1 OLANA KADAR SORT'U DEVAM ETTÝREN FOR DONGUSU 
			for(k= j-i; k>= 0; k = k - i){			// GAP MIKTARI KADAR ILERLEYEREK DIZIYI TARAYAN FOR DONGUSU
                if (dizi[k+i] <= dizi[k]){			// ELEMANLARI YER DEGISTIRME ISLEMI						         
                    temp = dizi[k];
                    dizi[k] = dizi[k+i];
                    dizi[k+i] = temp;
                }
            }
        }
    }		
}





/* 	gap1=gap;
	gap2=gap;																					// deneme
	while(gap2>0){

		gap2= (gap2/2);		
		for(i=gap2; i<gap1; i++){
			for(j=0; j<gap2; j++){
				if(dizi[j] >= dizi[i]){
					temp=dizi[j];
					dizi[j]=dizi[i];
					dizi[i]=temp;
				}							
			}
		}		
	}*/

