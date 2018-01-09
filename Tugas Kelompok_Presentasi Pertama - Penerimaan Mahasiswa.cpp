#include <conio.h>
#include <stdio.h>
#include <iostream.h>
main()
{
char nama[20],jrs[7],waktu[5],awal,wkt,kd;
float biaya,tambahan,total;
clrscr();
     awal:
	cout<<"\t\tPENDAFTARAN AMIK BSI \n";
	cout<<"\t--------------------------------------\n";
	cout<<"INPUT NAMA :";gets(nama);
	 jurusan:
   cout<<"PILIHAN JURUSAN: \n";
	cout<<"1.KA \n2.MI \n3.TI";
	cout<<"\nINPUT KODE JURUSAN [1/2/3] :";cin>>kd;
	 sesi:
	cout<<"\nWAKTU KULIAH: \n";
	cout<<"A= PAGI \n";
	cout<<"B= MALAM \n";
	cout<<"PILIH KODE WAKTU [A/B] :";cin>>wkt;

//membuat pernyataan dan deklarasinya
 if (kd=='1')
 {
 strcpy(jrs,"KA");
 biaya=900000;
 }
  else if(kd=='2')
 {
 strcpy(jrs,"MI");
 biaya=950000;
 }
  else if(kd=='3')
 {
 strcpy(jrs,"TI");
 biaya=1000000;
 }
  else
 {
 cout<<"\n\tKODE JURUSAN SALAH !";
 cout<<"\n____________________\n";
  goto jurusan;
 }
 if(wkt=='A'||wkt=='a')
 {
 strcpy(waktu,"PAGI");
 tambahan=0;
 }
  else
 if(wkt=='b'||wkt=='B')
 {
 strcpy(waktu,"MALAM");
 tambahan=350000;
 }
  else
 {
 cout<<"\n\tKODE WAKTU SALAH !";
 cout<<"\n_________________\n";
  goto sesi;
 }
clrscr();

cout<<"\t\tPENDAFTARAN AMIK BSI \n";
cout<<"\t-------------------------------\n";
cout<<"NAMA : "<<nama<<endl;
cout<<"JURUSAN : "<<jrs<<endl;
printf("BIAYA PERSEMESTER : Rp. %8.2f",biaya);
cout<<"\nWAKTU KULIAH : "<<waktu<<endl;
printf("BIAYA TAMBAHAN : Rp. %8.2f",tambahan);
cout<<"\n======================================\n";
total=(biaya+tambahan);
printf("TOTAL BIAYA :Rp. %8.2f\n",total);

 cout<<"\nINPUT BARU ? [Y|T]\n";cin>>awal;
 if(awal=='Y'||awal=='y')
 goto awal;
  else
 clrscr();
 cout<<"\t==== TERIMA KASIH ====\t\n";


getch();
}