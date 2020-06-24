#include<iostream>
#include "LinkedList.h"

using namespace std;

int main(){
	//nodos
	float n1,n2,n3;
	cin>>n1;cin>>n2;cin>>n3;
	Node <float> node1(n1);
	Node <float> node2(n2);   
	Node <float> node3(n3);
	system("cls");
//MENU DE OPCIONES

	cout<<"\n\nMENU\n\n";
    LinkedList <float>list;
	int option=0;
	
	cout<<"1) Insertar"<<endl;
	cout<<"2) Mostrar"<<endl;
	cout<<"3) Eliminar"<<endl;
	cout<<"4) Exit"<<endl;
	cout<<"option\n"; 
	cin>>option;
	system("cls");
	while(option != 4){
		
		if(option == 1){
			
			float number;
			cout<<"Ingrese un elemento\n"; cin>>number;
			list.insert(number);
			cout<<"\nInsercion correcta\n";
		}
		else if(option == 2){	
			cout<<"\nTu actual lista es \n\n";
			list.print();
		}
		else if(option == 3){	
			float number;
			cout<<"Ingrese un elemento\n"; cin>>number;
			list.remove(number);	
		}
		else{	
			cout<<"\nOpcion imvalida\n"; cin>>option;	
		}
		cout<<"1) Insertar"<<endl;
		cout<<"2) Mostrar"<<endl;
		cout<<"3) Eliminar"<<endl;
		cout<<"4) Exit"<<endl;
		cout<<"option\n"; 
		cin>>option;
		system("cls");
	}
	
//CONSTRUCTOR COPIA
	LinkedList <float>list1(list);
	cout <<"\n\nITERADOR\n\n";

	for (LinkedList<float>::Iterator iter = list1.begin(); iter != list1.end(); ++iter){
		cout << *iter << "  ";
	}
	cout<<"\n";
	return 0;
}
