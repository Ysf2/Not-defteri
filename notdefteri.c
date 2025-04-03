#include<stdio.h>
#include<stdlib.h>
#include<string.h>



void yeni()
{
	char dosyaAdi[32];
	int secim;
	char metin[1000];
	char ch;
	system("cls"); 
	printf("yeni belge olusturma sayfasi \n");
	printf("dosya adi :"); scanf("%s",&dosyaAdi);
	FILE *ptr=fopen(dosyaAdi,"w");
	
	if(ptr!=NULL)
	{
		printf("%s isimli doysa olusturuldu \n\n\n",dosyaAdi);
		
		bas:
		
		printf("1- metin ekle \n");
		printf("2- dosya icerigi goster \n");
		printf("3- dosya icerigini temizle \n");
		printf("4- ana menuye don \n");
		printf("seciminiz  : \n"); scanf("%d",&secim);
		
		if(secim == 1)
		{
			 printf("metin girin :"); scanf(" %[^\n]s",metin);
			 ptr=fopen(dosyaAdi,"a");
			 fprintf(ptr,"%s\n",metin);
			 fclose(ptr);
			 system("cls");
			 printf("metin eklendi\n");
		}
		else if(secim ==2)
		{
			ptr=fopen(dosyaAdi,"r");
			system("cls");
			printf("dosya icerigi \n\n");
			while( !feof(ptr) )
			{
				ch=fgetc(ptr);
				printf("%c",ch);
			}
			printf("\n");
			fclose(ptr);
		}
		else if(secim==3)
			{
				ptr=fopen(dosyaAdi,"w");
				fclose(ptr);
				system("cls");
				printf("dosya icerigi temizlendi\n");
			}
			else if(secim == 4)
			{
				fclose(ptr);
				system("cls");
				return 0;
			}
			else{
				system("cls");
				fclose(ptr);
				printf("hatali secim!");
			}
			
			goto bas;
	}
	else
	{
		printf("dosya olusturulamadi");
	}
}


void ac()
{
	char dosyaAdi[32];
	int secim;
	char metin[1000];
	char ch;
	system("cls"); 
	printf("belge acma sayfasi \n");
	printf("dosya adi :"); scanf("%s",&dosyaAdi);
	FILE *ptr=fopen(dosyaAdi,"r");
	
	if(ptr!=NULL)
	{
		printf("%s isimli doysa acildi \n\n\n",dosyaAdi);
		
		bas:
		
		printf("1- metin ekle \n");
		printf("2- dosya icerigi goster \n");
		printf("3- dosya icerigini temizle \n");
		printf("4- ana menuye don \n");
		printf("seciminiz  : \n"); scanf("%d",&secim);
		
		if(secim == 1)
		{
			 printf("metin girin :"); scanf(" %[^\n]s",metin);
			 ptr=fopen(dosyaAdi,"a");
			 fprintf(ptr,"%s\n",metin);
			 fclose(ptr);
			 system("cls");
			 printf("metin eklendi\n");
		}
		else if(secim ==2)
		{
			ptr=fopen(dosyaAdi,"r");
			system("cls");
			printf("dosya icerigi \n\n");
			while( !feof(ptr) )
			{
				ch=fgetc(ptr);
				printf("%c",ch);
			}
			printf("\n");
			fclose(ptr);
		}
		else if(secim==3)
			{
				ptr=fopen(dosyaAdi,"w");
				fclose(ptr);
				system("cls");
				printf("dosya icerigi temizlendi\n");
			}
			else if(secim == 4)
			{
				fclose(ptr);
				system("cls");
				return 0;
			}
			else{
				system("cls");
				fclose(ptr);
				printf("hatali secim!");
			}
			
			goto bas;
	}
	else
	{
		system("cls");
		printf("%s isimli dosya bulunamadi",dosyaAdi);
	}
	
}

int menu()
{
	int secim;
	printf("\nNOT DEFTERI \n\n");
	printf("1- Yeni \n");
	printf("2- Ac \n");
	printf("0- cikis \n");
	printf("seciminiz  : "); scanf("%d",&secim);
	
	return secim;
}




int main()
{
	int secim = menu();
	
	while(secim != 0)
	{
		switch(secim)
		{
			case 1: yeni(); break;
			case 2: ac(); break;
			case 0: printf("cikis yaptiniz \n"); break;
			default : printf("hatali secim !!! \n" ); break;		
		}
		secim=menu();
	}
	return 0;
}
