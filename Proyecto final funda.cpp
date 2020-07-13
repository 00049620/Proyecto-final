#include "iostream"
#include "string.h"


const int longCad = 20;

using namespace std;

struct costoPorArticulo{
char  nombreArticul[longCad + 1];
int   cantidad;
float precio;
float costoPorArticulo;
};

void datos(costoPorArticulo com[], int n);
void mostrar(costoPorArticulo com[], int n);
void costo_articulo(costoPorArticulo com[], int n);
float total(costoPorArticulo com[], int n);


int main(){
int n;
cout<<"Ingrese la cantidad de productos: ";
cin>>n;
cin.ignore(100,'\n');
costoPorArticulo com[n];

datos(com, n);
costo_articulo(com, n);
mostrar(com, n);
cout<<"vas a pagar en total: $"<<total(com, n)<<endl;

}

void datos(costoPorArticulo com[], int n){
string cad;
int contador=1;

cout<<"Lea los datos del articulo"<<endl;
for (int i = 0; i < n ; i++)
{   
    cout<<"Ingrese el nombre del articulo: "<<contador++<<endl;
    getline(cin, cad, '\n');
    strncpy(com[i].nombreArticul, cad.c_str(),longCad);
    com[i].nombreArticul[longCad]='\0';
    cout<<"Cantidad del producto: "<<endl; 
    cin>>com[i].cantidad;
    cout<<"Ingrese el precio unitario del producto: "<<endl; 
    cin>>com[i].precio;
    cin.ignore(100, '\n');
    cout<<endl;
 }
}
void costo_articulo(costoPorArticulo com[], int n){
    float cifra =0;

      for ( int i = 0; i < n; i++){ 

      com[i].costoPorArticulo = com[i].cantidad * com[i].precio;
     
      }


}
void mostrar(costoPorArticulo com[], int n){
    cout<<"Los articulos que desea llevar son: "<<endl;
    for ( int i = 0; i < n; i++)
    {
        cout<<com[i].nombreArticul<<endl;
        cout<<"Cantidad: "<<com[i].cantidad<<endl;
        cout<<"Precio unitario: "<<com[i].precio<<endl;
        cout<<"precio total: "<<com[i].costoPorArticulo<<endl;
        
    }
}
float total(costoPorArticulo com[], int n)
{
    float suma;
    for ( int i = 0; i < n; i++) suma += com[i].costoPorArticulo;
    
return suma;
}
