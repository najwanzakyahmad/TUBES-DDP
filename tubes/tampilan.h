#ifndef tampilah_H
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>





typedef struct {
		char *nama_kosan;
		char *alamat;
		char *fasilitas;
		int harga_perbulan;
		int harga_pertahun;
		char *pemilik;
		char *kontak;
		
	}kos;
	
	kos kosan[25];

int pilihan_awal, 
	pilihan_menu,
	pilihan_kosan,
	pilihan_final,
	pilihan_kosan,
	pilihan_akhir,
	i,
	pilihan_akhir,
	pilihan_booking;
	
//struct kos
//{
//	char *nama;
//	char *alamat;
//	char *fasilitas;
//	int harga_perbulan;
//	int harga_pertahun;
//	char *pemilik;
//	int kontak;
//}


void loading();
void tampilan_awal();		
void kosan_ciwaruga();	
void kosan_gegerkalong();
void kosan_sarijadi();
void kosan_cibogo();
void menu_awal();
void menu_login();
void menu_help();
void menu_kosan();	
void booking();
//void tukar();

//void tampilan_akhir();
char nama[30];
char kontak[30];
char rekening[30];


#endif 
