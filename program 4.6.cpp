#include <iostream.h>
#include <conio.h>

void main()
{
	int usia;
   clrscr();
   cout<<"Berapa usia Anda : ";
   cin>>usia;
   if (usia<17)
   	cout<<"Anda tidak boleh menonton bioskop";
   else cout<<"Anda boleh menonton bioskop";
}