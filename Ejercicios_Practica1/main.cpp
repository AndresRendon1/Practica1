#include <iostream>

using namespace std;

int main()
{
    // Declaracion de variables que vamos a utilizar
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
    int resultado1 = 0;
    int resultado2= 0;
    int suma1= 0;
    int suma2=0;
    int contador1=0;
    int contador2=0;
    int fila=0;
    int columna=0;
    int x=0;
    int y=0;
    int z=0;
    int numero = 0;
    int primer=1;
    int segundo=1;
    long long resul1=0,resul2=0,resul3=0,k=0;
    bool w = 0;
    char letra=0;

    while(opcion!=0){ // ciclo while para seleccionar la opcion a ejecutar
        cout<<endl<<"GUIA 1 LABORATORIO DE INFORMATICA II 2021-1"<<endl;
        cout<<endl<<"Andres Felipe Rendon Villada "<<endl;
        cout<<"CC: 1035876760"<<endl;
        cout<<"Grupo: 2  "<<endl;
        cout<<endl<<"Problema 1: Caracter ingresado es vocal o consonante"<<endl;
        cout<<endl<<"Problema 2: Cantidad de billetes y monedas"<<endl;
        cout<<endl<<"Problema 4: 2 Numeros enteros que representan horas del reloj"<<endl;
        cout<<endl<<"Problema 5: Patron del rombo"<<endl;
        cout<<endl<<"Problema 7: Serie de Fibonacci"<<endl;
        cout<<endl<<"Problema 9: Suma de las cifras de un numero N elevados a si mismo"<<endl;
        cout<<endl<<"Problema 12: Maximo factor primo de un numero"<<endl;
        cout<<endl<<"Problema 14: Numero palindromo"<<endl;
        cout<<endl<<"Problema 15: Espiral de numeros"<<endl;
        cout<<endl<<"Problema 17: Secuencia de numeros triangulares"<<endl;
        cout<<endl<<"0 para salir"<<endl;
        cout<<endl<<"Ingrese el problema que desea ejecutar: ";
        cin>>opcion;
        cout<<endl;
        switch (opcion)
        {
        case 1: // problema 1 Verificar si el caracter ingresado es vocal o consonante
            cout<<"ingrese caracter: ";
                cin>>letra;
                ascii=letra;
                if(ascii==65||ascii==97||ascii==69||ascii==101||ascii==73||ascii==105||ascii==79||ascii==111||ascii==85||ascii==117){//comparacion del caracter ingresado con vocales mayusculas y minisculas
                    cout<<letra<<" es una vocal"<<endl;
                    break;
                }
                if(ascii==66||ascii==98||ascii==67||ascii==99||ascii==68||ascii==100||ascii==70||ascii==102||ascii==71||ascii==103||ascii==72||ascii==104||ascii==74||ascii==106||ascii==75||ascii==107||ascii==76||ascii==108||ascii==77||ascii==109||ascii==78||ascii==110||ascii==80||ascii==112||ascii==81||ascii==113||ascii==82||ascii==114||ascii==83||ascii==115||ascii==84||ascii==116||ascii==86||ascii==118||ascii==87||ascii==119||ascii==88||ascii==120||ascii==89||ascii==121||ascii==90||ascii==122){ // comparacion del caracter ingresado con las consonantes mayusculas y minusculas
                    cout<<letra<<" es una consonante"<<endl;
                    break;
                }
                else{
                    cout<<letra<<" no es una letra"<<endl; // este mensaje se mostrara en pantalla en caso de que el caracter ingresado no sea una letra
                }
                letra=0;//reseteamos la variable letra
            break;

        case 2: // problema 2 Cantidad de billetes y monedas
            cout<<"Ingrese la cantidad de dinero: ";
                cin>>Dinero;
                while(Dinero>=50000){ //mientras el valor de la variable dinero sea mayor o igual a 50000 iremos decrementando la variable en 50000 e incrementaremos el valor del contador de billetes de 50000
                    Dinero-=50000;
                    cont_B50++;
                }
                while(Dinero>=20000){//mientras el valor de la variable dinero sea mayor o igual a 20000 iremos decrementando la variable en 20000 e incrementaremos el valor del contador de billetes de 20000
                    Dinero-=20000;
                    cont_B20++;
                }
                while(Dinero>=10000){//mientras el valor de la variable dinero sea mayor o igual a 10000 iremos decrementando la variable en 10000 e incrementaremos el valor del contador de billetes de 10000
                    Dinero-=10000;
                    cont_B10++;
                }
                while(Dinero>=5000){//mientras el valor de la variable dinero sea mayor o igual a 5000 iremos decrementando la variable en 5000 e incrementaremos el valor del contador de billetes de 5000
                    Dinero-=5000;
                    cont_B5++;
                }
                while(Dinero>=2000){//mientras el valor de la variable dinero sea mayor o igual a 2000 iremos decrementando la variable en 2000 e incrementaremos el valor del contador de billetes de 2000
                    Dinero-=2000;
                    cont_B2++;
                }
                while(Dinero>=1000){//mientras el valor de la variable dinero sea mayor o igual a 1000 iremos decrementando la variable en 1000 e incrementaremos el valor del contador de billetes de 1000
                    Dinero-=1000;
                    cont_B1++;
                }
                while(Dinero>=500){//mientras el valor de la variable dinero sea mayor o igual a 500 iremos decrementando la variable en 500 e incrementaremos el valor del contador de monedas de 500
                    Dinero-=500;
                    cont_M500++;
                }
                while(Dinero>=200){//mientras el valor de la variable dinero sea mayor o igual a 200 iremos decrementando la variable en 200 e incrementaremos el valor del contador de monedas de 200
                    Dinero-=200;
                    cont_M200++;
                }
                while(Dinero>=100){//mientras el valor de la variable dinero sea mayor o igual a 500 iremos decrementando la variable en 100 e incrementaremos el valor del contador de monedas de 100
                    Dinero-=100;
                    cont_M100++;
                }
                while(Dinero>=50){//mientras el valor de la variable dinero sea mayor o igual a 50 iremos decrementando la variable en 50 e incrementaremos el valor del contador de monedas de 50
                    Dinero-=50;
                    cont_M50++;
                }
                Resto=Dinero; // si no hay mas combinaciones posibles con monedas o billetes guardaremos el valor final de la variable Dinero en resto e imprimimos la cantidad de billetes y monedas de cada denominacion existente
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
                cont_B50=0;//reseteamos todas las variables que utilizamos para evitar datos basura en una proxima ejecucion
                cont_B20=0;
                cont_B10=0;
                cont_B5=0;
                cont_B2=0;
                cont_B1=0;
                cont_M500=0;
                cont_M200=0;
                cont_M100=0;
                cont_M50=0;
                Dinero=0;
            break;

        case 4:// La suma de 2 horas
            cout<<"ingrese el primer numero: ";// Se ingresa el primer tiempo y lo descomponemos en horas y minutos
                cin>>numero1;
                min1 = numero1%100;//obtenemos los ultimos digitos del numero ingresado que representan los minutos
                H1 = numero1/100;// obtenemos los primeros 2 digitos del numero ingresado que representan la hora
                if (H1>23 || min1>59 ){// Si las horas del numero ingresado excenden 23 o los minutos son mayores de 59 se imprimira que el tiempo es invalido
                    cout<<H1<<min1<<" Es un tiempo invalido"<<endl;
                    numero1=0; //reseteamos las variables debido a que se interrumpira la ejecucion
                    numero2=0;
                    break;
                }
                cout<<"ingrese el segundo numero: ";// Se ingresa el segundo tiempo y se descompone en horas y minutos
                cin>>numero2;
                min2 = numero2%100;//obtenemos los ultimos digitos del numero ingresado que representan los minutos
                H2 = numero2/100;// obtenemos los primeros 2 digitos del numero ingresado que representan la hora
                sum_Hor = H1+H2;//sumamos las horas
                sum_Min = min1+min2;//sumamos los minutos
                if (H2>23 || min2>59){// Si las horas del numero ingresado excenden 23 o los minutos son mayores de 59 se imprimira que el tiempo es invalido
                    cout<<H2<<min2<<" Es un tiempo invalido"<<endl;
                    numero1=0; //reseteamos las variables debido a que se interrumpira la ejecucion
                    numero2=0;
                    break;
                }
                if(sum_Min>60){
                    sum_Hor = sum_Hor+1;
                    sum_Min = sum_Min-60;
                }
                if(sum_Hor>=23){
                    sum_Hor-=23;
                    cout<<"La hora es: "<<sum_Hor<<":"<<sum_Min<<" del dia siguiente"<<endl;
                    break;
                }
                cout<<"La hora es: "<<sum_Hor<<":"<<sum_Min<<endl;
                numero1=0;//reseteamos las variables
                numero2=0;
            break;

        case 5:// Patron del Rombo
            //Este patron solo imprimira los espacios del lado izquierdo del rombo
            /* ###*
                ##***
                #*****
                *******
                #*****
                ##***
                ###*
                */
            cout<<"Ingrese un numero impar: "; //Se ingresa un numero impar
            cin>>numero1;
            while(numero1%2==0){//Este ciclo verifica que se ingrese un numero impar en caso de que no
                cout<<"El numero ingresado es par, intente otra vez!"<<endl;
                cout<<"Ingrese un numero impar: ";
                cin>>numero1;
            }

            for(fila=1;fila<=numero1;fila=fila+2){  //Este ciclo nos indicara la fila que estamos imprimiendo como son las impares por eso incrementamos la variable fila de 2 en 2 y se ejecutara hasta que fila sea menor o igual al numero ingresado
                for(columna=1;columna<=numero1-fila;columna=columna+2) //Este ciclo nos ayudara a imprimir los espacios que tendra cada fila  incrementamos la variable columna de 2 en 2 y se ejecutara hasta que  la variable columna sea menor o igual a n-1
                    cout<<" "; //se imprime un espacio
                for(columna=1;columna<=fila;columna++) //columna toma nuevamente el valor de 1 pero esta vez incrementamos de 1 en 1  ya que sera el numero de asteriscos que imprimiremos por fila el ciclo se ejecutara si el valor de columna es menor o igual al de fila
                    cout<<"*"; // se imprimira un asterisco
                cout<<endl;//se imprime el salto de linea una vez termine de imprimir los asteriscos
            }
            //reflejo hacia abajo
            for(fila=numero1-2;fila>=0;fila=fila-2){
                for(columna=1;columna<=numero1-fila;columna=columna+2)
                    cout<<" ";
                for(columna=1;columna<=fila;columna++)
                    cout<<"*";
                cout<<endl;
            }
            numero1=0;//reseteamos la variable
            break;

        case 7:
            //Serie de Fibonacci
            cout<<"Ingrese un numero: ";//Se captura un numero
                cin>>numero;
                for(int i=0; i<numero ; i++){//este ciclo se encarga de formar la serie de fibonacci
                suma1=primer+segundo;//este es el termino que se obtiene al sumar los 2 valores anteriores
                primer=segundo;//aca actualizamos los valores de los numeros en la serie
                segundo=suma1;//aca actualizamos los valores de los numeros en la serie
                if(suma1%2==0&&suma1<numero){//este condicional se encarga de sumar los numeros pares menores que el numero ingresado
                    suma2 +=suma1;
                }
                }
                cout<<"La suma es: "<<suma2<<endl;//se imprime el valor de la suma
                numero=0;//reseteamos las variables
                primer=1;
                segundo=1;
                suma2=0;
            break;

        case 9:
            //Suma de los digitos de  un numero elevamodos a si mismo
            cout<<"Ingrese el  numero: ";//se ingresa un numero
            cin>>numero1;
            for(;numero1!=0;numero1/=10){//este ciclo nos ayudara a descomponer el numero en digitos ya que en cada iteracion el numero se ira dividiendo por 10
                numero2=numero1%10;//obtenemos los digitos en cada iteracion
                if(numero2==0||numero1==0){
                    resultado2=resultado2+1;
                }
                for(resultado1=numero2,contador2=1;contador2<numero2;contador2=contador2+1){//este ciclo nos ayuda a hacer la potenciacion
                    resultado1=numero2*resultado1;
                }
                resultado2=resultado1+resultado2;//vamos sumando los resultados de la potenciacion de cada digito
            }
            cout<<"El resultado de la suma de los digitos elevados a si mismo es: "<<resultado2<<endl;//se imprime el valor de la suma de todos los digitos del numero
            numero1=0;//reseteamos las variables
            numero2=0;
            resultado1=0;
            resultado2=0;
            break;

        case 12:
            //maximo factor de un numero primo
            cout << "Ingrese un numero: "; //capturamos el numero
            cin >> numero1;
            for (contador1=2;contador1<numero1;contador1++) {// Con este ciclo haremos las n iteraciones
                for (contador2=2;contador2<contador1;contador2++) { // Con este ciclo buscaremos los factores primos del numero
                    if (contador1%contador2==0) {//este condicional nos ayudara a determinar si los numeros que se estan dividiendo son pares ya que si son pares no pueden ser primos
                        w=false; //esta bandera nos ayudara para ver si el numero tiene factores primos
                        break;
                    }
                    else if (contador1%contador2!=0){ //En caso de que no sean pares
                        w=true; // La bandera tomara el valor true
                    }
                }
                if ((w==true || contador1==2) && numero1%contador1==0){// Este condicional nos ayudara a guardar el mayor factor primo
                    resultado1=contador1; // el mayor factor primo se guardara en la variable resultado1
                }
            }
            if(resultado1==0) cout << "El numero " << numero1 << " no tiene factores primos." << endl;//este mensaje se imprime si el numero no tiene factores primos
            else{
                cout << "El mayor factor primo de " << numero1 << " es: " << resultado1 << endl;
            }
            numero1=0;
            resultado1=0;
            break;

        case 14:
            //Numero palindromo
            w=false; //Bandera
            for (numero1=100;numero1<=999;numero1++) { // Estos 2 ciclos nos daran los dos numeros que multiplicados forman el numero palindromo mas grande
                for (numero2=100;numero2<=999;numero2++) {
                    resul1=numero1*numero2; // aqui calculamos el producto de ambos numeros
                    k=resul1; //aqui guardamos el resultado de la multiplicacion de ambos numeros
                    for(contador1=0,resul3=0;resul1!=0;contador1++){ // Este ciclo for nos ayuda a formar el numero al reves
                        resul2=resul1%10;//aca se va descomponiendo el numero que obtuvimos al multiplicar los 2 valores inciales de los ciclos for
                        resul3=10*resul3+resul2;//aca en resul3 guardamos el numero al reves
                        resul1=resul1/10;  //aca se va descomponiendo el numero que obtuvimos al multiplicar los 2 valores inciales de los ciclos for
                    }
                    if (resul3==k && k>x){ //aqui comparamos si el numero es palindromo
                        x=k; // Copiamos el valor del resultado de la multiplicacion en la variable x
                        z=numero1; // copiamos el valor del primer numero
                        y=numero2; // copiamos el valor del segundo numero
                        w=true;
                    }
                    else { //De lo contrario
                        w=false;
                        //no es palidromo;
                    }
                }
            }
            cout << z << '*' << y << '=' << x << endl; //Imprimimos en pantalla el mensaje
            break;

        case 15:
            //Espiral de numeros
            cout << "ingrese el tamanio del cuadrado: "; // ingresamos el tamaño que tendra la espiral cuadrada
            cin>>numero1;
            resultado2=2; //Esta variable representa la diferencia que hay entre cada elemento de la diagonal
            resultado1=1; // Esta variable representa el valor del elemento central
            suma1=resultado1;
            while(contador2<numero1-3){ //Este ciclo nos ayudara con el numero de cuadrados que tendra la espiral
                while(contador1<4){ // Este ciclo nos ayudara a realizar la suma de los cuatro elementos de cada cuadrado de la espiral
                    resultado1 = resultado1+resultado2; //aca iremos sumando los elementos de la diagonal de cada cuadrado
                    suma1 = suma1+resultado1; //aca acumularemos el resultado de la suma de los elementos
                    contador1++; // Incrementaremos el valor del contador
                }
                contador2++;//Este contador representa el numero de cuadrados que tendra la espiral
                resultado2 = resultado2+2; //Incrementamos en 2 por que ya calcularemos la suma con los elementos del cuadrante externo
                contador1=0; // Reseteamos el valor de la variable contador
            }
            cout<<"En una espiral de "<<numero1<<" X "<<numero1<<" la suma es: "<<suma1<<endl;
            numero1=0; //Reseteamos las variables
            resultado1=0;
            contador1=0;
            contador2=0;
            break;

        case 17:
            //Secuencia de numeros triangulares
            cout<<"Ingrese un numero: "; // Se solicita al usuario que ingrese un numero
            cin>>numero1;//Se captura el numero y se almacena en la variable numero1
            for(int num1=1;resultado1<numero1;num1++){//Este ciclo nos ayudara con la secuencia de los numeros triangulares
                resultado1=0;//Contador de los divisores
                numero2=num1*(num1+1)/2;
                for(contador2=1;contador2<=numero2;contador2++){ //Este ciclo nos ayudara con el numero de divisores del enesimo numero triangular
                    if(numero2%contador2==0) resultado1++;//Contador de los divisores
                }
            }
            cout<<"El numero es: "<<numero2<<" que tiene "<<resultado1<<" divisores"<<endl;
            numero1=0;
            numero2=0;
            resultado1=0;
            break;

            default:
                cout<<"Ningun problema con ese numero"<<endl;
            break;
    }
    }
    return 0;
}
