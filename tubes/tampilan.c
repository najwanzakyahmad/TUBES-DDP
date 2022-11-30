#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "tampilan.h"
//
//
//
//	
//	

	void loading(){
		int i;		
		system("cls");
		printf("\n");
		printf("\n\t\t\t\t\t\t\t\t\t\tLOADING\n");
			for(i=1;i<8;i++)
			{
				printf("                   ");
				printf("%c", 254);
				Sleep(130);
			}
	}
		
//	
////INI UNTUK TAMPILAN AWAL
void tampilan_awal(){
	
	printf("\t\t\t\t\t   ________________                                                                     \n");
	printf("\t\t\t\t\t  |                |                                                                    \n");
	printf("\t\t\t\t\t  |    _________   |                                                                    \n");
	printf("\t\t\t\t\t  |   |         |__|                                                                    \n");
	printf("\t\t\t\t\t  |   |               __________   _____________   ________                             \n");
	printf("\t\t\t\t\t  |   |              |    ___   | |____     ____| |____   /   _______   ________        \n");
	printf("\t\t\t\t\t  |   |          __  |   |   |  |      |   |          /  /   |   _   | |        |       \n");
	printf("\t\t\t\t\t  |   |_________|  | |   |   |  |      |   |         /  /    |  |_|  | |   __   |       \n");
	printf("\t\t\t\t\t  |                | |   |___|  |      |   |        /  /___  |   _   | |  |  |  |       \n");
	printf("\t\t\t\t\t  |________________| |__________|      |___|       |_______| |__| |__| |__|  |__|       \n");
	printf("\n");
	printf("\t\t\t\t\t  _______________MENCARI KOSTAN LEBIH MUDAH DI DAERAH SEKITARAN POLBAN____________      \n");
	printf("\t\t\t\t\t ==================================================================================       \n");
	printf("\n\n");
}

void menu_login(){
	printf("\t\t\t\t\t   ________________                                                                     \n");
	printf("\t\t\t\t\t  |                |                                                                    \n");
	printf("\t\t\t\t\t  |    _________   |                                                                    \n");
	printf("\t\t\t\t\t  |   |         |__|                                                                    \n");
	printf("\t\t\t\t\t  |   |               __________   _____________   ________                             \n");
	printf("\t\t\t\t\t  |   |              |    ___   | |____     ____| |____   /   _______   ________        \n");
	printf("\t\t\t\t\t  |   |          __  |   |   |  |      |   |          /  /   |   _   | |        |       \n");
	printf("\t\t\t\t\t  |   |_________|  | |   |   |  |      |   |         /  /    |  |_|  | |   __   |       \n");
	printf("\t\t\t\t\t  |                | |   |___|  |      |   |        /  /___  |   _   | |  |  |  |       \n");
	printf("\t\t\t\t\t  |________________| |__________|      |___|       |_______| |__| |__| |__|  |__|       \n");
	printf("\n");
	printf("\t\t\t\t\t  _______________MENCARI KOSTAN LEBIH MUDAH DI DAERAH SEKITARAN POLBAN____________      \n");
	printf("\t\t\t\t\t ==================================================================================       \n");
	printf("\n\n");
	
	printf("\t\t\t\t\t                                      ------------                                        \n");
	printf("\t\t\t\t\t                                       LOGIN *(1)                                         \n");
	printf("\t\t\t\t\t                                      ------------                                    \n\n\n");
	printf("\t\t\t\t\t                                    ----------------                                      \n");
	printf("\t\t\t\t\t                                      REGISTER *(2)                                       \n");
	printf("\t\t\t\t\t                                    ----------------                                      \n");
	printf("\t\t\t\t\t ==================================================================================       \n");
	printf("\t\t\t\t\t                                       PILIHAN : ");
	scanf("%d", &pilihan_awal);
	printf("\t\t\t\t\t ==================================================================================       \n");
	
	
// BELUM BUAT SISTEM REGISTRASI
	
	
	do{	
			pilihan:
			loading();
			system("cls");
			tampilan_awal();
			menu_awal();
				do{
					pilihan_kedua:
					if (pilihan_kosan < 8 && pilihan_kosan > 0)
						{
							
							do{
							
								switch (pilihan_kosan)
								{
									
									case 1:
										
										loading();
										system("cls");
										tampilan_awal();
										menu_kosan(pilihan_kosan);
										break;
									
									case 2:
										loading();
										system("cls");
										tampilan_awal();
										menu_kosan(pilihan_kosan);
										break;
												
									case 3:
										loading();
										system("cls");
										tampilan_awal();			
										menu_kosan(pilihan_kosan);
										break;
												
									case 4:
										loading();
										system("cls");
										tampilan_awal();
										menu_kosan(pilihan_kosan);
										break;
												
									case 5:
										loading();
										system("cls");
										tampilan_awal();
										menu_kosan(pilihan_kosan);
										break;
												
									case 6:
										loading();
										system("cls");
										tampilan_awal();
										menu_kosan(pilihan_kosan);
										break;
										
									case 7:
										goto pilihan;
										break;
								}
						
							}while (pilihan_kosan > 7);
							do{
									switch (pilihan_akhir)
										{
											case 1:
												booking();
												break;
												
											case 2:
												system("cls");
												goto pilihan;
												break;
										}
							}while(pilihan_final == 1);
							
						} 
					
					
					else
					{
						
							printf("\t\t\t\t\t\t\t\t     MASUKAN ANGKA DENGAN BENAR\n");
							system("pause");
							goto pilihan_kedua;
				
					}
			}while (!(pilihan_kosan < 7 && pilihan_kosan > 0));
		}while(pilihan_akhir == 9);
}
	

