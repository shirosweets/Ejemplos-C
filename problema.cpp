#include<iostream>
using namespace std;

int main()


{
	cout<< "\v Hola"<< endl;
	cout<< "\t Prueba 1"<< endl;
	cout<< "\r Prueba 2"<< endl;
	cout<< "\a Prueba 3"<< endl;
	cout<< "-------------------------------------"<< endl;
	cout<< "\t **Primer Ejercicio**"<< endl;
	int suma=5;
	cout<< "Suma es: "<<(suma+3)<<endl;
	cout<< "-------------------------------------"<< endl;
	cout<< "\t **Segundo Ejercicio**"<< endl;
	int num1, num2, num3;
	float prom;
	cout<< "Ingrese 3 numeros enteros"<< endl;
	cin>> num1;
	cin>> num2;
	cin>> num3;
	prom=((num1+num2+num3)/3.);
	cout<< "El promedio es: " << prom<< endl;
	cout<< "-------------------------------------"<< endl;
	cout<< "\t **Tercer Ejercicio**"<< endl;
	int num;
	float prom1=0;
	cout<< "Ingrese su primer numero"<< endl;
	cin>> num;
	prom1=num;
	cout<< "Ingrese su segundo numero"<< endl;
	cin>> num;
	prom1+=num;
	cout<< "El promedio es: "<< prom1/2. << endl;
	cout<< "-------------------------------------"<< endl;
	cout<< "\t **Cuarto Ejercicio**"<< endl;
	int num4;
	float prom2=0;
	cout<< "Ingrese su primer numero"<< endl;
	cin>> num4;
	prom2=num4;
	cout<< "Ingrese su segundo numero"<< endl;
	cin>> num4;
	prom2+=num4;
	cout<< "Ingrese su tercer numero"<< endl;
	cin>> num4;
	prom2+=num4;
	cout<< "El promedio es: "<< prom2/3. << endl;
	cout<< "-------------------------------------"<< endl;
	cout<< "\t **Quinto Ejercicio**" << endl;
	const double pi=3.14;
	double altura, radio, volumen;
	cout<< "Ingrese la altura de su cilindro"<< endl;
	cin>> altura;
	cout<< "Ingrese el radio de su cilindro"<< endl;
	cin>> radio;
	volumen= radio*radio*pi*altura;
	cout<< "El volumen del cilindro es: "<< volumen << endl;
	cout<< "-------------------------------------"<< endl;
	
	
	
	
	cout<< "-------------------------------------"<< endl;
    char newline = '\n';
    char tab = '\t';
    char backspace = '\b';
    char backslash = '\\';
    char nullChar = '\0';

    cout << "Newline character: " << newline << "ending" << endl; // Newline character:
    //  ending
    cout << "Tab character: " << tab << "ending" << endl; // Tab character : ending
    cout << "Backspace character: " << backspace << "ending" << endl; // Backspace character : ending
    cout << "Backslash character: " << backslash << "ending" << endl; // Backslash character : \ending
    cout << "Null character: " << nullChar << "ending" << endl; //Null character:  ending
    cout<< "-------------------------------------"<< endl;
    
}
