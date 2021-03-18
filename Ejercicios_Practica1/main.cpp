#include <iostream>

using namespace std;

int main()
{

    int opcion=1;
    int ascii = 0;
    int cont_B50 = 0;
    int cont_B20 = 0;
    int cont_B10 = 0;
    int cont_B5 = 0;
    int cont_B2 = 0;
    int cont_B1 = 0;
    int cont_M500 = 0;
    int cont_M200 = 0;
    int cont_M100 = 0;
    int cont_M50 = 0;
    int Dinero = 0;
    int Resto = 0;
    int numero1=0;
    int numero2=0;
    int H1 = 0;
    int H2 = 0;
    int min1=0;
    int min2=0;
    int sum_Hor = 0;
    int sum_Min = 0;
    int numero = 0;
    int asterisco = 0;
    int espacios= 0;
    char letra=0;

    while(opcion!=0){
        cout<<endl<<"GUIA 1 LABORATORIO DE INFORMATICA II 2021-1"<<endl;
        cout<<endl<<"Problema 1: Caracter ingresado es vocal o consonante"<<endl;
        cout<<endl<<"Problema 2: Cantidad de billetes y monedas"<<endl;
        cout<<endl<<"Problema 4: 2 Numeros enteros que representan horas del reloj"<<endl;
        cout<<endl<<"Problema 5: Patron del rombo"<<endl;
        cout<<endl<<"Problema 7: Serie de Fibonacci"<<endl;
        cout<<endl<<"Problema 9: Suma de las cifras de un numero N elevados a si mismo"<<endl;
        cout<<endl<<"Problema 12: Maximo factor primo de un numero"<<endl;
        cout<<endl<<"Problema 14: Numero palindromo"<<endl;
        cout<<endl<<"Problema 15: Espiral de numeros"<<endl;
        cout<<endl<<"Problema 17: Multiplos de N menores que 100"<<endl;
        cout<<endl<<"0 para salir"<<endl;
        cin>>opcion;
        cout<<endl;
        switch (opcion)
        {
        case 1:
            cout<<"ingrese caracter: ";
                cin>>letra;
                ascii=letra;
                if(ascii==65||ascii==97||ascii==69||ascii==101||ascii==73||ascii==105||ascii==79||ascii==111||ascii==85||ascii==117){
                    cout<<letra<<" es una vocal"<<endl;
                    break;
                }
                if(ascii==66||ascii==98||ascii==67||ascii==99||ascii==68||ascii==100||ascii==70||ascii==102||ascii==71||ascii==103||ascii==72||ascii==104||ascii==74||ascii==106||ascii==75||ascii==107||ascii==76||ascii==108||ascii==77||ascii==109||ascii==78||ascii==110||ascii==80||ascii==112||ascii==81||ascii==113||ascii==82||ascii==114||ascii==83||ascii==115||ascii==84||ascii==116||ascii==86||ascii==118||ascii==87||ascii==119||ascii==88||ascii==120||ascii==89||ascii==121||ascii==90||ascii==122){
                    cout<<letra<<" es una consonante"<<endl;
                    break;
                }
                else{
                    cout<<letra<<" no es una letra"<<endl;
                }
            break;
        case 2:
            cout<<"Ingrese la cantidad de dinero: ";
                cin>>Dinero;
                while(Dinero>=50000){
                    Dinero-=50000;
                    cont_B50++;
                }
                while(Dinero>=20000){
                    Dinero-=20000;
                    cont_B20++;
                }
                while(Dinero>=10000){
                    Dinero-=10000;
                    cont_B10++;
                }
                while(Dinero>=5000){
                    Dinero-=5000;
                    cont_B5++;
                }
                while(Dinero>=2000){
                    Dinero-=2000;
                    cont_B2++;
                }
                while(Dinero>=1000){
                    Dinero-=1000;
                    cont_B1++;
                }
                while(Dinero>=500){
                    Dinero-=500;
                    cont_M500++;
                }
                while(Dinero>=200){
                    Dinero-=200;
                    cont_M200++;
                }
                while(Dinero>=100){
                    Dinero-=100;
                    cont_M100++;
                }
                while(Dinero>=50){
                    Dinero-=50;
                    cont_M50++;
                }
                Resto=Dinero;
                cout<<"la cantidad de Billetes de 50000 es: "<<cont_B50<<endl;
                cout<<"la cantidad de Billetes de 20000 es: "<<cont_B20<<endl;
                cout<<"la cantidad de Billetes de 10000 es: "<<cont_B10<<endl;
                cout<<"la cantidad de Billetes de 5000 es: "<<cont_B5<<endl;
                cout<<"la cantidad de Billetes de 2000 es: "<<cont_B2<<endl;
                cout<<"la cantidad de Billetes de 1000 es: "<<cont_B1<<endl;
                cout<<"la cantidad de Monedas de 500 es: "<<cont_M500<<endl;
                cout<<"la cantidad de Monedas de 200 es: "<<cont_M200<<endl;
                cout<<"la cantidad de Monedas de 100 es: "<<cont_M100<<endl;
                cout<<"la cantidad de Monedas de 50 es: "<<cont_M50<<endl;
                cout<<"Faltante: "<<Resto<<endl;
            break;
        case 4:
            cout<<"ingrese el primer numero: ";
                cin>>numero1;
                cout<<"ingrese el segundo numero: ";
                cin>>numero2;
                min1 = numero1%100;
                min2 = numero2%100;
                H1 = numero1/100;
                H2 = numero2/100;
                sum_Hor = H1+H2;
                sum_Min = min1+min2;
                if(sum_Min>60){
                    sum_Hor = sum_Hor+1;
                    sum_Min = sum_Min-60;
                }
                cout<<"La hora es: "<<sum_Hor<<sum_Min<<endl;
            break;
        case 5:
            cout<<"ingrese un numero: ";
                cin>>numero;
                for(int i=1;i<=numero;i++){
                    for(espacios=i;espacios<=numero-1;espacios++){
                        cout<<" ";
                    }
                    for(asterisco=1;asterisco<=(2*i)-1;asterisco++){
                        cout<<"*";
                    }
                    cout<<endl;
                }
                for(int i=numero-1;i>=1;i--){
                    for(espacios=i;espacios<=numero-1;espacios++){
                        cout<<" ";
                    }
                    for(asterisco=1;asterisco<=(2*i)-1;asterisco++){
                        cout<<"*";
                    }
                    cout<<endl;
                }

            break;
        case 7:

            break;
        case 9:

            break;
        case 12:

            break;
        case 14:

            break;
        case 15:

            break;
        case 17:

            break;

    }

    }


    return 0;
}
