//#include "stdafx.h"
#define _CRT_SECURE_NO_WARNINGS /*FONKSÝYONDA(?) SCANF HATASININ ÇÖZÜMÜ! BU TÜR ÞEYLER HER ZAMAN EN ÜSTTE*/
#include <stdlib.h>
#include <iostream>
#include <stdio.h>



using namespace std;

int toplam, toplam2, carpma, cikarma, sonuc, sonuc2, carpmaIkiSayi;

int main()
{
	int x;			//""k'ye katlayacagimiz sayi.
	int sayi1, sayi2, sayi3, sayi4, sayi5, sayi6, yazilacakSayi;
	int sifre = 123456, sifreBumu, i, kalanHak = 3;
	char yaziSayi[50];

	//bool a = (6 > 3);					/*Anlýk Tanýmlama*/
	//bool b = (5 > 8);						/*KARÞILAÞTIRMA OPERATÖRLERÝ KULLANIMI*/
	//bool c = (9 == 9);
	//bool d = (71 <= 4);

	//cout << "a degeri:" << a << endl;
	//cout << "b degeri:" << b << endl;
	//cout << "c degeri:" << c << endl;
	//cout << "d degeri:" << d << endl;
	//int a = 10, b = 20;
	//++a;
	//b--;
	//cout << "a degeri:" << a <<endl ;							/*DEÐÝÞKEN ARTTIRMA VE AZALTMA.*/
	//cout << "b degeri:" << b << endl;
	//	sonuc = a + b;
	//	sonuc2 = a*b;
	//cout << "A ve B Toplami:" << sonuc << endl;
	//cout << "A ve B Carpimi:" << sonuc2 << endl;
	/*std::*/cout << "Merhaba Dunya.\n";

	//cout << "Katlanacak sayiyi giriniz:";
	//	cin >> x;
	//cout << "Sayinin 2 kati:" << x * 2 <<"\n";

	//cout << "1. sayiyi giriniz:";
	//	cin >> sayi1;
	//cout << "\n2. sayiyi giriniz: ";
	//	cin >> sayi2;
	//toplam = sayi1 + sayi2;													//Deðiþken atayarak sonucu gösterme iþlemi.
	//cout << "Iki sayinin toplami:" << toplam <<"\n";

	//	 cout<< "1. Sayiyi Giriniz:";
	//		cin >> sayi3;
	//	cout << "\n2. Sayiyi Giriniz:";											/*4 SAYI GÝRÝYORUZ VE TOPLATIP CIKARIYORUZ SONUCU ATAMA YAPARAK EKRANA VERÝYORUZ.*/
	//		cin >> sayi4;
	//	cout << "\n3. Sayiyi Giriniz:";
	//		cin >> sayi5;
	//	cout << "\n4. Sayiyi Giriniz:";
	//		cin >> sayi6;
	//
	//		carpma = sayi3*sayi5;
	//		cout << "1. ve 3. sayinin carpimi:" << carpma<<"\n";
	//		toplam2 = sayi4 + sayi6;
	//		cout << "2. ve 4. sayinin toplami:" << toplam2<<"\n";
	//		cikarma = carpma - toplam2;
	//		cout << "Genel toplam:" << cikarma<< endl;		*/		

	///*SAYINI YAZIYA? CEVIRME*/
	//cout << "Yazilacak Sayi: ";
	//cin >> yazilacakSayi;
	//_itoa(yazilacakSayi, yaziSayi, 2);
	//cout << "Sayinin Yazimi: " << yaziSayi << endl;

	/*Þifre Girip Hoþgeldin Yazan Program FORIF*/
	//giris:
	//cout << "Sifreyi Giriniz:";
	//cin >> sifreBumu;
	//{
	//	if (kalanHak==0)
	//	{
	//		cout << "Kalan Hakkiniz bitti!\n";
	//	}
	//	else
	//	{
	//		if (sifreBumu == sifre)
	//			cout << "Hosgeldiniz!\n";
	//		else
	//		{
	//			cout << "Giris Yapilamadi. " << kalanHak - 1 << " Hakkiniz Kaldi" << endl;
	//			kalanHak= kalanHak-1;
	//			goto giris;
	//		}
	//	}
	//}



	/*FONKSÝYONLAR 101*/


	//void denemeFonk();
	//{
	//	cout << "Merhaba ilk fonksiyon \n" ;
	//}

	//int karsilastirFonk();
	//{
	//	int sayiBmK, sayiBmK2;
	//	printf("1. Sayiyi giriniz:");
	//		scanf("%d", &sayiBmK);
	//	printf("\n2. Sayiyi Giriniz:");
	//		scanf("%d", &sayiBmK2);
	//		if (sayiBmK == sayiBmK2 )
	//			{
	//				printf("Sayilar Birbirine Esittir.\n");
	//			}
	//		else if (sayiBmK > sayiBmK2)
	//		{
	//			printf("Sayi1 Sayi2'den Daha Buyuk. %d\n", sayiBmK);
	//		}
	//		else
	//		{
	//			printf("Sayi2 Sayi1'den Daha Buyuk. %d\n", sayiBmK2);
	//		}
	//}

	/*TOPLAMA ÇIKARMA*/
	//int islem, sayi1, sayi2;
	//cout << "1.sayiyi giriniz:";
	//	cin >> sayi1;
	//cout << "2.sayiyi giriniz:";
	//	cin >> sayi2;
	//cout << "Bir islem Seciniz:\n";
	//cout << "1 Toplama\n";
	//cout << "2 Cikarma\n";
	//cout << "3 Carpma\n";
	//cout << "4 Bolme\n";
	//	cin >> islem;
	//	switch (islem)
	//	{
	//	case 1: cout << "Sayilarin Toplami:" << sayi1 + sayi2 << endl;
	//		break;
	//	case 2: cout << "Sayilarin Cikarimi:" << sayi1 - sayi2 << endl;
	//		break;
	//	case 3: cout << "Sayilarin Carpimi:" << sayi1 * sayi2 << endl;
	//		break;
	//	case 4: cout << "Sayilarin Bolumu:" << sayi1 / sayi2 << endl;
	//		break;
	//	default: cout << "Sadece Sayi Giriniz!\n";
	//		//break;
	//	}


	system("Pause");
	return 71;
}