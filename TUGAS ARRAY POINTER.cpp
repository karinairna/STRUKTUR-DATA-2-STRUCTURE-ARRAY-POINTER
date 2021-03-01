//--------------------------//
//Nama  : Karina Irna Della
//Prodi : Manajemen Informatika
//Kelas : 2020B
//NIM   : 20051397030
//--------------------------//

#include<iostream>
#include<math.h>
using namespace std;

int main(){
	
	
	int a;
	cout<<"masukkan nomer soal : 1/2/3 "<<endl;
	cin>>a;
	
switch(a){
		case 1 :
		{
			char A[6]={'p','e','n','s','i','t'};
			cout<<"sebelum dibalik : ";
				for(int i=0;i<=8;i++){
					cout<<A[i];
				}
				cout<<endl;
			cout<<"setelah dibalik : ";
				for(int u=5;u>=0;u--){
					cout<<A[u];
				}
			break;
		}
	
		case 2 :
		{	
			int p1 [11]={15,0,0,1,0,5,0,8,6,0,0};
			int p2 [11]={10,0,2,2,3,0,0,4,0,3,0};
			int p3 [11]={5,0,1,0,0,0,0,0,0,0,0};
			int hasil[12]={0,0,0,0,0,0,0,0,0,0,0,0};
			
			cout<<"penambahan p1 + p2 = ";
				 for(int x=0;x<10;x++){
				 	hasil[x]+=*(p1+x)+*(p2+x);
				}
				for(int x=11;x>0;x--){
					if (hasil[x]==0){
						cout<<" ";
					}else {
						if(x>1)
						cout<<" "<<hasil[x]<<" x "<<x<<" + ";
					else if(x==1)
						cout<<" "<<hasil[x]<<" x "<<" + ";
					else if (x>=0)
					cout<<" "<<hasil[x];
					}
	
				}				 	
		break;
		}
		case 3 :{
			
			break;
		}
		default :cout<<"soal tidak ada";
		}
	}	
