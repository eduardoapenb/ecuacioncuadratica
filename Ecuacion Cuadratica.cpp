#include <iostream>
#include <math.h>
#include <conio.h>
#include <stdio.h>
#include <cstdlib>
using namespace std;

void casoNumero1();
void casoNumero2();
void casoNumero3();

float a = 0 , b = 0 , c = 0 , e = 0, x = 0, r = 0, v = 0, p = 0, n = 0, i = 0 , in = 0;

int main (){


	int opc = 0;

	cout <<  "Seleccione El Tipo De Ecuacion Cuadratica que va a resolver  "<<endl;
	cout <<  "\t 1 -  Ax^2 + Bx + C = 0 "<< endl;
	cout <<  "\t 2 -  Ax^2 + C  = 0 "<< endl;
	cout <<  "\t 3 -  Ax^2 + Bx = 0 "<< endl;
	cout <<  "\t 4 -  SALIR  "<< endl;
	 cin >> opc;

    switch(opc){

		 case 1 :{
            cout<< " " << endl;
            casoNumero1();
		 }
		 break;

	       case 2 :
	       	cout <<  "Ingrese el valor de A : "; cin >> a;
        	cout <<  "Ingrese el valor de C : "; cin >> c;

        	e = ((-1 * c)/ (a));
        	if  (e < 0){

        		x = sqrt ( - 1 * e);
        		cout << "X es igual a "<<"ñ" << x << "i"<<endl;
			} else {
				x = sqrt (e);
        		cout << "X es igual a "<< "ñ" << x <<endl;
			}
			break;

			case 3 :

          cout <<  "Ingrese el valor de A : "; cin >> a;
	      cout <<  "Ingrese el valor de B : "; cin >> b;

	      x = ((-1 * b) / a);
	      cout << "X es igual a " << endl;
	      cout << "x1 = " <<  0 << endl;
		  cout << "x2 = " <<  x << endl;


		 break;
		case 4 :
			return 0;
			break;


		 }

	system("PAUSE");
	 return 0;
	}




void casoNumero1(){
        //Caso numero 1: forma general   Ax^2 + Bx + C = 0

        float bisectriz = 0, raizCuadradaBisectriz = 0;
        float parteReal = 0, parteImaginariaNegativa = 0;
        float parteImaginariaPositiva = 0;
        float solucionPositiva = 0, solucionNegativa = 0;


            cout <<  "Ingrese el valor de A : "; cin >> a;
         	cout <<  "Ingrese el valor de B : "; cin >> b;
	        cout <<  "Ingrese el valor de C : "; cin >> c;

	       /*Calculo de la bisectriz: b^2 -4ac.
            Si es menor que 0, la solucion contiene numeros complejos.
            Si es mayor que 0, la solucion pertenece a los numeros reales.
	       */


            bisectriz =   ( pow (b,2) ) + ( - 1 * ( 4 * a * c) );


	        if  ( bisectriz < 0 ){
	        	raizCuadradaBisectriz = sqrt ( - 1 * bisectriz);
	            parteReal = ((-1 * b)/ (2 * a) );
			    parteImaginariaPositiva =  (raizCuadradaBisectriz) / (2 * a );
			    parteImaginariaNegativa = (- 1 * (raizCuadradaBisectriz / (2 * a )));

			    cout << "Las soluciones son: "<<endl;
			    cout << "x1 = " << parteReal << " + " << parteImaginariaPositiva <<"i"<< endl;
			    cout << "x2 = " << parteReal <<" "<<parteImaginariaNegativa <<"i"<< endl;


			} else {

				raizCuadradaBisectriz = sqrt (bisectriz);
				parteReal = ((-1 * b)/ (2 * a) );
                solucionPositiva =  parteReal + ((raizCuadradaBisectriz) / (2 * a ));
			    solucionNegativa =  parteReal + ((- 1 * (raizCuadradaBisectriz / (2 * a ))));
			    cout << "Las soluciones son: "<<endl;
			    cout << "x1 = " <<  solucionPositiva << endl;
			    cout << "x2 = " <<  solucionNegativa << endl;


			}

		 }










