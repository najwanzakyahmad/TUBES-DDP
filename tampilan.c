#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "tampilan.h"
//
//
//
//	
//	
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
	printf("\n");
	printf("\t\t\t\t\t                                      ------------                                        \n");
	printf("\t\t\t\t\t                                       LOGIN *(1)                                         \n");
	printf("\t\t\t\t\t                                      ------------                                    \n\n\n");
	printf("\t\t\t\t\t                                    ----------------                                      \n");
	printf("\t\t\t\t\t                                      REGISTER *(2)                                       \n");
	printf("\t\t\t\t\t                                    ----------------                                      \n");
	printf("\t\t\t\t\t ==================================================================================       \n");
	printf("\t\t\t\t\t                                       PILIHAN : ");
	scanf("%d ", &pilihan_awal);
	printf("\t\t\t\t\t ==================================================================================       \n");
	
	
}
//	
////INI UNTUK MENU AWAL
void menu_awal(){
	system("cls");
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
	printf("\t\t\t\t\t                                      PILIHAN :                                           \n\n");
	printf("\t\t\t\t\t ==================================================================================       \n");

}	
	


	
////INI UNTUK MENU PILIHAN YANG ADA DI CIWARUGA
//void kosan_ciwaruga();	
//	printf("\t\t\t\t\t ==================================================================================       \n");
//	printf("\t\t\t\t\t                          DAFTAR KOSAN YANG ADA DI CIWARUGA                               \n");
//	printf("\t\t\t\t\t ==================================================================================       \n");	
//	printf("\t\t\t\t\t                                   1. KOSAN BAHAGIA                                       \n");
//	printf("\t\t\t\t\t                                   1. KOSAN BAHAGIA                                       \n");
//	printf("\t\t\t\t\t                                   1. KOSAN BAHAGIA                                       \n");
//	printf("\t\t\t\t\t                                   1. KOSAN BAHAGIA                                       \n");
//	printf("\t\t\t\t\t                                   1. KOSAN BAHAGIA                                       \n");
//	printf("\t\t\t\t\t                                   1. KOSAN BAHAGIA                                       \n");
//	printf("\t\t\t\t\t ==================================================================================       \n");
//	printf("\t\t\t\t\t                                    PILIHAN :                                             \n");
//	printf("\t\t\t\t\t ==================================================================================       \n");
//
//
//	
////INI UNTUK MENU PILIHAN YANG ADA DI GEGERKALONG\\	
//void kosan_gegerkalong();	
//	printf("\t\t\t\t\t ==================================================================================       \n");
//	printf("\t\t\t\t\t                          DAFTAR KOSAN YANG ADA DI GEGERKALONG                               \n");
//	printf("\t\t\t\t\t ==================================================================================       \n");	
//	printf("\t\t\t\t\t                                   1. KOSAN BAHAGIA                                       \n");
//	printf("\t\t\t\t\t                                   1. KOSAN BAHAGIA                                       \n");
//	printf("\t\t\t\t\t                                   1. KOSAN BAHAGIA                                       \n");
//	printf("\t\t\t\t\t                                   1. KOSAN BAHAGIA                                       \n");
//	printf("\t\t\t\t\t                                   1. KOSAN BAHAGIA                                       \n");
//	printf("\t\t\t\t\t                                   1. KOSAN BAHAGIA                                       \n");
//	printf("\t\t\t\t\t ==================================================================================       \n");
//	printf("\t\t\t\t\t                                    PILIHAN :                                             \n");
//	printf("\t\t\t\t\t ==================================================================================       \n");
//	
//	
//	
////INI UNTUK MENU PILIHAN YANG ADA DI SARIJADI		
//void kosan_sarijadi();
//	printf("\t\t\t\t\t ==================================================================================       \n");
//	printf("\t\t\t\t\t                          DAFTAR KOSAN YANG ADA DI SARIJADI                               \n");
//	printf("\t\t\t\t\t ==================================================================================       \n");	
//	printf("\t\t\t\t\t                                   1. KOSAN BAHAGIA                                       \n");
//	printf("\t\t\t\t\t                                   1. KOSAN BAHAGIA                                       \n");
//	printf("\t\t\t\t\t                                   1. KOSAN BAHAGIA                                       \n");
//	printf("\t\t\t\t\t                                   1. KOSAN BAHAGIA                                       \n");
//	printf("\t\t\t\t\t                                   1. KOSAN BAHAGIA                                       \n");
//	printf("\t\t\t\t\t                                   1. KOSAN BAHAGIA                                       \n");
//	printf("\t\t\t\t\t ==================================================================================       \n");
//	printf("\t\t\t\t\t                                    PILIHAN :                                             \n");
//	printf("\t\t\t\t\t ==================================================================================       \n");
//
//
//	
////INI UNTUK MENU PILIHAN YANG ADA DI CIBOGO
//void kosan_cibogo();	
//	printf("\t\t\t\t\t ==================================================================================       \n");
//	printf("\t\t\t\t\t                          DAFTAR KOSAN YANG ADA DI CIBOGO                               \n");
//	printf("\t\t\t\t\t ==================================================================================       \n");	
//	printf("\t\t\t\t\t                                   1. KOSAN BAHAGIA                                       \n");
//	printf("\t\t\t\t\t                                   1. KOSAN BAHAGIA                                       \n");
//	printf("\t\t\t\t\t                                   1. KOSAN BAHAGIA                                       \n");
//	printf("\t\t\t\t\t                                   1. KOSAN BAHAGIA                                       \n");
//	printf("\t\t\t\t\t                                   1. KOSAN BAHAGIA                                       \n");
//	printf("\t\t\t\t\t                                   1. KOSAN BAHAGIA                                       \n");
//	printf("\t\t\t\t\t ==================================================================================       \n");
//	printf("\t\t\t\t\t                                    PILIHAN :                                             \n");
//	printf("\t\t\t\t\t ==================================================================================       \n");
//	
//	
//	
////INI UNTUK TAMPILAN MENU DARI HELP
//void menu_help();
//	printf("\t\t\t\t\t ==================================================================================       \n");
//	printf("\t\t\t\t\t                                TUTOR MAKE NI APLIKASI                                    \n");
//	printf("\t\t\t\t\t ==================================================================================       \n");	
//	printf("\t\t\t\t\t                     1. LOGIN JIKA SUDAH PUNYA AKUN                         \n");
//	printf("\t\t\t\t\t                     2. REGISTER JIKA BELUM PUNYA AKUN                      \n");
//	printf("\t\t\t\t\t                     3. PILIH DAERAH YANG ANDA INGINKAN                     \n");
//	printf("\t\t\t\t\t                     4. PILIH KOSAN YANG ANDA INGIN CARI TAU                \n");
//	printf("\t\t\t\t\t                     5. PILIH BUAT PESANAN, JIKA INGIN MEMESAN KOSAN        \n");
//	printf("\t\t\t\t\t                     6. PILIH KEMBALI UNTUK KEMBALI KE HALAMAN MENU         \n");
//	printf("\t\t\t\t\t                     7. PILIH LOGOUT JIKA INGIN KELUAR DARI AKUN            \n");
//	printf("\t\t\t\t\t ==================================================================================       \n");
//	printf("\t\t\t\t\t                                    KEMBALI (Y) :                                             \n");
//	printf("\t\t\t\t\t ==================================================================================       \n");
//	
//	
//	
////INI UNTUK TAMPILAN UNTUK DARI TIAP KOSAN
//void menu_kosan();	
//	printf("\t\t\t\t\t ==================================================================================       \n");	
//	printf("\t\t\t\t\t NAMA KOSAN : \n");
//	printf("\t\t\t\t\t NAMA PEMILK KOSAN : \n");
//	printf("\t\t\t\t\t ==================================================================================       \n");
//	printf("\t\t\t\t\t ALAMAT : \n");
//	printf("\t\t\t\t\t FASILITAS : \n");
//	printf("\t\t\t\t\t KONTAK PEMILIK KOSAN : \n");	
//	printf("\t\t\t\t\t ==================================================================================       \n");
//	printf("\t\t\t\t\t HARGA PERBULAN : \n");
//	printf("\t\t\t\t\t HARGA PERTHAUN : \n");
//	printf("\t\t\t\t\t\                                                         1. BOOKING    2. KEMBALI\n");
//	printf("\t\t\t\t\t ==================================================================================       \n");
//	printf("\t\t\t\t\t                                    PILIHAN(1 atau 2) :                                             \n");
//	printf("\t\t\t\t\t ==================================================================================       \n");
//	
//	
//	
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

