#include<stdio.h> 
#include<conio.h> 
#include<iostream.h> 
main( ) 
{ 
char kode,ukuran,merk[15]; 
long harga=0; 
clrscr( ); 
cout<<"Kode Baju : ";cin>>kode; 
cout<<"Ukuran : ";cin>>ukuran; 
if (kode=='1')

strcpy(merk,"H & R");
if (ukuran=='S' || ukuran =='s') 
harga=45000; 
else 
harga=60000; 
}
