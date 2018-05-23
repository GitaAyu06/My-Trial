#include<stdio.h>
#include <windows.h>


void loading();
void pembelian();
void bantuan();
void keluar();

int main ()
{
    system("color 4f");
    printf("\n\n\t-----------------------------------------------------------------------------------------------------\n");
    printf("\t\t||                                                                               ||\n");
    printf("\t\t||                   SELAMAT DATANG DI PROGRAM TOKO ALAT TULIS                   ||\n");
    printf("\t\t||                                                                               ||\n");
    printf("\n\t-----------------------------------------------------------------------------------------------------\n");
    printf("\tU U U U U U U U U U U U U U U U U U U U U U U U U U U U U U U U U U U U U U U U U U U U U U U U U U U\n");
    printf("\t|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n\n\n");            
       char m;
       printf("\n\n\t\t\t\t\t\t===MENU UTAMA===\n");
       printf("\n\n\n\t\t[1] PEMBELIAN\n\t\t[2] BANTUAN\n\t\t[3] KELUAR");
       printf("\n\t\tPILIH NOMOR:");         
       scanf ("%c", &m);
      
      switch (m)
       {
       case '1':
            loading();
            pembelian();
       case '2':
            loading();
            bantuan();
       case '3':
            loading();
            keluar();
       default:       
            system("cls");
            printf("\n\t\t\t\t\tMAAF, HARAP PILIH MENU BERDASARKAN ANGKA YANG TERTERA");
            sleep (1000);
            system("cls");
            main(); 
       }
}

void loading()             
	{
		int i;
		printf("\nLOADING ");
         for (i=1;i<6;i++)  
		  {
			printf(". ");
			sleep(200);
		  }
		system("cls");    
	}
	
void pembelian()
{
     system("cls");
     int no_barang, jumlah, harga, total, a;
     printf("\n\n\t\t\t\t\t===KATALOG===\n");
     printf("\n\n\n\t\t  NOMOR BARANG  NAMA BARANG  HARGA BARANG     KETERANGAN");
     printf("\n\n\n\t\t       [1]      BUKU TULIS   RP5.000/1PCS     TERSEDIA");
     printf("\n\t\t       [2]      PENA         RP2.500/1PCS     TERSEDIA");
     printf("\n\t\t       [3]      PENGGARIS    RP1.000/1PCS     TERSEDIA");
     printf("\n\t\t       [4]      PENSIL       RP1.500/1PCS     TERSEDIA");
     printf("\n\t\t       [5]      KERTAS HVS   RP500/1PCS       TERSEDIA\n");
     printf("\n\t\tPILIH NOMOR BARANG                  : ");
     scanf ("%d", &no_barang);
     printf("\n\t\tMASUKKAN JUMLAH BARANG YANG DIPESAN : ");
     scanf ("%d", &jumlah);  
       if (no_barang==1)
       {
          harga=5000;
       }
       else if (no_barang==2)
       {
          harga=2500;
       }
       else if (no_barang==3)
       {
          harga=1000;
       }
       else if (no_barang==4)
       {
          harga=1500;
       }
       else if (no_barang==5)
       {
          harga=500;
       }
       else
       {
           printf("\n\t\tNOMOR BARANG YANG ANDA MASUKKAN TIDAK TERDAFTAR, HARAP COBA LAGI");
           printf("\n\t\tMASUKKAN JUMLAH BARANG YANG DIPESAN : ");
           scanf ("%d", &jumlah);
       }
     system("cls");
     total=harga*jumlah;
     printf("\n\n\n\t\t\t\t\t\tTOTAL PEMBAYARAN= RP %d", total);
     printf("\n\t\t\t\t\t INGIN MELAKUKAN PEMBELIAN LAINNYA?\n\n\t\t\t\t\t\t [1]YA\t[2]TIDAK\n");
     printf("\t\t\t\t\tPILIH NOMOR: ");
     scanf ("%d", &a);
        if (a==1)     
          {  
            main();        //kembali ke menu   
          }
        else if (a==2)
          {  
            keluar();     //membatalkan transaksi
          }
        else
          {
             system("cls");
             printf("\n\t\t\t\t\t\tMAAF INPUT YANG ANDA MASUKKAN SALAH\n\t\t\t\t\t     HARAP PILIH BERDASARKAN ANGKA YANG TERTERA\n");
             printf("\n\t\t\t\t\t INGIN MELAKUKAN PEMBELIAN LAINNYA?\n\n\t\t\t\t\t\t [1]YA\t[2]TIDAK\n");
             printf("\t\t\t\t\t\t PILIH NOMOR: ");
             scanf ("%d", &a);
          }               
     system ("pause");   
}  

