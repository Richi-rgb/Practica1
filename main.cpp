#include <iostream>
using namespace std;

int main() {
	// variable to break the cycle
	unsigned short int exit = 1;

	while (exit == true) {
		// variable to choose the exercise
		unsigned short int exercise;

		// first, third, fourth, fifth, sixth, seventh, eighth, eleventh exercise use some variables from here
		unsigned long int A, B, remainder, division, result, counter;

		// variable of second, seventh, eighth, ninth, tenth, eleventh exercises
		unsigned int N;

		// fifth exercise variables
		float a, b, float_division;

		//ninth exercise variables
		float perimeter, area, pi = 3.1416;

		cout << "Choose an exercise (between 1 to 47) or type 0 to exit: ";
		cin >> exercise;
		exit = exercise;
		switch (exercise) {
		case 1:
			// Escriba un programa que pida dos números A y B e imprima en pantalla el residuo de la división A / B.
			cout << "Type a number: ";
			cin >> A;
			cout << "Type another number: ";
			cin >> B;
			remainder = A % B;
			cout << "The remainder of the division " << A << "/" << B << "is: " << remainder;
			break;
		case 2:
			// Escriba un programa que pida un número N e imprima en pantalla si es par o impar.
			cout << "Type a number: ";
			cin >> N;
			if ((N % 2) == 0) { cout << N << " is even."; }
			else { cout << N << " is odd."; }
			break;
		case 3:
			// Escriba un programa que pida dos números A y B e imprima en pantalla el mayor.
			cout << "Type a number:";
			cin >> A;
			cout << "Type another number: ";
			cin >> B;
			if (A > B) { cout << "The greater is " << A; }
			else { cout << "The greater is " << B; }
			break;
		case 4:
			// Escriba un programa que pida dos números A y B e imprima en pantalla el menor.
			cout << "Type a number: ";
			cin >> A;
			cout << "Type another number: ";
			cin >> B;
			if (A < B) { cout << "The lesser is " << A; }
			else { cout << "The lesser is " << B; }
			break;
		case 5:
			// Escriba un programa que pida dos números A y B e imprima en pantalla la división A / B con redondeo.
			cout << "Type a number: ";
			cin >> a;
			cout << "Typer another number: ";
			cin >> b;
			A = a;
			B = b;
			division = A / B;
			float_division = a / b;
			if ((float_division - division) > 0.5) {
				result = division + 1;
				cout << A << "/" << B << "=" << result;
			}
			else {
				cout << A << "/" << B << "=" << division;
			}
			break;
		case 6:
			// Escriba un programa que pida dos números A y B e imprima en pantalla la potencia A^B, sin hacer uso de librerías matemáticas.
			cout << "Type a number: ";
			cin >> A;
			cout << "Typer another number: ";
			cin >> B;
			if (A == 0 && B == 0) { cout << "Operation can not be performed."; }
			else {
				counter = 1;
				for (int i = 0; i < B; ++i) {
					counter = A * counter;
				}
				cout << A << "^" << B << "=" << counter;
			}
			break;
		case 7:
			// Escriba un programa que pida un número N e imprima en pantalla la suma de todos los números entre 0 y N(incluyéndose el mismo).
			cout << "Type a number: ";
			cin >> N;
			result = (N * (N + 1)) / 2;
			cout << "The sum from 0 to " << N << ": " << result;
			break;
		case 8:
			// Escriba un programa que pida un número N e imprima en pantalla su factorial.
			cout << "Type a number: ";
			cin >> N;
			counter = 1;
			for (int i = 1; i <= N; ++i) {
				counter = counter * i;
			}
			cout << N << "!=" << counter;
			break;
		case 9:
			// Escriba un programa que pida un número N e imprima el perímetro y área de un círculo con radio N. Nota: use 3.1416 como una aproximación de pi.
			cout << "Type a number: ";
			cin >> N;
			perimeter = (2 * pi) * N;
			area = pi * (N * N);
			cout << "Perimeter: " << perimeter << endl << "Area: " << area;
			break;
		case 10:
			// Escriba un programa que pida un número N e imprima en pantalla todos los múltiplos de dicho número entre 1 y 100.
			cout << "Type a number: ";
			cin >> N;
			cout << "Multiples of " << N << " less than 100:" << endl;
			counter = 0;
			if (N!=0 && N<=100) {
				while (true) {
					counter = counter + N;
					if (counter <= 100) {
						cout << counter << endl;
					}
					else { break; }
				}
			}
			else { cout << "The number is higher than 100."; }
			break;
		case 11:
			// Escriba un programa que pida un número N e imprima en pantalla su tabla de multiplicar hasta 10xN.
			cout << "Type a number: ";
			cin >> N;
		}
		cout << endl;
	}
	return 0;
}