//--------------------------//
//Nama  : Karina Irna Della
//Prodi : Manajemen Informatika
//Kelas : 2020B
//NIM   : 20051397030
//--------------------------//

#include<iostream>
#include<string.h>
using namespace std;
int main(){
 char kalimat[100];
 cout<<"Masukan Kalimat :"; cin.getline (kalimat , sizeof (kalimat) );
 int x = strlen(kalimat);
 for(int i=x-1;i>=0;i--){
  cout<<kalimat[i];
 }
}

