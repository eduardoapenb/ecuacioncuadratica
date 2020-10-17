#include <iostream>
#include <math.h>
#include <conio.h>
#include <stdio.h>
using namespace std;

void casoNumero1();
void casoNumero2();
void casoNumero3();



int main (){

	float a = 0 , b = 0 , c = 0 , e = 0, x = 0, r = 0, v = 0, p = 0, n = 0, i = 0 , in = 0;
	int opc = 0;
	inicio:
	cout <<  "Seleccione El Tipo De Ecuacion Cuadratica que va a resolver  "<<endl;
	cout <<  "\t 1 -  Ax^2 + Bx + C = 0 "<< endl;
	cout <<  "\t 2 -  Ax^2 + C  = 0 "<< endl;
	cout <<  "\t 3 -  Ax^2 + Bx = 0 "<< endl;
	cout <<  "\t 4 -  SALIR  "<< endl;
	 cin >> opc;



		 case 1 :{


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


void casoNumero1(){
        //Caso numero 1: forma general   Ax^2 + Bx + C = 0

        float bisectriz = 0, raizCuadradaBisectrizPositiva = 0;
        float parteReal = 0,

            cout <<  "Ingrese el valor de A : "; cin >> a;
         	cout <<  "Ingrese el valor de B : "; cin >> b;
	        cout <<  "Ingrese el valor de C : "; cin >> c;

	       /*Calculo de la bisectriz: b^2 -4ac.
            Si es menor que 0, la solucion contiene numeros complejos.
            Si es mayor que 0, la solucion pertenece a los numeros reales.
	       */


            bisectriz =   ( pow (b,2) ) + ( - 1 * ( 4 * a * c) );


	        if  ( bisectriz < 0 ){
	        	raizCuadradaBisectrizPositiva = sqrt ( - 1 * bisectriz);
	            parteReal = ((-1 * b)/ (2 * a) );
			    i =  (e) / (2 * a );
			    in = (- 1 * (e / (2 * a )));

			    cout << "X es igual a "<<endl;
			    cout << "x1 = " << p << " + " <<i<<"i"<< endl;
			    cout << "x2 = " << p <<" "<<in<<"i"<< endl;


			} else {

				e = sqrt (v);
				p = ((-1 * b)/ (2 * a) );
			    i =  p +((e) / (2 * a ));
			    in = p +((- 1 * (e / (2 * a ))));
			    cout << "X es igual a "<<endl;
			    cout << "x1 = " <<  i << endl;
			    cout << "x2 = " <<  in << endl;


			}

		 }









	 system ("PAUSE");
	 return 0;
	}