//	
////INI UNTUK MENU AWAL
void menu_awal(){
	
	printf("\t\t\t\t\t ==================================================================================       \n\n");
	printf("\t\t\t\t\t                                   PILIHAN DAERAH                                         \n\n");
	printf("\t\t\t\t\t ==================================================================================       \n\n");
	printf("\t\t\t\t\t                                   1. CIWARUGA                                            \n\n");
	printf("\t\t\t\t\t ----------------------------------------------------------------------------------       \n\n");
	printf("\t\t\t\t\t                                  2. GEGERKALONG                                          \n\n");
	printf("\t\t\t\t\t ----------------------------------------------------------------------------------       \n\n");
	printf("\t\t\t\t\t                                   3. SARIJADI                                            \n\n");
	printf("\t\t\t\t\t ----------------------------------------------------------------------------------       \n\n");
	printf("\t\t\t\t\t                                    4. CIBOGO                                             \n\n");
	printf("\t\t\t\t\t ==================================================================================       \n\n");
	printf("\t\t\t\t\t                                     5. HELP!                                             \n\n");
	printf("\t\t\t\t\t ==================================================================================       \n\n");
	printf("\t\t\t\t\t                                    6. LOGOUT                                             \n\n");
	printf("\t\t\t\t\t ==================================================================================       \n\n");
	printf("\t\t\t\t\t                                      PILIHAN : ");
	scanf("%d",&pilihan_menu);
	
	if(pilihan_menu < 7 && pilihan_menu >0)
	{
		loading();
		
		switch (pilihan_menu)
		{
			case 1:
				kosan_ciwaruga();
				break;
	
			case 2:
				kosan_gegerkalong();
				break;
				
			case 3:
				kosan_sarijadi();
				break;
				
			case 4:
				kosan_cibogo();
				break;
				
			case 5:
				menu_help();
				break;
				
			case 6:
				tampilan_awal();
				break;
		}
	}	
	else 
	{
		system("cls");
		printf("\n\n\n\n\n\n");
		printf("\t\t\t\t\t\t\t\t\t MASUKAN ANGKA DENGAN BENAR\n \t\t\t\t\t\t\t\t\t\tULANGI LAGI\n\n");
		printf("\t\t\t\t\t\t\t\t       KLIK APA SAJA UNTUK MELANJUTKAN\n\n\n\n\n");
		system("pause");
		system("cls");
		tampilan_awal();
		menu_awal();
		
	}

////INI UNTUK MENU PILIHAN YANG ADA DI CIWARUGA
		
	}
