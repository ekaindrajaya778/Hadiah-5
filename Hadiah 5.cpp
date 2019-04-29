#include <iostream.h>
#include <conio.h>
void main()
{
char Nama[25];
int Pendapatan ,Komisi,Total,Jasa;
clrscr();
cout<<"Hadiah Praktikum 5\n";
cout<<"APLIKASI INPUT KOMISI KEPADA SALESMEN\n";
cout<<"------------------------------------------------"<<endl;
cout<<"Masukkan Nama Salesman :"; cin>>Nama;
cout<<"Penjualan Salesmen : ";cin>>Pendapatan;
cout<<"================================================"<<endl;
if (Pendapatan>=0&&Pendapatan<=2000000)
{
  Jasa = 500000;
  Komisi = (0.1*Pendapatan);
  Total = Komisi+Jasa;
  }
 else if (Pendapatan<=2000000){
  Jasa = 500000;
  Komisi = (0.15*Pendapatan);
  Total = Komisi+Jasa;
  }
 else if (Pendapatan<=5000000){
 Jasa = 1000000;
 Komisi = (0.2*Pendapatan);
 Total = Komisi + Jasa;
 }
 else {
cout<<"Tidak Ada Kode Yang Sesuai";  }
cout<<"Uang Jasa Salesman : "<<Jasa<<endl;
cout<<"Komisi Salesman : "<<Komisi<<endl;
cout<<"Total Salesman : "<<Total<<endl;
getch();
}



