#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main() {
	while (true) {
		// variable to choose the exercise
		unsigned short int exercise;

		/* first, third, fourth, fifth, sixth, seventh, eighth, eleventh, twelveth, fifteenth, sixteenth, seventeenth, eighteenth, nineteenth, twentieth,
		twenty third, twenty fifth, twenty sixth, thirty-second exercise use some variables from here */
		unsigned long long int A, B, C, remainder, division, result, counter, other_N, digit, higher, money, wanting;
		unsigned long long int fifty_thousand, twenty_thousand, ten_thousand, five_thousand, two_thousand, thousand, five_hundred, two_hundred, hundred, fifty;

		/* variable of second, seventh, eighth, ninth, tenth, eleventh, twelveth, thirteenth, fifteenth, sixteenth, seventeenth, eighteenth, nineteenth,
		twentieth, twenty second, twenty fourth, twenty fifth, twenty eighth exercises */
		unsigned long long int N;

		// fifth, ninth exercise, twenty eighth use some variables from here
		double a, b, double_division, perimeter, area, pi = 3.1416, sum, growing;

		// variable of twentyfirst, twenty seventh, thirty-first exercises
		char c, operation, letter;

		// variable of twenty second, thirtieth exercises
		unsigned short int second, minute, hour, number, maximum, minimum, rand_num, short_counter;

		// variable of twenty seventh exercises
		long long int first_operand, second_operand;

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
			double_division = a / b;
			if ((double_division - division) > 0.5) {
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
			if (N != 0 && N <= 100) {
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
				else if (N == 0) {
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
			for (unsigned long long int i = 10; N >= i; i *= 10) {
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
		case 21:
			// Escriba un programa que pida un carácter C, si es una letra la debe convertir de mayúscula a minúscula y viceversa e imprimirla.
			cout << "Type a letter: ";
			cin >> c;
			if (c > 64 && c < 91) {
				cout << "Converted letter: " << char(c + 32);
			}
			else if (c > 96 && c < 123) {
				cout << "Converted letter: " << char(c - 32);
			}
			else {
				cout << "Is not a letter.";
			}
			break;
		case 22:
			// Escriba un programa que pida una cantidad entera de segundos y la imprima en formato "horas : minutos : segundos".
			cout << "Type an amount of seconds: ";
			cin >> N;
			N += 1;
			for (unsigned short int h = 0; N > 0; ++h) {
				for (unsigned short int m = 0; N > 0; ++m) {
					for (unsigned short int s = 0; N > 0; ++s) {
						second = s;
						N -= 1;
						if (s == 59) { break; }
					}
					minute = m;
					if (m == 59) { break; }
				}
				hour = h;
				if (h == 23) { break; }
			}
			cout << hour << " : " << minute << " : " << second;
			break;
		case 23:
			// Escriba un programa que pida dos números A y B e imprima en pantalla el mínimo común múltiplo entre los dos.
			cout << "Type a number: ";
			cin >> A;
			cout << "Type another number: ";
			cin >> B;
			if (A < B) { counter = B; }
			else { counter = A; }
			while (true) {
				if ((counter % A) == 0 && (counter % B) == 0) { break; }
				counter += 1;
			}
			cout << "The LCM of " << A << " and " << B << " is: " << counter;
			break;
		case 24:
			/* Escriba un programa que pida una número entero e imprima un cuadrado de dicho tamaño, los bordes del cuadrado
			deben estar hechos con el carácter `+' y el interior debe estar vacío. */
			cout << "Type a number: ";
			cin >> N;
			for (unsigned long long int i = 1; N >= i; ++i) {
				for (unsigned long long int j = 1; N >= j; ++j) {
					if (i == 1 || i == N || j == 1 || j == N) {
						cout << "+";
					}
					else { cout << " "; }
				}
				cout << endl;
			}
			break;
		case 25:
			// Escriba un programa que pida un número N e imprima en pantalla la cantidad de dígitos de N.
			cout << "Type a number: ";
			cin >> N;
			counter = 1;
			for (unsigned long long int i = 10; N >= i; i *= 10) {
				counter += 1;
			}
			cout << N << " has " << counter << " digits.";
			break;
		case 26:
			/* Escriba un programa que pida tres números e imprima el tipo de triangulo (isósceles, equilátero, escaleno)
			que se formaría, si sus lados tienen la longitud definida por los números ingresados. Tenga en cuenta el caso
			en que los números ingresados no forman un triángulo. */
			cout << "Type a number: ";
			cin >> A;
			cout << "Type another number: ";
			cin >> B;
			cout << "Type the last: ";
			cin >> C;
			if (A == B && B == C) { cout << "An equilateral triangle is formed."; }
			else if (A >= B && A >= C) {
				if (A == B || A == C) { cout << "An isosceles tirangle is formed."; }
				else if ((B + C) > A) {
					if (B == C) { cout << "An isosceles triangle is formed."; }
					else { cout << "An scalene triangle is formed."; }
				}
				else { cout << "The lengths entered do not form a triangle."; }
			}
			else if (B >= A && B >= C) {
				if (B == A || B == C) { cout << "An isosceles triangle is formed."; }
				else if ((A + C) > B) {
					if (A == C) { cout << "An isosceles triangle is formed."; }
					else { cout << "An scalene triangle is formed."; }
				}
				else { cout << "The lengths entered do not form a triangle"; }
			}
			else if (C >= A && C >= B) {
				if (C == A || C == B) { cout << "An isosceles triangle is formed."; }
				else if ((A + B) > C) {
					if (A == B) { cout << "An isosceles triangle is formed."; }
					else { cout << "An scalene triangle is formed."; }
				}
				else { cout << "The lengths entered do not form a triangle."; }
			}
			else { cout << "The lengths entered do not form a triangle."; }
			break;
		case 27:
			/* Escriba un programa que actúe como una calculadora con operaciones de suma, resta, multiplicación y división,
			el usuario debe ingresar los operandos y la operación a realizar. */
			cout << "Type a number: ";
			cin >> first_operand;
			cout << "Type the operation: ";
			cin >> operation;
			cout << "Type the other number: ";
			cin >> second_operand;
			if (operation == '+') {
				result = first_operand + second_operand;
			}
			else if (operation == '-') {
				result = first_operand - second_operand;
			}
			else if (operation == 'x') {
				result = first_operand * second_operand;
			}
			else if (operation == '/') {
				result = first_operand / second_operand;
			}
			cout << first_operand << operation << second_operand << "=" << result;
			break;
		case 28:
			/* Escriba un programa que encuentre el valor aproximado de pi en base a la siguiente suma innita:
				π = 4(1 − 1/3 + 1/5 - 1/7 + 1/9 ...)
			El usuario debe ingresar el número de elementos usados en la aproximación. */
			cout << "Type a number to make the approximation: ";
			cin >> N;
			sum = 0;
			growing = 1;
			for (unsigned long long int i = 1; i <= N; i++) {
				if (i % 2 == 1) {
					sum += (1 / growing);
					growing += 2;
				}
				else if (i % 2 == 0) {
					sum -= (1 / growing);
					growing += 2;
				}
			}
			cout << "pi is approximately: " << 4 * (sum);
			break;
		case 29:
			/* Escriba un programa que adivine un número A (entre 0 y 100) seleccionado por el usuario(el número NO se ingresa al programa),
			el programa imprimirá en pantalla un número B y el usuario usará los símbolos `>', `<' y `=' para indicarle al programa si B es mayor,
			menor o igual que A.El programa imprimira un nuevo número B, con base en simbolo ingresado por el usuario, y repetira el proceso
			hasta acertar el número seleccionado por usuario. */
			break;
		case 30:
			/* Escriba un programa que genere un número aleatorio A (entre 0 y 100) y le pida al usuario que lo adivine,
			el usuario ingresa un número B y el programa le dirá si B es mayor o menor que A, esto se repetirá hasta que el usuario adivine el número,
			en ese momento el programa le dirá el número de intentos que tardo el usuario en adivinar el número. */
			srand(time(NULL));
			rand_num = rand() % 101;
			short_counter = 0;
			do {
				cout << "Type a number: ";
				cin >> number;
				if (number > rand_num) { cout << "The number entered is higher." << endl; }
				else if (number < rand_num) { cout << "The number entered is lower" << endl; }
				short_counter++;
			} while (number != rand_num);
			cout << "The random number was guessed and is " << rand_num << " and it took " << short_counter << " tries to find out.";
			break;
		case 31:
			// Escriba un programa que identifique si un carácter ingresado es una vocal, una consonante o ninguna de las 2 e imprima un mensaje según el caso.
			cout << "Type a character: ";
			cin >> c;
			letter = c;
			if (c > char(96) && c<char(123)) { c = char(c - 32); }
			if (c > char(64) && c<char(91)) {
				if (c == char(65) || c == char(69) || c == char(73) || c == char(79) || c == char(85)) { cout << letter << " is a vowel."; }
				else { cout << letter << " is a consonant."; }
			}
			else { cout << "It is not a letter."; }
			break;
		case 32:
			/* Se necesita un programa que permita determinar la mínima combinación de billetes y monedas para una cantidad de dinero determinada.
			Los billetes en circulación son de $50.000, $20.000, $10.000, $5.000, $2.000 y $1.000, y las monedas son de $500, $200, $100 y $50.
			Hacer un programa que entregue el número de billetes y monedas de cada denominación para completar la cantidad deseada.
			Si por medio de los billetes y monedas disponibles no se puede lograr la cantidad deseada, el sistema deberá decir lo que resta para lograrla. */
			cout << "Type the amount  money: $";
			cin >> money;
			wanting = money;
			fifty_thousand = wanting / 50000;
			wanting -= (fifty_thousand * 50000);
			twenty_thousand = wanting / 20000;
			wanting -= (twenty_thousand * 20000);
			ten_thousand = wanting / 10000;
			wanting -= (ten_thousand * 10000);
			five_thousand = wanting / 5000;
			wanting -= (five_thousand * 5000);
			two_thousand = wanting / 2000;
			wanting -= (two_thousand * 2000);
			thousand = wanting / 1000;
			wanting -= (thousand * 1000);
			five_hundred = wanting / 500;
			wanting -= (five_hundred * 500);
			two_hundred = wanting / 200;
			wanting -= (two_hundred * 200);
			hundred = wanting / 100;
			wanting -= (hundred * 100);
			fifty = wanting / 50;
			wanting -= (fifty * 50);
			cout << "50.000 : " << fifty_thousand << endl << "20.000 : " << twenty_thousand << endl << "10.000 : " << ten_thousand << endl;
			cout << "5.000 : " << five_thousand << endl << "2.000 : " << two_thousand << endl << "1.000 : " << thousand << endl;
			cout << "500 : " << five_hundred << endl << "200 : " << two_hundred << endl << "100 : " << hundred << endl << "50 : " << fifty << endl;
			cout << "Wanting: " << wanting;
			break;
		case 33:
			/* Escriba un programa que debe leer un mes y un día de dicho mes para luego decir si esa combinación de mes y día son válidos.
			El caso más especial es el 29 de febrero, en dicho caso imprimir posiblemente año bisiesto. */
		default:
			cout << "The exercise entered does not exist.";
			break;
		}
		cout << endl;
	}
	return 0;
}