void kosan_ciwaruga(){
	isi_menu_kosan();
	system("cls");
	tampilan_awal();
	printf("\t\t\t\t\t ==================================================================================       \n");
	printf("\t\t\t\t\t                          DAFTAR KOSAN YANG ADA DI CIWARUGA                               \n");
	printf("\t\t\t\t\t ==================================================================================       \n");	
	printf("\t\t\t\t\t                                   1. KOSAN BAHAGIA                                       \n");
	printf("\t\t\t\t\t                                   2. KOSAN SENANG                                        \n");
	printf("\t\t\t\t\t                                   3. KOSAN AMAN                                          \n");
	printf("\t\t\t\t\t                                   4. KOSAN BU LELA                                       \n");
	printf("\t\t\t\t\t                                   5. KOSAN BU HAJI                                       \n");
	printf("\t\t\t\t\t                                   6. KOSAN PAK SAPARDI                                   \n\n");
	printf("\t\t\t\t\t                                   7. kembali                                   \n");
	printf("\t\t\t\t\t ==================================================================================       \n");
	printf("\t\t\t\t\t                                    PILIHAN : ");scanf("%d",&pilihan_kosan);
	printf("\t\t\t\t\t ==================================================================================       \n");
	

	
	
	
}

	
////INI UNTUK MENU PILIHAN YANG ADA DI GEGERKALONG	
void kosan_gegerkalong(){
	isi_menu_kosan2();
	system("cls");
	tampilan_awal();
	printf("\t\t\t\t\t ==================================================================================       \n");
	printf("\t\t\t\t\t                        DAFTAR KOSAN YANG ADA DI GEGERKALONG                              \n");
	printf("\t\t\t\t\t ==================================================================================       \n");	
	printf("\t\t\t\t\t                                  1. KOSAN pa mamat                                       \n");
	printf("\t\t\t\t\t                                  2. KOSAN pa amir                                       \n");
	printf("\t\t\t\t\t                                3. KOSAN pa jengggot                                       \n");
	printf("\t\t\t\t\t                                  4. KOSAN sejatera                                       \n");
	printf("\t\t\t\t\t                                    5. KOSAN hikx                                       \n");
	printf("\t\t\t\t\t                                   6. KOSAN ntahla                                       \n\n");
	printf("\t\t\t\t\t                                   7. kembali                                   \n");
	printf("\t\t\t\t\t ==================================================================================       \n");
	printf("\t\t\t\t\t                                    PILIHAN : ");scanf("%d",&pilihan_kosan);
	printf("\t\t\t\t\t ==================================================================================       \n");
	
	
	
	
}

	
////INI UNTUK MENU PILIHAN YANG ADA DI SARIJADI		
void kosan_sarijadi(){
	isi_menu_kosan3();
	system("cls");
	tampilan_awal();
	printf("\t\t\t\t\t ==================================================================================       \n");
	printf("\t\t\t\t\t                          DAFTAR KOSAN YANG ADA DI SARIJADI                               \n");
	printf("\t\t\t\t\t ==================================================================================       \n");	
	printf("\t\t\t\t\t                                   1. KOSAN A                                       \n");
	printf("\t\t\t\t\t                                   2. KOSAN B                                       \n");
	printf("\t\t\t\t\t                                   3. KOSAN c                                       \n");
	printf("\t\t\t\t\t                                   4. KOSAN D                                       \n");
	printf("\t\t\t\t\t                                   5. KOSAN E                                       \n");
	printf("\t\t\t\t\t                                   6. KOSAN F                                       \n\n");
	printf("\t\t\t\t\t                                   7. kembali                                   \n");
	printf("\t\t\t\t\t ==================================================================================       \n");
	printf("\t\t\t\t\t                                    PILIHAN : ");scanf("%d",&pilihan_kosan);
	printf("\t\t\t\t\t ==================================================================================       \n");
	
}

	
//------------------------------------------------------------------------------------------------------------------------------//INI UNTUK MENU PILIHAN YANG ADA DI CIBOGO
void kosan_cibogo(){
	isi_menu_kosan4();
	system("cls");
	tampilan_awal();
	printf("\t\t\t\t\t ==================================================================================       \n");
	printf("\t\t\t\t\t                          DAFTAR KOSAN YANG ADA DI CIBOGO                               \n");
	printf("\t\t\t\t\t ==================================================================================       \n");	
	printf("\t\t\t\t\t                                   1. KOSAN 1                                       \n");
	printf("\t\t\t\t\t                                   2. KOSAN 2                                       \n");
	printf("\t\t\t\t\t                                   3. KOSAN 3                                       \n");
	printf("\t\t\t\t\t                                   4. KOSAN 4                                       \n");
	printf("\t\t\t\t\t                                   5. KOSAN 5                                       \n");
	printf("\t\t\t\t\t                                   6. KOSAN 6                                       \n\n");
	printf("\t\t\t\t\t                                   7. kembali                                   \n");
	printf("\t\t\t\t\t ==================================================================================       \n");
	printf("\t\t\t\t\t                                    PILIHAN : ");scanf("%d",&pilihan_kosan);
	printf("\t\t\t\t\t ==================================================================================       \n");
}

	
//------------------------------------------------------------------------------------------------------------------------------//INI UNTUK TAMPILAN MENU DARI HELP
void menu_help(){
	system("cls");
	tampilan_awal();
	printf("\t\t\t\t\t ==================================================================================       \n");
	printf("\t\t\t\t\t                                TUTOR MAKE NI APLIKASI                                    \n");
	printf("\t\t\t\t\t ==================================================================================       \n");	
	printf("\t\t\t\t\t                     1. LOGIN JIKA SUDAH PUNYA AKUN                         \n");
	printf("\t\t\t\t\t                     2. REGISTER JIKA BELUM PUNYA AKUN                      \n");
	printf("\t\t\t\t\t                     3. PILIH DAERAH YANG ANDA INGINKAN                     \n");
	printf("\t\t\t\t\t                     4. PILIH KOSAN YANG ANDA INGIN CARI TAU                \n");
	printf("\t\t\t\t\t                     5. PILIH BUAT PESANAN, JIKA INGIN MEMESAN KOSAN        \n");
	printf("\t\t\t\t\t                     6. PILIH KEMBALI UNTUK KEMBALI KE HALAMAN MENU         \n");
	printf("\t\t\t\t\t                     7. PILIH LOGOUT JIKA INGIN KELUAR DARI AKUN            \n");
	printf("\t\t\t\t\t ==================================================================================       \n");
	printf("\t\t\t\t\t                   KEMBALI (press anything) :                                             \n");
	printf("\t\t\t\t\t ==================================================================================       \n");
	
	system("pause");
	system("cls");
	loading();
	system("cls");
	tampilan_awal();
	menu_awal();
}

