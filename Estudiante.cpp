#include<iostream>

 	using namespace std;
	class Estudiante{
	
	protected : string clave,telefono,nombre,apellido;
	
					
	protected :
		
		Estudiante(string n,string a,string cla,string tel){
		
		clave=cla;
		telefono=tel;	
		nombre=n;
		apellido=a;	}
		
	  void agregar();
	  void mostrar();
};



