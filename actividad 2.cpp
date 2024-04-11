#include <iostream>

using namespace std;

int main(){


float altura;
float peso;
float resultado;

cout << "Ingrese su altura: ";
cin >> altura;

cout << "ingrese su peso: ";
cin >> peso;

resultado = peso/(altura*altura);
cout << "su IMC es:" << resultado;

if (resultado<16.5){
    cout << " Bajo peso severo"<< endl;
}else if (resultado>=16.5 && resultado<18.5){
cout << " Bajo peso"<< endl;
}else if (resultado>=18.5 && resultado<25){
cout << " Peso normal"<< endl;
}else if (resultado>=25 && resultado<30){
cout << " Sobrepeso"<< endl;
}else if (resultado>=30 && resultado<35){
cout << " Obesidad tipo 1 (moderada)"<< endl;
}else if (resultado>=35 && resultado<40){
cout << " Obesidad tipo 2 (Severa)"<< endl;
}else{
cout << " Obesidad tipo 3 (Morbida)" << endl;
}



return 0;
}
