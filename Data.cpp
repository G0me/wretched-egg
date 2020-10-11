#include "Estudiante.cpp"
#include<iostream>

 using namespace std;
 class Data:Estudiante{	
	 
	public: 
		Data(string n,string a,string tel,string cla):Estudiante(n,a,cla,tel){
			
		}

	
	void setNombres(string n)   {nombre=n;}
	void setApellidos(string a) {apellido=a;}	 
	void setClave(string cla)   {clave=cla;}
	void setTelefono(string tel){telefono=tel;}
		 
	
	 	
	 	string getNombre()	{return nombre;}
	 	string getApellido(){return apellido;}
	 	string getTelefono(){return telefono;}	
	 	string getClave()	{return clave;}
	
		void mostrar(){

    cout << nombre << apellido << clave << telefono << endl;
}
};

