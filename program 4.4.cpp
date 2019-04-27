#include <iostream.h>
#include <conio.h>

main(){
int bil;

cout<<"Masukkan bilangan yang akan dicek = ";
cin>>bil;

if (bil>0)
	cout<<bil<<" adalah bilangan Positif";
else if (bil<0)
	cout<<bil<<" adalah bilangan Negatif";
else
	cout<<"Anda menginputkan bilangan Nol (0)";
getch();}