void booking(){
	loading();
	system("cls");
	tampilan_awal();
		printf("\t\t\t\t\t ==========================================-=======================================       \n");
		printf("\t\t\t\t\t                                    HALAMAN BOOKING                                           \n");
		printf("\t\t\t\t\t ==================================================================================       \n");
		printf("\t\t\t\t\t                                 --IDENTITAS PEMILIK--\n\n");
		printf("\t\t\t\t\t                          NAMA     : pa bambang\n");/*scanf("%s", nama);*/
		printf("\t\t\t\t\t                          NO HP    : 08154135435132\n");/*scanf("%s", kontak);*/
		printf("\t\t\t\t\t                          NO. REK  : 6154 1543 5354 5135\n");/*scanf("%s", rekening);*/
		printf("\t\t\t\t\t ==================================================================================       \n");
		printf("\t\t\t\t\t      <<o 0 (kembali)                         (sudah melakukan transaksi?) 1 o>>          \n");				
		printf("\t\t\t\t\t ==================================================================================       \n");
		printf("\t\t\t\t\t                                         PILIHAN : ");
		scanf("%d",&pilihan_booking);
		
		
		system("cls");
		if(pilihan_booking < 3) 
		{
			switch(pilihan_booking)
				{
					case 0:
						loading();
						menu_kosan();
						break;
						
					case 1:
						loading();
						tampilan_awal();
						break;
				}			
		}else{
			printf("coba lagi\n");
			system ("pause");
			system("cls");
			booking();
			
		}
		
		
}
	
	
////INI UNTUK TAMPILAN UNTUK DARI TIAP KOSAN
void menu_kosan(int urutan_kosan){
	
	int i = urutan_kosan;
	
	printf("\t\t\t\t\t ==================================================================================       \n");	
	printf("\t\t\t\t\t NAMA KOSAN : %s \n", kosan[i].nama_kosan);
	printf("\t\t\t\t\t ALAMAT KOSAN : %s \n", kosan[i].alamat);
	printf("\t\t\t\t\t ==================================================================================       \n");
	printf("\t\t\t\t\t FASILITAS : %s \n",kosan[i].fasilitas);
	printf("\t\t\t\t\t HARGA PERBULAN : %d \n", kosan[i].harga_perbulan);
	printf("\t\t\t\t\t HARGA PERTHAUN : %d \n", kosan[i].harga_pertahun);
	printf("\t\t\t\t\t PEMILIK KOSAN : %s \n", kosan[i].pemilik);	
	printf("\t\t\t\t\t KONTAK PEMILIK KOSAN : %s \n", kosan[i].kontak);
	printf("\t\t\t\t\t ==================================================================================       \n");
	printf("\t\t\t\t\t\                                                         1. BOOKING   2. KEMBALI\n");
	printf("\t\t\t\t\t ==================================================================================       \n");
	printf("\t\t\t\t\t                                    PILIHAN(1 atau 2) : ");scanf("%d",&pilihan_akhir);
	printf("\t\t\t\t\t ==================================================================================       \n");	
	


}	

	
//STRUCT UNTUK ISI MENU KOSAN
void isi_menu_kosan(){
	
	kosan[1].nama_kosan ="bahagia";
	kosan[1].alamat = "jalan jalan";
	kosan[1].fasilitas = "kasur dan lemari";
	kosan[1].harga_perbulan = 500000;
	kosan[1].harga_pertahun = 5000000;
	kosan[1].pemilik = "pa haji";
	kosan[1].kontak = 900807;
	
	kosan[2].nama_kosan ="senang";
	kosan[2].alamat = "jalan lari";
	kosan[2].fasilitas = "kasur dan lemari";
	kosan[2].harga_perbulan = 500000;
	kosan[2].harga_pertahun = 5000000;
	kosan[2].pemilik = "pa hajah";
	kosan[2].kontak = "08771818369";
	
	kosan[3].nama_kosan ="aman";
	kosan[3].alamat = "jalan lari";
	kosan[3].fasilitas = "kasur dan lemari";
	kosan[3].harga_perbulan = 500000;
	kosan[3].harga_pertahun = 5000000;
	kosan[3].pemilik = "pa hajah";
	kosan[3].kontak = "08771818369";

	kosan[4].nama_kosan ="Bu Lela";
	kosan[4].alamat = "jalan lari";
	kosan[4].fasilitas = "kasur dan lemari";
	kosan[4].harga_perbulan = 500000;
	kosan[4].harga_pertahun = 5000000;
	kosan[4].pemilik = "pa hajah";
	kosan[4].kontak = "08771818369";

	kosan[5].nama_kosan ="Pak Haji";
	kosan[5].alamat = "jalan lari";
	kosan[5].fasilitas = "kasur dan lemari";
	kosan[5].harga_perbulan = 500000;
	kosan[5].harga_pertahun = 5000000;
	kosan[5].pemilik = "pa hajah";
	kosan[5].kontak = "08771818369";

	kosan[6].nama_kosan ="Pak sapardi";
	kosan[6].alamat = "jalan lari";
	kosan[6].fasilitas = "kasur dan lemari";
	kosan[6].harga_perbulan = 500000;
	kosan[6].harga_pertahun = 5000000;
	kosan[6].pemilik = "pa hajah";
	kosan[6].kontak = "08771818369";
	
}	

