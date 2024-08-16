#include <iostream>
using namespace std;

  	int ID[5000], genero[5000], programa[5000], anio[5000], periodo[5000], semestre[5000], c=0, codigo, prog, se, gen;
	float valor[5000];
	
	void Agregar()
	{
		
    	cout<<"Por favor ingrese el ID del estudiante" <<endl;
        cin>> ID[c];
    	cout<<"Por favor ingrese el genero del estudiante "<<" teniendo en cuenta que 1 es hombre y 2 es mujer"<<endl;
        cin>> genero[c];
        cout<<"Por favor ingrese el programa en el que esta el estudiante,"<<" teniendo en cuenta que 1. Bacteriologia, 2. Derecho, 3. Administracion, 4. Ingenieria Multimedia, 5. Arquitectura"<<endl;
    	cin>> programa[c];
        cout<<"Por favor ingrese el anio en el que ingresa el estudiante"<<endl;
        cin>> anio[c];
        cout<<"Por favor ingrese el periodo de ingreso del estudiante"<<endl;
        cin>> periodo[c];
        semestre[c]= 1;
        c = c+1;
        
        cout<<"El estudiante fue agregado con exito" <<endl;
        
		system("Pause");
		system("cls");
    }
//------------------------------------------------------------------------------------------------------------------------------	
		int buscar()
	{
		int i, pos = -1;
		for (i=0; i<c; i++)
		{
			if (codigo == ID[i])
			{
				pos=i;
				break;
			}
		}
		return pos;
	}
//------------------------------------------------------------------------------------------------------------------------------	
		int buscar2()
	{
		int i, pos = -1;
		for (i=0; i<c; i++)
		{
			if (prog == programa[i])
			{
				pos=i;
				break;
			}
		}
		return pos;
	}
	
//------------------------------------------------------------------------------------------------------------------------------	
	int buscar3()
	{
		int i, pos = -1;
		for (i=0; i<c; i++)
		{
			if (se == semestre[i])
			{
				pos=i;
				break;
			}
		}
		return pos;
	}
//------------------------------------------------------------------------------------------------------------------------------
	int buscar4()
	{
		int i, pos = -1;
		for (i=0; i<c; i++)
		{
			if (semestre[i] == 0)
			{
				pos=i;
				break;
			}
		}
		return pos;
	}
//------------------------------------------------------------------------------------------------------------------------------
	int buscar5()
	{
		int i, pos = -1;
		for (i=0; i<c; i++)
		{
			if (gen == genero[i])
			{
				pos=i;
				break;
			}
		}
		return pos;
	}
//------------------------------------------------------------------------------------------------------------------------------

	void Mostrar()
	{
		int i;
		cout<<"Por favor digite el ID del estudiante del cual usted desea saber su informacion...";
		cin>> codigo;
		
		i = buscar();
		
		if(i==-1) cout<<"El estudiante no se encuentra en el sistema"<<endl; 
		
		else
		{
			cout<< "El genero del estudiante con codigo " << codigo <<" teniendo en cuenta que 1 es hombre y 2 es mujer es: " << genero[i] <<endl;
			cout<< "El programa del estudiante con codigo " << codigo <<" teniendo en cuenta que 1. Bacteriologia, 2. Derecho, 3. Administracion, 4. Ingenieria Multimedia, 5. Arquitectura es: " << programa[i] <<endl;
			cout<< "El anio de ingreso del estudiante con codigo " << codigo <<" es: " << anio[i] <<endl;
			cout<< "El periodo de ingreso del estudiante con codigo " << codigo <<" es: " << periodo[i] <<endl;
			cout<< "El semestre en el que esta el estudiante con codigo " << codigo <<" es: " << semestre[i] <<endl;
		}
		
		system("Pause");
		system("cls");
	}
//------------------------------------------------------------------------------------------------------------------------------	
	void MostrarProg()
	{
		int i;
		cout<<"Por favor digite el numero de programa del cual usted desea saber los estudiantes matriculados. Teniendo en cuenta que 1. Bacteriologia, 2. Derecho, 3. Administracion, 4. Ingenieria Multimedia, 5. Arquitectura...";
		cin>> prog;
		
		i = buscar2();
		
		if(i==-1) cout<<"No hay estudiantes en el programa ingresado"<<endl; 
		
		else
		{
			cout<<"Los estudiantes matriculados en el programa numero " << prog << " son: " <<endl;
			for(i=0; i<c; i++)
			{ 
				if(programa[i] == prog)
				{
					cout<< "Codigo: " << ID[i] <<endl;
					cout<< "Genero: " << genero[i] << endl;
					cout<< "Anio de ingreso: " << anio[i] <<endl;
					cout<< "Periodo de ingreso: " << periodo[i] <<endl;
					cout<< "semestre: " << semestre[i] <<endl <<endl;
				}
			}
		}
		
		system("Pause");
		system("cls");
	}
//------------------------------------------------------------------------------------------------------------------------------	
	void retirar()
	{
		int i;
		cout<<"Por favor digite el ID del estudiante que usted desea retirar...";
		cin>> codigo;
		
		i = buscar();
		
		if(i==-1) cout<<"El estudiante no se encuentra en el sistema"<<endl; 
		
		else
		{
			semestre[i] = semestre[i]*0;
			cout<< "El estudiante fue retirado con exito" <<endl;
		}
		
		system("Pause");
		system("cls");
	}
