#include <iostream>
#include <conio.h>
#include <math.h>


using namespace std;

float descuentos(float total)
{

    float resp1;
    if(total>10000)
    {
        resp1=total-(total*0.25);

    }
else
    {
        resp1=total-(total*0.10);
    }

return resp1;
}
int main()
{

    int cantidad;
    string nombre ;
    float precio,total,respuesta;
    cout << "Igrese nombre de producto:  ";
    cin>>nombre;
    cout << "Igrese cantidad de producto:  ";
    cin>>cantidad;
    cout << "Igrese Precio de Producto  ";
    cin>>precio;
    total=precio*cantidad;
    respuesta=descuentos(total);
    cout << "\n el total es:";cout <<respuesta;
}