void bantuan()
{
	system("cls");
    int a, x;
	printf ("\n\n\t\t\t\t\t\t\t===MENU BANTUAN===\n");
	printf ("\n\n\n\t\t[1] BANTUAN DAN INFORMASI PROGRAM\n\t\t[2] CARA KERJA PROGRAM\n\t\t[3] KEMBALI KE MENU\n\t\t[4] KELUAR\n");
    printf ("PILIH NOMOR= ");
    scanf ("%d",&x); 
      
	switch (x)
    {
       	case 1:
       	    loading();
       	    printf("\n\t\t\t\t\t\t===BANTUAN===\n");
			printf("\n\nPROGRAM INI DIBUAT UNTUK MEMUDAHKAN PEMBELIAN ALAT-ALAT TULIS");
			printf("\nFITUR DAN LAYANAN TAMBAHAN DALAM PROGRAM INI MASIH DALAM PENGEMBANGAN");
			printf("\nJIKA TERDAPAT KERUSAKAN/EROR, SILAHKAN HUBUNGI CALL CENTER (115000)");
			printf("\n\n\n\t\t\t\t\t\tKEMBALI KE MENU?\n\n\t\t\t\t\t\t [1]YA\t[2]TIDAK\n");
  			printf("\t\t\t\t\t\t PILIH NOMOR= ");
    		scanf("%d", &a);
    		printf("%d", a);
    		if (a==1)
    		{
    		main();
     		}
     		else if (a==2)
     		{
     		keluar();
     		}
     		else
     		{
     		printf("\n\t\t\t\t\t\tMAAF INPUT YANG ANDA MASUKKAN SALAH\n\t\t\t\t\t\tHARAP PILIH BERDASARKAN ANGKA YANG TERTERA\n");
			}
	    case 2:
             loading();
             printf("\n\t\t\t\t\t\t===CARA KERJA PROGRAM===\n\n");
			 printf("\n[1] PILIH MENU PEMBELIAN");
			 printf("\n[2] PILIH BARANG YANG AKAN DIBELI DENGAN MEMASUKKAN NOMOR BARANG DAN JUMLAH BARANG");
			 printf("\n[3] JUMLAH TAGIHAN ANDA AKAN DITAMPILKAN PADA LAYAR"); 
             printf("\n[4] PILIH 'YA' UNTUK MELANJUTKAN TRANSAKSI");
			 printf("\n[5] RINCIAN BELANJA ANDA AKAN DITAMPILKAN ");
			 printf("\n[6] PROSES PEMBELIAN SELESAI, ANDA DAPAT KELUAR DARI PROGRAM ATAU MELAKUKAN PEMBELIAN LAIN");
       	     printf("\n\n\n\t\t\t\t\t\tKEMBALI KE MENU?\n\n\t\t\t\t\t\t [1]YA\t[2]TIDAK\n");
	         printf("\t\t\t\t\t\t PILIH NOMOR= ");
  		     scanf("%d", &a);
    	     printf("%d", a);
    	   if (a==1)
    		{
    	    	main();
     		}
           else if (a==2)
     		{
     	 	    keluar();
     		}
  		   else
     		{
     		    printf("\n\t\t\t\t\t\tMAAF INPUT YANG ANDA MASUKKAN SALAH\n\t\t\t\t\t\tHARAP PILIH BERDASARKAN ANGKA YANG TERTERA\n");
			}
        case 3:
       	    loading();
       	    main();
       	case 4:
       		loading();
       		keluar();
       	default:      
       	    printf("\n\t\t\t\t\t\tMAAF, HARAP PILIH MENU BERDASARKAN ANGKA YANG TERTERA");
       	    sleep (5);
       	    system ("cls");
    		return bantuan();
   	}
}
void keluar ()
{
     system("cls");
     printf("\n\n\t\t\t\t\t\t\tTRANSAKSI SELESAI");
     printf("\n\n\n\n\t\t\t\t\t   TERIMAKASIH TELAH MENGGUNAKAN LAYANAN KAMI\n\t\t\t\t\t SARAN DAN MASUKKAN HUBUNGI CALL CENTER (115000)\n");
     system("pause");
}
