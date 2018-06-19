#include <string>
#include <cstdlib>
#include <iostream>
#include <valarray>
using namespace std;

struct nodo{
    string nombre;
    string carnet;
    float nota;
    struct nodo *sig;
    
};

class Lista{
    private:
        nodo *inicio;
    public:
        Lista();
        void verLista(nodo *);
        void mostrarLista(void);
        void agregarAlumno(string, string ,float);
        void modificarNota(string);
        bool quitarAlumno(string);
        void MostrarMayorNota(void);
        void MostrarMenorNota(void);
};
            
Lista::Lista(){
    inicio=NULL;
}
//1.ver lista
void Lista::verLista(nodo *p){ 
    if(p){
        
        cout<<"Nombre: "<<p->nombre<<endl;
        cout<<"Carnet: "<<p->carnet<<endl;
        cout<<"Nota : "<<p->nota<<endl;
        verLista(p->sig);
    }
    cout<<"***************************"<<endl;
        
    
    
}
void Lista::mostrarLista(void){
    verLista(inicio);
}
//2.agregar alumno
void Lista::agregarAlumno(string nombre,string carnet, float nota){
    nodo *nuevoAlum= new nodo;
    nuevoAlum->nombre=nombre;
    nuevoAlum->carnet=carnet;
    nuevoAlum->nota=nota;
    
    
    if(inicio==NULL){
        inicio=nuevoAlum;
    }
    else{
        nodo *nuevo;
        nuevo=inicio;
        while(nuevo->sig !=NULL){
            nuevo=nuevo->sig;
        }
        nuevo->sig=nuevoAlum;
    } 
}
//3.modificar nota
void Lista::modificarNota(string carnet){
    int nota;
    cout<<"ingrese la nueva nota "<<endl;
    cin>>nota;
    
    nodo *c;
    c= new nodo;
    c=inicio;
    
    while(c->carnet.compare(carnet)!=0){
        c=c->sig;   
    }
    c->nota=nota;          
    }

    
//4. Quitar Alumno
bool Lista::quitarAlumno(string carnet){
    nodo *eliminar=inicio;
    if (eliminar==NULL){
        cout<<"la lista esta vacia"<<endl;
    }
    
    if(eliminar){
        if(eliminar->carnet.compare(carnet)==0){
            inicio=eliminar->sig;
            delete(eliminar);
        }
        else{
            while(eliminar->carnet.compare(carnet)!=0){
                eliminar=eliminar->sig;
            }
            if(eliminar->sig){
                nodo *q=eliminar->sig;
                eliminar->sig=eliminar->sig->sig;
                delete(q);
                return true;
            }
            else
                return false;
        }
        
    }  
}
//5.Mostrar mayor nota
void Lista::MostrarMayorNota(void){
    nodo* s=inicio;
    int mayor=0;
    
    while(s){
        if(s->nota>mayor){
            mayor=s->nota;
        }
        s=s->sig;
    }
    cout<<"la mayor nota es "<<mayor<<endl;
    }
    
   
//6.Mostrar Menor nota
void Lista::MostrarMenorNota(void){
    nodo* s=inicio;
    int menor=10;
    
    while(s){
        if(s->nota<=menor){
            menor=s->nota;
        }
        s=s->sig;
    }
    cout<<"la menor nota es "<<menor<<endl;
    }

//MAIN ***************************************************************
int main(int argc, char** argv) {
    int opcion;
    string nombre;
    string carnet;
    float nota;
    Lista Alumno;
    
    
    do{
        cout<<"Ingrese el numero de la opcion que desee"<<endl;
        cout<<"1.Ver Lista"<<endl;
        cout<<"2.Agregar alumno"<<endl;
        cout<<"3.Modificar nota"<<endl;
        cout<<"4.quitar alumno"<<endl;
        cout<<"5.Mostrar Mayor nota"<<endl;
        cout<<"6.Mostrar menor nota"<<endl;
        cout<<"7.salir"<<endl;
        cin>>opcion;
        
        if(opcion==1){
            Alumno.mostrarLista();
        }
        else{
            if(opcion==2){
                cout<<"Ingrese nombre"<<endl;
                cin>>nombre;
                cout<<"Ingrese carnet"<<endl;
                cin>>carnet;
                cout<<"Ingrese nota"<<endl;
                cin>>nota;
                Alumno.agregarAlumno(nombre,carnet,nota);
                cout<<"AGREGADO"<<endl;
                cout<<"***************************"<<endl;
                
            }
            else{
                if(opcion==3){
                    cout<<"ingrese el carnet del alumno que desea cambiar nota"<<endl;
                    cin>>carnet;
                    Alumno.modificarNota(carnet);
                    cout<<"Se Cambio la nota"<<endl;
                    cout<<"***************************"<<endl;
                }
                else{
                    if(opcion==4){
                        cout<<"Ingrese el carnet del estudiante que desea eliminar"<<endl;
                        cin>>carnet;
                        Alumno.quitarAlumno(carnet);
                        cout<<"Se quito el alumno"<<endl;
                        cout<<"***************************"<<endl;  
                    }
                    else{
                        if(opcion==5){
                            Alumno.MostrarMayorNota();
                            cout<<"***************************"<<endl;
                        }
                        else{
                            if(opcion==6){
                                Alumno.MostrarMenorNota();
                                cout<<"***************************"<<endl;
                            }
                        }
                    }
                }
                
            }
            
        }      
    }while(opcion!=7);
        
  
    

    return 0;
}

