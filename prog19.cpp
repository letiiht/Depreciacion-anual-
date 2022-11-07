#include<iostream>
#include "coordenadas.h"
using namespace std;
void metodDobInc(double valor,int anos);			
void metodLinea(double valor,int anos);
void metodSumaDig(double valor, int anos);
void imprimir(double valor,int anos);
void anosvar(int op,int anos);
main(){
	double valor;
	int anos,op;
	char r;
	do{
	system("cls");
	cout<<"Valor del objeto: ";
	cin>>valor;
	cout<<"Anos de depreciacion: ";
	cin>>anos;
	
	cout<<"1.Metodo de la linea recta"<<endl;
	cout<<"2.Metodo del balance de doble inclinacion"<<endl;
	cout<<"3.Metodo de la suma de los digitos de los anos"<<endl;
	cout<<"Opcion: ";
	cin>>op;
	switch(op){
		case 1:
			metodLinea(valor,anos);
			break;
		
		case 2:
			metodDobInc(valor,anos);
			break;
			
		case 3:
			metodSumaDig(valor,anos);
			break;
			
		default: 
			cout<<"No existe en menu"<<endl;
	}
	imprimir(valor,anos);
	anosvar(op,anos);
	gotoxy(20,20);
	cout<<"¿Desea realizar otro metodo?";
	cin>>r;
}while(r == 's');
}
	void anosvar(int op,int anos){
		int x,y;
			y=1;
			if(op==1||op==2){
			for(x=1;x<=anos;x++){
				gotoxy(57,9+x);
				cout<<x<<endl;	
				y++;}
		}
		
		if(op==3){
			x=anos;
			while(x>=1){
				gotoxy(57,9+y);
				cout<<x<<endl;
				x--;
				y++;
			}
		}
			}
		
	void metodLinea(double valor,int anos){
		double factor,deprec;
		int x;
		x=1;
		factor = 0;
		gotoxy(36,10);
		cout<<factor;
		deprec = valor / anos;
		while(x <= anos){
			valor = valor - deprec;
			gotoxy(65,9+x);
			cout<<deprec<<endl;
			gotoxy(85,9+x);
			cout<<valor<<endl;
			x++;
		}
	}
	
	void metodDobInc(double valor,int anos){
			double factor,deprec;
			int x;
			x = 1;
			while(x <= anos){
				factor=(2*1.0)/anos;
				deprec = valor * factor;
				valor = valor - deprec;
				gotoxy(65,9+x);
				cout<<deprec<<endl;
				gotoxy(85,9+x);
				cout<<valor<<endl;
				x++;
		}
		gotoxy(36,10);
		cout<<factor<<endl;
	}

	
	void metodSumaDig(double valor, int anos){
		int factor,x,y,z;
		double deprec;
			
		factor=0;
		for(x=1;x<=anos;x++){
			factor = factor +x;
		}
		
		gotoxy(36,10);
		cout<<factor;		
			
		y=anos;
		z=valor;
		x=1;
		while(x<=y){
			deprec = ((anos*1.00)/factor)*z;
			gotoxy(65,9+x);
			cout<<deprec<<endl;
			
			valor = valor - deprec;
			gotoxy(85,9+x);
			cout<<valor<<endl;
			anos--;
			x++;
		}
	}
	
	
	
		void imprimir(double valor,int anos){
			gotoxy(3,8);
			cout<<"Valor del objeto";
			gotoxy(8,10);
			cout<<valor;
			gotoxy(23,8);
			cout<<"anos";
			gotoxy(24,10);
			cout<<anos;
			gotoxy(32,8);
			cout<<"Factor de depreciacion";
			gotoxy(57,8);
			cout<<"Ano";
			gotoxy(65,8);
			cout<<"Depreciacion";
			gotoxy(82,8);
			cout<<"Valor actual";
}

