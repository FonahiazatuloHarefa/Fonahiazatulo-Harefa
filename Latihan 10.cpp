#include <stdio.h>
#include <conio.h>
#include <iostream.h>
main( )
{
char kode, nama[10];
long harga=0,bayar,kembali;
clrscr( );
cout<<endl<<" Daftar Barang"<<endl
<<" = = = = = = = = = = = = = = = ="<<endl;
cout<<" Masukan Kode Input [1/2/3]: ";
cin>>kode;

// proses seleksi kondisi
if(kode=='1')
{ strcpy(nama,"Buku");
harga=1000;
}
else if(kode=='2')
{ strcpy(nama,"pensil");
harga=2000;
}
else if(kode=='3')
{ strcpy(nama,"tipe x");
harga=3000;
}
else
{cout<<" salah kode " <<endl;
strcpy(nama,"eror");
harga=0;
}
// output datanya
cout<<" kode barang = "<<kode<<endl;
cout<<" nama barang = "<<nama<<endl;
cout<<" harga barang = "<<harga<<endl;

cout<<" Uang Bayar =";
cin>>bayar;
kembali=bayar-harga;
cout<<" Uang Kembali ="<<kembali<<endl;

getch();
}
