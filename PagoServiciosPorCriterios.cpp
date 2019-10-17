/* Se tiene que calcular el tiempo de servicio de un trabajador bajo los siguientes criterios:
**
** 1.- Se paga un sueldo mensual por cada año trabajado, por cada mes adicional un doceavo del
**     sueldo mensual y por cada dia adicional 1/30 del doceavo del sueldo mensual.
**
** 2.- Se paga un sueldo adicional si ha trabajado veinte años o más.
**
** 3.- Si tiene 60 años o más se le paga otro sueldo.
**
*/
#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

void menu();
int main(){
    int aa = 0, mm = 0, dd =0;
    int sueldo = 0;
    char opcion = ' ';
    do{
        menu();
        cout<<"Ingresar opcion: ";
        cin>>opcion;
        system("CLS");
        switch(opcion){
            case '0':
                break;
            case '1':
                do{
                    cout<<"Sueldo :";
                    cin>>sueldo;
                    if(sueldo<0){
                        cout<<"Ingrese un sueldo valido..."<<endl;
                    }
                }while(sueldo < 0);
                system("PAUSE");
                break;
            case '2':
                do{
                    cout<<"Cantidad de anyos trabajados :";
                    cin>>aa;
                    if(aa >= 60 && aa < 99 ){ // Desarrollo del punto 3.-
                        cout<<"Anyos de servicio >= 60"<<endl;
                        cout<<"Ingrese un NUEVO SUELDO..."<<endl;
                    }
                }while(aa < 0 || aa > 99);
                system("PAUSE");

                break;
            case '3':
                do{
                    cout<<"Cantidad de meses trabajados :";
                    cin>>mm;
                }while(mm < 0);

                break;
            case '4':
                do{
                    cout<<"Cantidad de dias trabajados :";
                    cin>>dd;
                }while(dd < 0);

                break;
            case '5':
                cout<<"Calculo del Pago por servicios prestados..."<<endl;

                break;
            default:
                cout<<"opcion ERROR..."<<endl;
        }
    }while(opcion != '0');
    system("PAUSE");
    return 0;
}

void menu()
{
    system("CLS");
    cout<<"***PAGO POR TIEMPO DE SERVICIO***"<<endl<<endl;
    cout<<"<1> Ingresar Sueldo."<<endl;
    cout<<"<2> Ingresar Anyos."<<endl;
    cout<<"<3> Ingresar Meses."<<endl;
    cout<<"<4> Ingresar Dias."<<endl;
    cout<<"<5> Calcular Pago."<<endl;
    cout<<"<0> SALIR."<<endl;
}
