#include<stdio.h>

void keluar ();
void hitung ();
void help ();

int main()
{
    printf ("\n\n================================SELAMAT DATANG DI PROGRAM KONVERSI SUHU========================================");
    printf ("\n========================================OLEH: GITA AYU SALSABILA=================================================");
  
     char m;
       printf ("\n\n\t\t\t\t\t\t\t###MENU UTAMA###\n");
       printf ("\n\n\n\t\t[1] KONVERSI SUHU\n\t\t[2] BANTUAN\n\t\t[3] KELUAR");
       printf ("\n\t\tPILIH NOMOR:");         //memilih menu
       scanf ("%c", &m);
      
      switch (m)
       {
       case '1':
            hitung();
       case '2':
            help();
       case '3':
            keluar();
       default:       ////pesan eror jika input yang dimasukkan tidak sesuai dengan pilihan apapun
            printf("\n\t\t\t\t\t\tMAAF, HARAP PILIH MENU BERDASARKAN ANGKA YANG TERTERA");
            sleep (100);
            main(); 
       }
}

void hitung ()
{    
    char x, y;
    float a;
    system("cls");
    printf("\n\n\n\t\t\t\t\t\tPILIH SATUAN SUHU SEBELUM DI KONVERSI= ");
    printf("\n\n\t[1] CELCIUS\n\t[2] FAHRENHEIT\n\t[3] KELVIN\n\t[4] REAMUR");
    printf("\nPILIH NOMOR= ");
    scanf ("%d", &x);
    
    printf("\n\n\n\t\t\t\t\t\tPILIH SATUAN SUHU SETELAH DI KONVERSI= ");
    printf("\n\n\t[1] CELCIUS\n\t[2] FAHRENHEIT\n\t[3] KELVIN\n\t[4] REAMUR");
    printf("\nPILIH NOMOR= ");
    scanf ("%d", &y);
    
    printf("\n\n\n\t\t\t\t\t\tMASUKKAN NILAI YANG AKAN DIKONVERSI= ");
    scanf ("%f", &a);
    
    float result;
    switch (x)
    {
           case '1':                                     //celcius
                switch (y)
                {
                       case '3':
                       result=a+273.15;
                       break;
                       case '4':
                       result=(a*21/40)+7.5;
                       break;
                       case '2':
                       result=(9/5*a)+32;
                       break;       
                }
           break;
           
           case '2':                                   //fahrenheit
                switch (y)
                {
                       case '1':
                       result=(a-32)/1.8;
                       break;
                       case '3':
                       result=(a+459.67)/1.8;
                       break;
                       case '4':
                       result=(a-32)*7/24+7.5;
                       break;
                        
                }
           break;
           
           case '3':
                switch (y)
                {
                       case '1':
                       result=a-273.15;
                       break;
                       case '4':
                       result=(a*273.15)*(21/40)+7.5;
                       break;
                       case '2':
                       result=(1.8*a)-459.67;
                       break;
                           
                }
           break;
           case '4':
                switch (y)
                {
                       case '1':
                       result=(a-7.5)*(40/21);
                       break;
                       case '3':
                       result=(a-7.5)*(40/21)+273.15;
                       break;
                       case '2':
                       result=(a-7.5)*(24/7)+32;
                       break;     
                }
           break;         
          
            default:       ////pesan eror jika input yang dimasukkan tidak sesuai dengan pilihan apapun
            printf("\n\t\t\t\t\t\tMAAF, HARAP PILIH SATUAN BERDASARKAN ANGKA YANG TERTERA");
            sleep (100);
            break; 
    }      
    system("cls");
    printf("\n\n\n\t\t\t\t\t\t NILAI SETELAH DIKONVERSI=%f\n", result);
    system("pause");         
}

void help ()
{
            system("cls");
            printf("\n\t\t\t\t\t\t[BANTUAN]\n");
			printf("\n\nPROGRAM INI DIBUAT UNTUK MEMENGKONVERSI SUHU");
			printf("\n\nCARA KERJA PROGRAM INI YAITU MEMASUKKAN SATUAN SUHU SEBELUM DAN SESUDAH DI KONVERSI");
			printf("\nUNTUK FITUR LAINNYA, MASIH DALAM PENGEMBANGAN");
			system("pause");
}

void keluar ()
{
     system ("cls");
     printf ("\n\n\t\t\t\t\t\t   PROGRAM SELESAI");
     printf ("\n\n\n\n\t\t\t\t\t TERIMAKASIH TELAH MENGGUNAKAN PROGRAM INI\n\t\t\t\t\t SARAN DAN MASUKKAN HUBUNGI GITA (115000)\n");
     system("pause");
}
