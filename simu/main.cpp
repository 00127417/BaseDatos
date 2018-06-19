#include <cstdlib>
#include<iostream>
#include<string>
using namespace std;

class persona{
    private:
        string id,nombre,apellido,fecha, sexo;
        float sueldo;
    public:
        persona();
        persona(string, string, string, string, string, float);        
        string getId();
        string getNombre();
        string getApellido();
        string getFecha();
        string getSexo();
        void setSexo(string);
        float getSueldo();
        void setSueldo(float);
};

persona::persona(){    
};

persona::persona(string id, string nombre, string apellido, string fecha, string sexo, float sueldo){
   this->id=id;
   this->nombre=nombre;
   this->apellido=apellido;
   this->fecha=fecha;
   this->sexo=sexo;
   this->sueldo=sueldo;
};

string persona::getId(){
    return this->id;
};

string persona::getNombre(){
    return this->nombre;
};

string persona::getApellido(){
    return this->apellido;
};

string persona::getFecha(){
    return this->fecha;
};

string persona::getSexo(){
    return this->sexo;
};

float persona::getSueldo(){
    return this->sueldo;
};

void persona::setSexo(string sexo){
    this->sexo=sexo;
};

void persona::setSueldo(float sueldo){
    this->sueldo=sueldo;
};


struct nodo{
    persona per;
    nodo *sig;
};

class ListaSimple{
    private:
        nodo *pInicio;
    public:
        ListaSimple();
        nodo *CrearNodo(string , string, string, string, string, float);
        void verLista(void);
        void mostrarLista(nodo *);
        void Insertar(string , string, string, string, string, float);
        void MostrarInd(string);
};

ListaSimple::ListaSimple()
{
    this->pInicio=NULL;
}
nodo * ListaSimple::CrearNodo(string id, string nombre, string apellido, string fecha, string sexo, float sueldo){
    persona p(id,nombre,apellido,fecha, sexo, sueldo);
    nodo *nuevo = new nodo;
    nuevo->per = p;
    nuevo->sig=NULL;
    return nuevo;
};

void ListaSimple::verLista(void){
    mostrarLista(pInicio);
}
void ListaSimple::mostrarLista(nodo* p){
    if(p){
        mostrarLista(p->sig);
        cout<<"id: "<<p->per.getId()<<endl;
        cout<<"nombre: "<<p->per.getNombre()<<endl;
        cout<<"apellido: "<<p->per.getApellido()<<endl;
        cout<<"fecha: "<<p->per.getFecha()<<endl;
        cout<<"sexo: "<<p->per.getSexo()<<endl;
        cout<<"sueldo: "<<p->per.getSueldo()<<endl;
        cout<<"-----------------------------------"<<endl;
    }
}
void ListaSimple::Insertar(string id, string nombre, string apellido, string fecha, string sexo, float sueldo){
    nodo *nuevo=CrearNodo(id,nombre,apellido,fecha, sexo, sueldo);
    nuevo->sig=pInicio;
    pInicio=nuevo;
}

void ListaSimple::MostrarInd(string id){
    nodo *p=pInicio;
    while(p->per.getId().compare(id)!=0){
        p=p->sig;
    }
    cout<<"id: "<<p->per.getId()<<endl;
    cout<<"nombre: "<<p->per.getNombre()<<endl;
    cout<<"apellido: "<<p->per.getApellido()<<endl;
    cout<<"fecha: "<<p->per.getFecha()<<endl;
    cout<<"sexo: "<<p->per.getSexo()<<endl;
    cout<<"sueldo: "<<p->per.getSueldo()<<endl;
    cout<<"-----------------------------------"<<endl;
}


int main(void) {
    string id,nombre,apellido,fecha, sexo,opcion;
    float sueldo;
    int op;
    ListaSimple Lista;
    
    do{
        cout<<"ingrese la opcion: "<<endl;
        cout<<"1.Insertar persona"<<endl<<"2.mostrar lista"<<endl<<"3.mostrar datos individual"<<endl<<"4.Salir"<<endl;
        cin>>op;
        if(op==1){
            do{
        
                cout<<"Ingrese id diferente"<<endl;
                cin>>id;
                cout<<"ingrese nombre"<<endl;
                cin>>nombre;
                cout<<"ingrese apellido"<<endl;
                cin>>apellido;
                cout<<"ingrese fecha de nacimiento"<<endl;
                cin>>fecha;
                cout<<"ingrese el sexo"<<endl;
                cin>>sexo;
                cout<<"ingrese el sueldo"<<endl;
                cin>>sueldo;
                Lista.Insertar(id,nombre,apellido,fecha, sexo, sueldo);
                cout<<"desea continuar-ingrese si o no"<<endl;
                cin>>opcion;
            }while(opcion!="no");
        }
        else{
            if(op==2){
                Lista.verLista();
            }
            else{
                if(op==3){
                    cout<<"ingrese el id para ver los datos"<<endl;
                    cin>>id;
                    Lista.MostrarInd(id);
                }
            }
            
        }
    }while(op!=4);
    
    
    
    
  

    return 0;
}