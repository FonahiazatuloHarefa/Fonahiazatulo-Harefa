#include<stdio.h>
#include"conio.h"
#include"iostream.h"
#include"iomanip.h"
main()
{
int a,n;
char nama[5][20],nim[5][8];
char kelas[5][6],grade[5],ket[5][6];
int uts[5],uas[5],rata[5];
clrscr();
cout<<"Jumlah Data ? ";cin>>n;
for(a=1;a<=n;a++)
{
clrscr();
cout<<"Data Ke: "<<a<<endl;
cout<<"Nama: ";gets(nama[a]);
cout<<"Kelas: ";cin>>kelas[a];
cout<<"Nim: ";cin>>nim[a];
cout<<"Nilai UTS: ";cin>>uts[a];
cout<<"Nilai UAS: ";cin>>uas[a];
rata[a]=(uts[a]+uas[a])/2;
if(rata[a]>=80)
{
grade[a]='A';
strcpy(ket[a],"LULUS");
}
else if(rata[a]>=70)
{
grade[a]='B';
strcpy(ket[a],"LULUS");
}
else if(rata[a]>=60)
{
grade[a]='C';
strcpy(ket[a],"LULUS");
}
else if(rata[a]>=50)
{
grade[a]='D';
strcpy(ket[a],"GAGAL");
}
else
{
grade[a]='E';
strcpy(ket[a],"GAGAL");
}
cout<<endl;
}
clrscr();
cout<<"Daftar Nilai Mahasiswa"<<endl;
cout<<"----------------------------------------------------------------------"<<endl;
cout<<"No Nama      Nim          Kelas      Nilai Nilai Rata Grade Keterangan"<<endl;
cout<<"                                     UTS   UAS   Rata"<<endl;
cout<<"----------------------------------------------------------------------"<<endl;
for(a=1;a<=n;a++)
{
cout<<setiosflags(ios::left)<<setw(3)<<a;
cout<<setiosflags(ios::left)<<setw(10)<<nama[a];
cout<<setiosflags(ios::left)<<setw(13)<<nim[a];
cout<<setiosflags(ios::left)<<setw(11)<<kelas[a];
cout<<setiosflags(ios::left)<<setw(6)<<uts[a];
cout<<setiosflags(ios::left)<<setw(6)<<uas[a];
cout<<setiosflags(ios::left)<<setw(5)<<rata[a];
cout<<setiosflags(ios::left)<<setw(6)<<grade[a];
cout<<setiosflags(ios::left)<<setw(10)<<ket[a]<<endl;
}
cout<<"----------------------------------------------------------------------"<<endl;
getch();
}