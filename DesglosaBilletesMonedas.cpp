/* Expresar cierta cantidad de soles en la menor cantidad de billetes
** y monedas de curso legal. Por ejemplo 2588.89 soles -> 12 billetes
** de 200 soles, 1 de 100, 1 de 50, 1 de 20, 1 de 10, 1 moneda de 5, 
** 1 de 2 soles, 1 de 1 sol, 1 de 50 centimos, 1 de 20 centimos, 1 de
** 10 centimos, 1 de 5 centimos y 4 de centimos.
**
*/

#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

int main()
{
    int dinero, rdinero; // Solo para cantidades enteras
    int b200, b100, b50, b20, b10, m5, m2, m1;
    b200 = b100 = b50 = b20 = b10 = m5 = m2 = m1 = 0;  // Inicializa las variables de cantidad billetes y monedas
    cout<<"Ingrese dinero: ";
    cin>>dinero;
    rdinero = dinero;

    if (dinero >= 200){
        b200 = rdinero / 200;       // Cantidad de Billetes por division entera
        rdinero = rdinero % 200;    // Modulo para hallar dinero restante
    }
    if (dinero >= 100){
        b100 = rdinero / 100;
        rdinero = rdinero % 100;
    }
    if (dinero >= 50){
        b50 = rdinero / 50;
        rdinero = rdinero % 50;
    }
    if (dinero >= 20){
        b20 = rdinero / 20;
        rdinero = rdinero % 20;
    }
    if (dinero >= 10){
        b10 = rdinero / 10;
        rdinero = rdinero % 10;
    }
    if (dinero >= 5){
        m5 = rdinero / 5;
        rdinero = rdinero % 5;
    }
    if (dinero >= 2){
        m2 = rdinero / 2;
        rdinero = rdinero % 2;
    }
    if (dinero >= 1){
        m1 = rdinero / 1;
        rdinero = rdinero % 1;
    }
    cout<<"***Dinero desglosado : S/"<<dinero<<"***"<<endl<<endl;
    cout<<"Billetes de S/ 200 : "<<b200<<endl;
    cout<<"Billetes de S/ 100 : "<<b100<<endl;
    cout<<"Billetes de S/ 50  : "<<b50<<endl;
    cout<<"Billetes de S/ 20  : "<<b20<<endl;
    cout<<"Billetes de S/ 10  : "<<b10<<endl;
    cout<<"Monedas de S/ 5    : "<<m5<<endl;
    cout<<"Monedas de S/ 2    : "<<m2<<endl;
    cout<<"Monedas de S/ 1    : "<<m1<<endl<<endl;

    system("PAUSE");
    return 0;
}
