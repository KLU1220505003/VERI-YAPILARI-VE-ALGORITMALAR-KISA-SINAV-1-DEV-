#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

struct ogrenciler
{
	long int no;
	char isim[20];
	char soyisim[20];
	int yas;
	char adresMahalle[10];
	char adresSokak[10];
	char adresApt[10];
	int adresNo;
	char adresIlce[10];
	char adresIl[10];
	
};

int main() {
	
	struct ogrenciler ogrenci[4]; //5 ogrenci tanýmlmak için ogrenci[4] dizisi
	
	int i; //sayac
	
	//verilerin alýnmasý
	for(i=0;i<5;i++)
	{
		printf("Ogrenci numaranizi giriniz:\t");
		scanf("%d",&ogrenci[i].no);
					
		printf("Adinizi giriniz:\t");
		scanf("%s",&ogrenci[i].isim);
		
		printf("Soyadizi giriniz:\t");
		scanf("%s",&ogrenci[i].soyisim);
		
		printf("Yasizi giriniz:\t");
		scanf("%d",&ogrenci[i].yas);
		
		
		printf("Adresinizi giriniz:\n");  //adreslerin tek tek alýnmasý
		printf(" Mahalle:\t");
		scanf("%s",&ogrenci[i].adresMahalle);
		
		printf(" Sokak:\t");
		scanf("%s",&ogrenci[i].adresSokak);
		
		printf(" Apartman adi:\t");
		scanf("%s",&ogrenci[i].adresApt);
		
		printf(" Apartman no:\t");
		scanf("%d",&ogrenci[i].adresNo);
		
		printf(" Ilce:\t");
		scanf("%s",&ogrenci[i].adresIlce);
		
		printf(" Il:\t");
		scanf("%s",&ogrenci[i].adresIl);
		
		printf("\n");
	}
	
	printf("\n**Ogrenciler Listesi**\n\n");
	
	for(i=0;i<5;i++) //ekrana bastýrma iþlemi
	{
		printf("Ogrenci %d:\n No: %d\n Adi Soyadi: %s %s\n Yasi: %d\n",i+1,ogrenci[i].no,ogrenci[i].isim,ogrenci[i].soyisim,ogrenci[i].yas);
		printf(" Adres: %s mah. %s sok. %s apt. NO %d %s/%s\n\n",ogrenci[i].adresMahalle,ogrenci[i].adresSokak,ogrenci[i].adresApt,ogrenci[i].adresNo,ogrenci[i].adresIlce,ogrenci[i].adresIl);
		
	}
	
	return 0;
}