void isi_menu_kosan2(){
	
	kosan[1].nama_kosan ="jojo";
	kosan[1].alamat = "jalan jalan";
	kosan[1].fasilitas = "kasur dan lemari";
	kosan[1].harga_perbulan = 500000;
	kosan[1].harga_pertahun = 5000000;
	kosan[1].pemilik = "pa haji";
	kosan[1].kontak = 900807;
	
	kosan[2].nama_kosan ="senang";
	kosan[2].alamat = "jalan lari";
	kosan[2].fasilitas = "kasur dan lemari";
	kosan[2].harga_perbulan = 500000;
	kosan[2].harga_pertahun = 5000000;
	kosan[2].pemilik = "pa hajah";
	kosan[2].kontak = "08771818369";
	
	kosan[3].nama_kosan ="aman";
	kosan[3].alamat = "jalan lari";
	kosan[3].fasilitas = "kasur dan lemari";
	kosan[3].harga_perbulan = 500000;
	kosan[3].harga_pertahun = 5000000;
	kosan[3].pemilik = "pa hajah";
	kosan[3].kontak = "08771818369";

	kosan[4].nama_kosan ="Bu Lela";
	kosan[4].alamat = "jalan lari";
	kosan[4].fasilitas = "kasur dan lemari";
	kosan[4].harga_perbulan = 500000;
	kosan[4].harga_pertahun = 5000000;
	kosan[4].pemilik = "pa hajah";
	kosan[4].kontak = "08771818369";

	kosan[5].nama_kosan ="Pak Haji";
	kosan[5].alamat = "jalan lari";
	kosan[5].fasilitas = "kasur dan lemari";
	kosan[5].harga_perbulan = 500000;
	kosan[5].harga_pertahun = 5000000;
	kosan[5].pemilik = "pa hajah";
	kosan[5].kontak = "08771818369";

	kosan[6].nama_kosan ="Pak sapardi";
	kosan[6].alamat = "jalan lari";
	kosan[6].fasilitas = "kasur dan lemari";
	kosan[6].harga_perbulan = 500000;
	kosan[6].harga_pertahun = 5000000;
	kosan[6].pemilik = "pa hajah";
	kosan[6].kontak = "08771818369";
}

