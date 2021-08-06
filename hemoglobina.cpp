/******************
   Objetivo: hallar si tiene anemia
   Author: todos
   Fecha: 10/04/2021
*******************************/





#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    char meses, sexo;
    float hemoglobina;
    int edad;
    int menor;
    
    cout<< "Ingrese el valor de hemoglobina ";
    cin >>hemoglobina ;
    
    cout<< "si la edad es menor a un año ingrese 1 si no, ingrese cualquier otro valor ";
    cin >> menor;
    
    if(menor == 1){
        cout<< "Ingrese cuantos meses tiene ";
        if(meses >= 0 && meses <= 1){
            if(hemoglobina< 13){
                cout<< "Tiene anemia, se va a morir";
            }else{
                cout<< "No tiene anemia, se salva";
            }
        }else if(meses>1 && meses<=6){
            if(hemoglobina < 10){
                cout<< "Tiene anemia, se va a morir";
            }else{
                cout<< "No tiene anemia, se salva";
            }
        }else if(meses>6 && meses<=12){
            if(hemoglobina < 11){
                cout<< "Tiene anemia, se va a morir";
            }else{
                cout<< "No tiene anemia, se salva";
            }
        }
    }
    cout<< "Ingrese la edad ";
    cin >> edad;
    
    if(edad>=1 && edad<=5){
        if(hemoglobina < 11.5){
                cout<< "Tiene anemia, se va a morir";
            }else{
                cout<< "No tiene anemia, se salva";
            }
    }else if(edad > 5 && edad<=10){
        if(hemoglobina < 12.6){
                cout<< "Tiene anemia, se va a morir";
            }else{
                cout<< "No tiene anemia, se salva";
            }
    }else if(edad > 10 && edad<=15){
        if(hemoglobina < 13){
                cout<< "Tiene anemia, se va a morir";
            }else{
                cout<< "No tiene anemia, se salva";
            }
    }else if(edad > 15 && edad<=100){
        
        cout<< "Ingrese su sexo, si es Mujer = m, Hombre = h ";
        cin>> sexo;
        if(sexo == 'm'){
            if(hemoglobina < 12){
                cout<< "Tiene anemia, se va a morir";
            }else{
                cout<< "No tiene anemia, se salva";
            }
        }else if(sexo == 'h'){
            if(hemoglobina < 14){
                cout<< "Tiene anemia, se va a morir";
            }else{
                cout<< "No tiene anemia, se salva";
            }
        }else{
            cout<< "Valor ingresado no valido";
        }
        
    }

    
    return 0;
}
