#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <malloc.h>
#define True 1
#define False 0
using namespace std;
typedef struct typestack *typeptr;
struct data{
	string nama,penyakit;
	int umur;
};
struct typestack{
	data info;
	typeptr next;
};
typeptr awalstack, akhirstack;
void buat_stack();
int stack_kosong();
void push(data IB);
void pop();
void cetak_stack();
void menu();
int main(){
	int i=0, t=0, n=1, x;
	data dta[150];
	buat_stack();
	do{
        system("cls");
        menu();
        cout<<"Pilih : ";cin>>x; cin.ignore();
        if(x==1){
			for(i=t; i<n; i++){
				cout<<"Nama	: ";getline(cin, dta[i].nama);
				cout<<"Penyakit : ";getline(cin, dta[i].penyakit);
				cout<<"Umur	: ";cin>>dta[i].umur;
			}
            cout<<"Press any key to continue . . .";
            getch();
        }
        if(x==2){
            cout<<"Press any key to continue . . .";
            getch();
        }
        if(x==3){
            cout<<"Press any key to continue . . .";
            getch();
        }
        if(x==4){
            break;
        }
    }while(x!=4);
}

void menu(){
    cout<<"		RS Nakula\n";
    cout<<"=================================\n";
    cout<<"\t 1. Daftar\n";
    cout<<"\t 2. Cetak\n";
    cout<<"\t 3. Pop\n";
    cout<<"\t 4. Keluar\n";
}

void buat_stack(){
  typeptr NS;
  NS=NULL;
  awalstack=NS;
  akhirstack=NS; 
}

int stack_kosong(){ 
  if(awalstack==NULL)
	 return(True);
  else
	 return(False); 
}
void push(data IB){
  typeptr NS;
  NS=(typestack *) malloc(sizeof(typestack));
  NS->info=IB;
  if (stackawal==NULL)
	  stackawal=NS;
  else
	  stack->next=NS;
  stack=NS;
  stack->next=NULL;

}
void pop(){}
void cetak_stack(){}
