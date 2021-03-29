#include <iostream>
using namespace std;

int main() {
	while (true) {
		// variable to choose the exercise
		unsigned short int exercise;

		/* first, third, fourth, fifth, sixth, seventh, eighth, eleventh, twelveth, fifteenth, sixteenth, seventeenth, eighteenth, nineteenth, twentieth
		exercise use some variables from here */
		unsigned long long int A, B, remainder, division, result, counter, other_N, digit;

		/* variable of second, seventh, eighth, ninth, tenth, eleventh, twelveth, thirteenth, fifteenth, sixteenth, seventeenth, eighteenth, nineteenth, twentieth
		exercises */
		unsigned long long int N;

		// fifth, ninth exercise use some variables from here
		float a, b, float_division, perimeter, area, pi = 3.1416;

		cout << "Choose an exercise (between 1 to 47) or type 0 to exit: ";
		cin >> exercise;
		if (exercise == 0) { break; }

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
			for (unsigned long long int i = 1; i <= 10; ++i) {
				result = i * N;
				cout << i << "x" << N << "=" << result << endl;
			}
			break;
		case 12:
			// Escriba un programa que pida un número N e imprima todas las potencias desde N^1 hasta N^5
			cout << "Type a number: ";
			cin >> N;
			counter = 1;
			for (int i = 1; i <= 5; ++i) {
				counter = N * counter;
				cout << N << "^" << i << "=" << counter << endl;
			}
			break;
		case 13:
			// Escriba un programa que pida un número N e imprima todos los divisores de N.
			cout << "Type a number: ";
			cin >> N;
			for (int i = 1; i <= N; ++i) {
				if ((N % i) == 0) {
					cout << i << endl;
				}
			}
			break;
		case 14:
			// Escriba un programa que imprima dos columnas paralelas, una con los números del 1 al 50 y otra con los números del 50 al 1.
			for (int i = 1; i <= 50; ++i) {
				cout << i << "   " << (51 - i) << endl;
			}
			break;
		case 15:
			// Escriba un programa que pida constantemente números hasta que se ingrese el número cero e imprima en pantalla la suma de todos los números ingresados.
			cout << "Type numbers and type 0 when you want to stop:" << endl;
			result = 0;
			while (true) {
				cin >> N;
				if (N != 0) { result = result + N; }
				else {
					cout << "The result of the sum is: " << result;
					break;
				}
			}
			break;
		case 16:
			/* Escriba un programa que pida constantemente números hasta que se ingrese el número cero e imprima en pantalla el promedio de los números
			ingresados(excluyendo el cero). */
			cout << "Type numbers and type 0 when you want to stop:" << endl;
			counter = 0;
			for (int i = 0; true; ++i) {
				cin >> N;
				counter = counter + N;
				if (N == 0) {
					cout << "The average is: " << (counter / i);
					break;
				}
			}
			break;
		case 17:
			// Escriba un programa que pida constantemente números hasta que se ingrese el número cero e imprima en pantalla el mayor de todos los números ingresados.
			cout << "Type numbers and type 0 when you want to stop:" << endl;
			counter = 0;
			while (true) {
				cin >> N;
				if (N > counter) {
					counter = N;
				}
				else if (N == 0){
					cout << "The largest number was: " << counter;
					break;
				}
			}
			break;
		case 18:
			// Escriba un programa que pida un número N e imprima si es o no un cuadrado perfecto.
			cout << "Type a number: ";
			cin >> N;
			for (unsigned long long int i = 1; true; ++i) {
				result = i * i;
				if (result == N) {
					cout << N << " is a perfect square.";
					break;
				}
				else if (result > N) {
					cout << N << " is not a perfect square.";
					break;
				}
			}
			break;
		case 19:
			// Escriba un programa que pida un número N e imprima si es o no un número primo.
			cout << "Type a number: ";
			cin >> N;
			counter = 0;
			if (N > 1) {
				for (int i = 1; i <= N; ++i) {
					if (N % i == 0) {
						counter = counter + i;
					}
				}
				if (counter == (N + 1)) {
					cout << N << " is a prime number.";
				}
				else {
					cout << N << " is not a prime number.";
				}
			}
			else {
				cout << N << " is not a prime number.";
			}
			break;
		case 20:
			// Escriba un programa que pida un número N e imprima si es o no un palíndromo (igual de derecha a izquierda que de izquierda a derecha).
			cout << "Type a number: ";
			cin >> N;
			other_N = N;
			result = 0;
			counter = 1;
			for (unsigned long long int i = 10; N>=i; i *= 10) {
				counter = counter * 10;
			}
			while (other_N >= 10) {
				digit = other_N % 10;
				digit *= counter;
				result += digit;
				other_N /= 10;
				counter /= 10;
			}
			result += other_N;
			if (result == N) {
				cout << N << " is a palindrome number.";
			}
			else {
				cout << N << " is not a palindrome number.";
			}
			break;
		}
		cout << endl;
	}
	return 0;
}