void isi_menu_kosan3(){
	
	kosan[1].nama_kosan ="A";
	kosan[1].alamat = "jalan jalan";
	kosan[1].fasilitas = "kasur dan lemari";
	kosan[1].harga_perbulan = 500000;
	kosan[1].harga_pertahun = 5000000;
	kosan[1].pemilik = "pa haji";
	kosan[1].kontak = 900807;
	
	kosan[2].nama_kosan ="B";
	kosan[2].alamat = "jalan lari";
	kosan[2].fasilitas = "kasur dan lemari";
	kosan[2].harga_perbulan = 500000;
	kosan[2].harga_pertahun = 5000000;
	kosan[2].pemilik = "pa hajah";
	kosan[2].kontak = "08771818369";
	
	kosan[3].nama_kosan ="C";
	kosan[3].alamat = "jalan lari";
	kosan[3].fasilitas = "kasur dan lemari";
	kosan[3].harga_perbulan = 500000;
	kosan[3].harga_pertahun = 5000000;
	kosan[3].pemilik = "pa hajah";
	kosan[3].kontak = "08771818369";

	kosan[4].nama_kosan ="D";
	kosan[4].alamat = "jalan lari";
	kosan[4].fasilitas = "kasur dan lemari";
	kosan[4].harga_perbulan = 500000;
	kosan[4].harga_pertahun = 5000000;
	kosan[4].pemilik = "pa hajah";
	kosan[4].kontak = "08771818369";

	kosan[5].nama_kosan ="E";
	kosan[5].alamat = "jalan lari";
	kosan[5].fasilitas = "kasur dan lemari";
	kosan[5].harga_perbulan = 500000;
	kosan[5].harga_pertahun = 5000000;
	kosan[5].pemilik = "pa hajah";
	kosan[5].kontak = "08771818369";

	kosan[6].nama_kosan ="F";
	kosan[6].alamat = "jalan lari";
	kosan[6].fasilitas = "kasur dan lemari";
	kosan[6].harga_perbulan = 500000;
	kosan[6].harga_pertahun = 5000000;
	kosan[6].pemilik = "pa hajah";
	kosan[6].kontak = "08771818369";
}