//------------------------------------------------------------------------------------------------------------------------------
	void incrementar()
	{
		int i;
		cout<<"Por favor digite el ID del estudiante  al cual usted desea incrementar su semestre...";
		cin>> codigo;
		
		i = buscar();
		
		if(i==-1) cout<<"El estudiante no se encuentra en el sistema"<<endl; 
		
		else
		{
			semestre[i] = semestre[i]+1;
			cout<< "El smestre del estudiante con codigo " << codigo << " fue incrementeado con exito"<<endl;
		}
		
		system("Pause");
		system("cls");
	}
//------------------------------------------------------------------------------------------------------------------------------	
	void MostrarSe()
	{
		int i;
		cout<<"Por favor digite el semestre del cual usted desea saber los estudiantes" <<endl;
		cin>> se;
		
		i = buscar3();
		
		if(i==-1) cout<<"No hay ningun estudiante en el semestre ingresado"<<endl; 
		
		else
		{
			cout<<"Los estudiantes que se encuentran en el semestre " << se << " son: " <<endl;
			for(i=0; i<c; i++)
			{ 
				if(semestre[i] == se)
				{
					cout<< "Codigo: " << ID[i] <<endl;
					cout<< "Programa: " << programa[i] <<endl;
					cout<< "Genero: " << genero[i] << endl;
					cout<< "Anio de ingreso: " << anio[i] <<endl;
					cout<< "Periodo de ingreso: " << periodo[i] <<endl;
				}
			}
		}
		
		system("Pause");
		system("cls");
	}
//------------------------------------------------------------------------------------------------------------------------------
	void MostrarRet()
	{
		int i;
		i = buscar4();
		
		if(i==-1) cout<<"No hay estudiantes retirados" <<endl; 
		
		else
		{
			cout<<"Los estudiantes que se encuentran retirados son: "<<endl;
			for(i=0; i<c; i++)
			{ 
				if(semestre[i] == 0)
				{
					cout<< "Codigo: " << ID[i] <<endl;
					cout<< "Programa: " << programa[i] <<endl;
					cout<< "Genero: " << genero[i] << endl;
					cout<< "Anio de ingreso: " << anio[i] <<endl;
					cout<< "Periodo de ingreso: " << periodo[i] <<endl;
					cout<< "Semestre: " << semestre[i] <<endl <<endl;
				}
			}
		}
		
		system("Pause");
		system("cls");
	}
//------------------------------------------------------------------------------------------------------------------------------
	void MostrarGen()
	{
		int i;
		cout<<"Por favor digite el genero del cual usted desea saber el numero de estudiantes teniendo en cuenta que  1 es hombre y 2 es mujer" <<endl;
		cin>> gen;
		i = buscar5();
		
		if(i==-1) cout<<"No hay estudiantes con el genero ingresado" <<endl; 
		
		else
		{
			cout<<"El codigo de los estudiantes con el genero "<< gen <<" son: " <<endl;
			for(i=0; i<c; i++)
			{ 
				if(genero[i] == gen)
				{
					cout<< "Codigo: " << ID[i] <<endl <<endl;
				}
			}
		}
		
		system("Pause");
		system("cls");
	}
//------------------------------------------------------------------------------------------------------------------------------

	
	int main()
	{ 
	int op;
	
		do {
			cout<<"Bienvenido al sistema de la Universidad CAOP";
			cout<<"\n Menu de opciones";
			cout<<"\n 1. Agregar estudiante";
			cout<<"\n 2. Mostrar estudiante";
			cout<<"\n 3. Mostrar estudiantes por programa";
			cout<<"\n 4. Retirar estudiante";
			cout<<"\n 5. Incrementar semestre";
			cout<<"\n 6. Mostar estudiantes por rango de semestre";
			cout<<"\n 7. Mostrar Estudiantes Retirados";
			cout<<"\n 8. Mostar Numero de Estudiantes por Genero";
			cout<<"\n 9. Salir";
			cout<<"\n Digite su opcion..."; 
			cin>>op;
			
	switch(op)
	{
	case 1: cout<<"Usted escogio la opcion 1: Agregar Estudiante" <<endl;
			Agregar();
			break;
	
	case 2: cout<<"Usted escogio la opcion 2: Mostrar Estudiante" <<endl; 
			Mostrar();
			break;
	
	case 3: cout<<"Usted escogio la opcion 3: Mostrar Estudiantes por programa" <<endl; 
			MostrarProg();
			break;
			
	case 4: cout<<"Usted escogio la opcion 4: Retirar Estudiantes" <<endl; 
			retirar();
			break;
			
	case 5: cout<<"Usted escogio la opcion 5: Incremetar Semestre de Estudiantes" <<endl; 
			incrementar();
			break;
	
	case 6: cout<<"Usted escogio la opcion 6: Mostrar Estudiantes Por Semestre" <<endl; 
			MostrarSe();
			break; 
	
	case 7: cout<<"Usted escogio la opcion 7: Mostrar Estudiantes Retirados" <<endl; 
			MostrarRet();
			break;
	
	case 8: cout<<"Usted escogio la opcion 8: Mostrar Estudiantes Por Genero" <<endl; 
			MostrarGen();
			break;
	}
	
	}	while (op!=9);
	
	return 0;
	}
