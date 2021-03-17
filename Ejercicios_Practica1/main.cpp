#include <iostream>

using namespace std;

int main()
{

    int a=0,b=0,c=0,fact=1,numero1=0,numero2=0,numero3=0,resultado1=0, resultado2=0,residuo1=0,suma1=0,suma2=0,contador1=0,contador2=0,x=0,y=0,z=0,opcion=1;
    float num1=0,num2=0,res1=0,sum1=0,pi=3.1416,perimetro=0,area=0;
    long long resgrande=0,resul1=0,resul2=0,resul3=0,k=0;
    char letra;
    bool w;;
    while(opcion!=0){
        cout<<endl<<"GUIA 1 LABORATORIO DE INFORMATICA II 2021-1"<<endl;
        cout<<endl<<"Ejercicio 1: Residuo Division A/B"<<endl;
        cout<<endl<<"Ejercicio 2: Numero Par o Impar"<<endl;
        cout<<endl<<"Ejercicio 3: Numero mayor entre A y B"<<endl;
        cout<<endl<<"Ejercicio 4: Numero menor entre A y B"<<endl;
        cout<<endl<<"Ejercicio 5: Division con redondeo"<<endl;
        cout<<endl<<"Ejercicio 6: A^B"<<endl;
        cout<<endl<<"Ejercicio 7: Suma desde 0 hasta N"<<endl;
        cout<<endl<<"Ejercicio 8: Numero factorial"<<endl;
        cout<<endl<<"Ejercicio 9: Area y perimetro de un triangulo"<<endl;
        cout<<endl<<"Ejercicio 10: Multiplos de N menores que 100"<<endl;
        cout<<endl<<"Ejercicio 11: Tabla de multiplicar 10xN"<<endl;
        cout<<endl<<"0 para salir"<<endl;
        cin>>opcion;
        cout<<endl;
        switch (opcion)
        {
        case 1:
            cout<<endl<<"Ejecutando Ejercicio 1 Guia 1 Lab 2021"<<endl;
            cout<<endl<<"ingrese el primer numero: ";
            cin>>a;
            cout<<endl<<"ingrese el segundo numero: ";
            cin>>b;
            cout<<endl<<"El residuo de la Division "<<a<<"/"<<b<<" Es : "<< a%b << endl;
            break;
        case 2:
            cout<<endl<<"Ejecutando Ejercicio 2 Guia 1 Lab 2021"<<endl;
            cout<<"Ingrese el numero: "<<endl;
            cin>>a;
            if(a%2==0){
                cout<<endl<<"El numero: "<<a<<" es par"<<endl;
            }
            else{
                cout<<endl<<"El numero: "<<a<<" es impar"<<endl;
            }
            break;
        case 3:
            cout<<endl<<"Ejecutando Ejercicio 3 Guia 1 Lab 2021"<<endl;
            cout<<endl<<"Ingrese el primer numero: ";
            cin>>a;
            cout<<endl<<"ingrese el segundo numero: ";
            cin>>b;
            if(a>b){
                cout<<endl<<"el mayor es: "<<a<<endl;
            }
            else{
                cout<<endl<<"el mayor es: "<<b<<endl;
            }
            break;
        case 4:
            cout<<endl<<"Ejecutando Ejercicio 4 Guia 1 Lab 2021"<<endl;
            cout<<endl<<"Ingrese el primer numero: ";
            cin>>a;
            cout<<endl<<"ingrese el segundo numero: ";
            cin>>b;
            if(a<b){
                cout<<endl<<"el menor es: "<<a<<endl;
            }
            else{
                cout<<endl<<"el manor es: "<<b<<endl;
            }
            break;
        case 5:
            cout<<endl<<"Ejecutando Ejercicio 5 Guia 1 Lab 2021"<<endl;
            cout <<endl<<"Ingrese el primer numero: ";
            cin >>numero1;
            cout <<endl<<"Ingrese el segundo numero: ";
            cin>>numero2;
            resultado1 = numero1/numero2;
            num1 = numero1; //float
            num2= numero2; // float
            res1 = num1/num2; // float
            sum1 = res1-resultado1;
            if (sum1>=0.5){
                resultado1= resultado1+1;
            }
            cout <<numero1<<" / "<<numero2<<" = "<<resultado1<<endl;
            break;
        case 6:
            cout<<endl<<"Ejecutando Ejercicio 6 Guia 1 Lab 2021"<<endl;
            cout <<endl<<"Ingrese el numero de la base: ";
            cin >>numero1;
            cout <<endl<<"Ingrese el numero del exponente: ";
            cin>>numero2;
            for (contador1=1 , resultado1=1;numero2>=contador1;contador1++){
                resultado1 = resultado1*numero1;
            }
            cout <<endl<<numero1<<" ^ "<<numero2<<" es "<<resultado1<<endl;
            break;
        case 7:
            cout<<endl<<"Ejecutando Ejercicio 7 Guia 1 Lab 2021"<<endl;
            cout<<endl<<"Ingrese un numero: ";
            cin>>a;
            for(int i=0;i<=a;i++){
                suma1+=i;
            }
            cout<<endl<<"la sumatoria desde 0 hasta "<<a<<" es: "<<suma1<<endl;
            break;
        case 8:
            cout<<endl<<"Ejecutando Ejercicio 8 Guia 1 Lab 2021"<<endl;
            cout<<"Ingrese el numero: ";
                cin>>a;
                for(int i=1;i<=a;i++){
                    fact*=i;
                }
                cout<<"el factorial de "<<a<<" es: "<<fact<<endl;
            break;
        case 9:
            cout<<endl<<"Ejecutando Ejercicio 9 Guia 1 Lab 2021"<<endl;
            cout<<"Ingrese el numero: ";
            cin>>a;
            perimetro = (2*pi)*a;
            area = (a*a)*pi;
            cout<<endl<<"Perimetro: "<<perimetro<<endl;
            cout<<"Area: "<<area<<endl;
            break;
        case 10:
            cout<<endl<<"Ejecutando Ejercicio 10 Guia 1 Lab 2021"<<endl;
            cout<<"Ingrese el numero: ";
            cin>>a;
            cout<<endl<<"Los multiplos de: "<<a<<" menores que 100 son: "<<endl;
            for(int i=1;c<100-(a-1);i++){
                c=i*a;
                cout<<c<<endl;
            }
            break;
        case 11:
            cout<<endl<<"Ejecutando Ejercicio 11 Guia 1 Lab 2021"<<endl;
            cout<<"Ingrese el numero: ";
            cin>>a;
            for(int i=1;i<11;i++){
                b=a*i;
                cout<<a<<"X"<<i<<"= "<<b<<endl;
            }
            break;
        case 12:
            cout<<endl<<"Ejecutando Ejercicio 12 Guia 1 Lab 2021"<<endl;
            break;
        case 13:
            cout<<endl<<"Ejecutando Ejercicio 13 Guia 1 Lab 2021"<<endl;
            break;
        case 14:
            cout<<endl<<"Ejecutando Ejercicio 14 Guia 1 Lab 2021"<<endl;
            break;
        case 15:
            cout<<endl<<"Ejecutando Ejercicio 15 Guia 1 Lab 2021"<<endl;
            break;
        case 16:
            cout<<endl<<"Ejecutando Ejercicio 16 Guia 1 Lab 2021"<<endl;
            break;
        case 17:
            cout<<endl<<"Ejecutando Ejercicio 17 Guia 1 Lab 2021"<<endl;
            break;
        case 18:
            cout<<endl<<"Ejecutando Ejercicio 18 Guia 1 Lab 2021"<<endl;
            break;
        case 19:
            cout<<endl<<"Ejecutando Ejercicio 19 Guia 1 Lab 2021"<<endl;
            break;
        case 20:
            cout<<endl<<"Ejecutando Ejercicio 20 Guia 1 Lab 2021"<<endl;
            break;
        case 21:
            cout<<endl<<"Ejecutando Ejercicio 21 Guia 1 Lab 2021"<<endl;
            break;
        case 22:
            cout<<endl<<"Ejecutando Ejercicio 22 Guia 1 Lab 2021"<<endl;
            break;
        case 23:
            cout<<endl<<"Ejecutando Ejercicio 23 Guia 1 Lab 2021"<<endl;
            break;
        case 24:
            cout<<endl<<"Ejecutando Ejercicio 24 Guia 1 Lab 2021"<<endl;
            break;
        case 25:
            cout<<endl<<"Ejecutando Ejercicio 25 Guia 1 Lab 2021"<<endl;
            break;
        case 26:
            cout<<endl<<"Ejecutando Ejercicio 26 Guia 1 Lab 2021"<<endl;
            break;
        case 27:
            cout<<endl<<"Ejecutando Ejercicio 27 Guia 1 Lab 2021"<<endl;
            break;
        case 28:
            cout<<endl<<"Ejecutando Ejercicio 28 Guia 1 Lab 2021"<<endl;
            break;
        case 29:
            cout<<endl<<"Ejecutando Ejercicio 29 Guia 1 Lab 2021"<<endl;
            break;
        default:
            cout<<endl<<"Ejecutando Ejercicio 30 Guia 1 Lab 2021"<<endl;
            break;
    }

    }


    return 0;
}