void isi_menu_kosan4(){
	
	kosan[1].nama_kosan ="1";
	kosan[1].alamat = "jalan jalan";
	kosan[1].fasilitas = "kasur dan lemari";
	kosan[1].harga_perbulan = 500000;
	kosan[1].harga_pertahun = 5000000;
	kosan[1].pemilik = "pa haji";
	kosan[1].kontak = 900807;
	
	kosan[2].nama_kosan ="2";
	kosan[2].alamat = "jalan lari";
	kosan[2].fasilitas = "kasur dan lemari";
	kosan[2].harga_perbulan = 500000;
	kosan[2].harga_pertahun = 5000000;
	kosan[2].pemilik = "pa hajah";
	kosan[2].kontak = "08771818369";
	
	kosan[3].nama_kosan ="3";
	kosan[3].alamat = "jalan lari";
	kosan[3].fasilitas = "kasur dan lemari";
	kosan[3].harga_perbulan = 500000;
	kosan[3].harga_pertahun = 5000000;
	kosan[3].pemilik = "pa hajah";
	kosan[3].kontak = "08771818369";

	kosan[4].nama_kosan ="4";
	kosan[4].alamat = "jalan lari";
	kosan[4].fasilitas = "kasur dan lemari";
	kosan[4].harga_perbulan = 500000;
	kosan[4].harga_pertahun = 5000000;
	kosan[4].pemilik = "pa hajah";
	kosan[4].kontak = "08771818369";

	kosan[5].nama_kosan ="5";
	kosan[5].alamat = "jalan lari";
	kosan[5].fasilitas = "kasur dan lemari";
	kosan[5].harga_perbulan = 500000;
	kosan[5].harga_pertahun = 5000000;
	kosan[5].pemilik = "pa hajah";
	kosan[5].kontak = "08771818369";

	kosan[6].nama_kosan ="6";
	kosan[6].alamat = "jalan lari";
	kosan[6].fasilitas = "kasur dan lemari";
	kosan[6].harga_perbulan = 500000;
	kosan[6].harga_pertahun = 5000000;
	kosan[6].pemilik = "pa hajah";
	kosan[6].kontak = "08771818369";
}

////INI TAMPILAN AKHIR ATAU UCAPAN TERIMAKASIH
//void tampilan_akhir();
//	printf("\t\t\t\t\t ____________________                                                                   \n");
//	printf("\t\t\t\t\t|                    |                                                                  \n");
//	printf("\t\t\t\t\t|_______      _______|                                                                  \n");
//	printf("\t\t\t\t\t        |    |                                                                          \n");
//	printf("\t\t\t\t\t        |    |   ______    _________    _______    ________________    _________        \n");
//	printf("\t\t\t\t\t        |    |  |  ____|  |     _   |  |_     _|  |                |  |    _    |       \n");
//	printf("\t\t\t\t\t        |    |  | |___    |    |_|  |    |   |    |                |  |   |_|   |       \n");
//	printf("\t\t\t\t\t        |    |  |  ___|   |  |______|    |   |    |    __    __    |  |   ___   |       \n");
//	printf("\t\t\t\t\t        |    |  | |____   |  |  |  |    _|   |_   |   |  |__|  |   |  |  |   |  |       \n");
//	printf("\t\t\t\t\t        |____|  |______|  |__|  |__|   |_______|  |___|        |___|  |__|   |__|       \n");
//
//
//
//
//
//	printf("\t\t\t\t\t                 ___                                                              \n");
//	printf("\t\t\t\t\t                |   |  __    _________   ________   _______    ___    ___         \n");
//	printf("\t\t\t\t\t                |   | | _|  |    _    | |  ______| |_     _|  |   |  |   |        \n");
//	printf("\t\t\t\t\t                |   |_||    |   |_|   | | |______    |   |    |   |__|   |        \n");
//	printf("\t\t\t\t\t                |    _ |    |   ___   | |_____   |   |   |    |    __    |        \n");
//	printf("\t\t\t\t\t                |   | ||_   |  |   |  |  _____|  |  _|   |_   |   |  |   |        \n");
//	printf("\t\t\t\t\t                |___| |__|  |__|   |__| |________| |_______|  |___|  |___|        \n");



