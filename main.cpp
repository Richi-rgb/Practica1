#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main() {
	while (true) {
		// variable to choose the exercise
		unsigned short int exercise;

		/* first, third, fourth, fifth, sixth, seventh, eighth, eleventh, twelveth, fifteenth, sixteenth, seventeenth, eighteenth, nineteenth, twentieth,
		twenty third, twenty fifth, twenty sixth, twenty seventh, thirty-second, thirty-fifth, thirty-seventh, thirty-eighth, thirty-ninth, forty-first,
		forty-second, forty-third, forty-fourth, forty-fifth, forty-sixth, forty-seventh exercise use some variables from here */
		unsigned long long int A, B, C, remainder, division, result, counter, other_N, digit, higher, first_operand, second_operand, money, wanting, mid, column, other_counter;
		unsigned long long int next_term, t1, t2, no_repeat, seed;
		unsigned long long int fifty_thousand, twenty_thousand, ten_thousand, five_thousand, two_thousand, thousand, five_hundred, two_hundred, hundred, fifty;

		/* variable of second, seventh, eighth, ninth, tenth, eleventh, twelveth, thirteenth, fifteenth, sixteenth, seventeenth, eighteenth, nineteenth,
		twentieth, twenty second, twenty fourth, twenty fifth, twenty eighth, thirty-fifth, thirty-sixth, thirty-seventh, thirty-ninth, forty-first, forty-second,
		forty-third, forty-fourth, forty-fifth, forty-sixth, forty-seventh exercises */
		unsigned long long int N;

		// fifth, ninth exercise, twenty eighth, thirty-sixth use some variables from here
		double a, b, double_division, perimeter, area, pi = 3.1416, sum, growing, factorial;

		// twentyfirst, twenty seventh, thirty-first use some variables from here
		char c, operation, letter;

		// twenty second, thirtieth, thirtieth-third, thirty-fourth, forty-fourth use some variables from here
		unsigned short int second, minute, hour, number, maximum, minimum, rand_num, short_counter, month, day, first_number, second_number, n;
		unsigned short int duration_time, duration_hour, duration_minute, day_time, new_hour, new_minute, time_new;

		cout << "Choose an exercise (between 1 to 47) or type 0 to exit: ";
		cin >> exercise;
		if (exercise == 0) { break; }

		// every case is an exercise
		switch (exercise) {
		case 1:
			// Escriba un programa que pida dos números A y B e imprima en pantalla el residuo de la división A / B.
			cout << "Type a number: ";
			cin >> A;
			cout << "Type another number: ";
			cin >> B;
			remainder = A / B;
			cout << "The remainder of the division " << A << "/" << B << " is: " << remainder;
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
				cout << i << "\t" << (51 - i) << endl;
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
			for (unsigned long long int i = 10; i <= N; i *= 10) {
				counter = counter * 10;
			}
			while (other_N >= 1) {
				digit = other_N % 10;
				digit *= counter;
				result += digit;
				other_N /= 10;
				counter /= 10;
			}
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
			srand(time(NULL));
			rand_num = rand() % 101;
			minimum = 0;
			maximum = 100;
			while (true) {
				cout << "The number is " << rand_num;
				cin >> operation;
				if (operation == '=') { break; }
				else if (operation == '<') {
					minimum = rand_num;
				}
				else if (operation == '>') {
					maximum = rand_num;
				}
				else { cout << "Please enter '<', '>' o '='."; }
				rand_num = rand() % (maximum - minimum + 1) + minimum;
			}
			cout << "The number was found and is " << rand_num;
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
			cout << "Type a month: ";
			cin >> month;
			cout << "Type a day: ";
			cin >> day;
			if (month < 1 || month > 12) { cout << month << " it's an invalid month."; }
			else {
				if (month == 2) {
					if (day == 29) { cout << day << "/" << month << " is valid in leap year."; }
					else if (day > 0 && day <=28) { cout << day << "/" << month << " is a valid date."; }
					else { cout << day << "/" << month << " is an invalid date."; }
				}
				else if (month <= 7 && (month % 2) == 1) {
					if (day > 0 && day <= 31) { cout << day << "/" << month << " is a valid date."; }
					else { cout << day << "/" << month << " is an invalid date."; }
				}
				else if (month > 2 && month < 7 && (month % 2) == 0) {
					if (day > 0 && day <= 30) { cout << day << "/" << month << " is a valid date."; }
					else { cout << day << "/" << month << " is an invalid date."; }
				}
				else if (month > 7 && month <= 12 && (month % 2) == 0) {
					if (day > 0 && day <= 31) { cout << day << "/" << month << " is a valid date."; }
					else { cout << day << "/" << month << " is an invalid date."; }
				}
				else if (month > 8 && month < 12 && (month % 2) == 1) {
					if (day > 0 && day <= 30) { cout << day << "/" << month << " is a valid date."; }
					else { cout << day << "/" << month << " is an invalid date."; }
				}
			}
			break;
		case 34:
			/* Escriba un programa para leer dos números enteros con el siguiente signicado: el valor del primer número representa una
			hora del día en un reloj de 24 horas, de modo que 1245 representa las doce y cuarenta y cinco de la tarde.
			El segundo entero representa un tiempo de duración de la misma manera, por lo que 345 representa tres horas y 45 minutos.
			El programa debe sumar esta duración primer número, y el resultado será impreso en la misma notación, en este caso 1630,
			que es el tiempo de 3 horas y 45 minutos después de 12:45. */
			cout << "Type a number: ";
			cin >> day_time;
			cout << "type another number: ";
			cin >> duration_time;
			hour = day_time / 100;
			duration_hour = duration_time / 100;
			minute = day_time % 100;
			duration_minute = duration_time % 100;
			if (hour > 23 || minute > 59) { cout << day_time << " is an invalid time."; }
			else if (duration_hour > 23 || duration_minute > 59) { cout << duration_time << " is an invalid time."; }
			else {
				new_hour = 0;
				if ((minute + duration_minute) > 59) {
					new_minute = (minute + duration_minute) - 60;
					new_hour += 1;
				}
				else { new_minute = minute + duration_minute; }
				if ((hour + duration_hour + new_hour) > 23) {
					new_hour = (hour + duration_hour + new_hour) - 24;
				}
				else { new_hour = hour + duration_hour + new_hour; }
				new_hour *= 100;
				time_new = new_hour + new_minute;
				cout << "The time is: " << time_new;
			}
			break;
		case 35:
			/* Escriba un programa que muestre el siguiente patrón en la pantalla:
				*
			   ***
			  *****
			 *******
			  *****
			   ***
				*
			El tamaño del patrón estará determinado un número entero impar que ingrese el usuario. En el ejemplo mostrado, el tamaño de la figura es 7. */
			cout << "Type an odd number: ";
			cin >> N;
			if ((N % 2) != 1) { cout << "The number entered is not odd."; }
			else {
				mid = (N / 2) + 1;
				column = 0;
				counter = 1;
				for (unsigned long long i = 1; i <= N; i++) {
					if (i > mid) { column -= 2; }
					for (unsigned long long j = 1; j <= N; j++) {
						if (j <= mid) { column++; }
						else { column--; }
						if (column < mid) { cout << " "; }
						else { cout << "*"; }
					}
					cout << endl;
				}
			}
			break;
		case 36:
			/* Escriba un programa que encuentre el valor aproximado del número de euler en base a la siguiente suma infinita:
				e = (1/0!) + (1/1!) + (1/2!) + (1/3!) + (1/4!) + (1/5!) + ...
			El usuario debe ingresar el número de elementos usados en la aproximación. */
			cout << "Type a number: ";
			cin >> N;
			sum = 0;
			for (unsigned long long int i = 0; i < N; i++) {
				factorial = 1;
				if (i != 0) {
					for (unsigned long long int j = 1; j <= i; j++) {
						factorial *= j;
					}
				}
				sum += (1 / factorial);
			}
			cout << "e is approximately: " << sum;
			break;
		case 37:
			// Escriba un programa que reciba un número n y halle la suma de todos los números pares en la serie de Fibonacci menores a n.
			cout << "Type a number: ";
			cin >> N;
			next_term = 0;
			result = 0;
			t1 = 1;
			t2 = 1;
			while (next_term <= N) {
				next_term = t2 + t1;
				t1 = t2;
				t2 = next_term;
				if ((next_term % 2) == 0) { result += next_term; }
			}
			cout << "The result of the sum is: " << result;
			break;
		case 38:
			/* Escriba un programa que reciba 3 números a, b, c, y calcule la suma de todos los múltiplos de a y b que sean menores a c.
			Tenga en cuenta no sumar 2 veces los múltiplos comunes. */
			cout << "Type a number: ";
			cin >> A;
			cout << "Type other number: ";
			cin >> B;
			cout << "Type the last: ";
			cin >> C;
			result = 0;
			counter = 0;
			other_counter = 0;
			no_repeat = A * B;
			if (A < C && B < C) {
				counter += A;
				cout << A;
				for (unsigned long long int i = 2; (i * A) < C; i++) {
					counter += (i * A);
					cout << "+" << (i * A);
				}
				for (unsigned long long int j = 1; (j * B) < C; j++) {
					if ((j * B) != no_repeat) {
						other_counter += (j * B);
						cout << "+" << (j * B);
					}
				}
				result = counter + other_counter;
				cout << "=" << result;
			}
			else if (A < C) {
				counter += A;
				cout << A;
				for (unsigned long long int i = 2; (i * A) < C; i++) {
					counter += (i * A);
					cout << "+" << (i * A);
				}
				result = counter;
				cout << "=" << result;
			}
			else if (B < C) {
				counter += B;
				cout << B;
				for (unsigned long long int i = 2; (i * B) < C; i++) {
					counter += (i * B);
					cout << "+" << (i * B);
				}
				result = counter;
				cout << "=" << result;
			}
			else { cout << 0; }
			break;
		case 39:
			// Escriba un programa que pida un número entero N e imprima el resultado de la suma de todos sus dígitos elevados a sí mismos.
			cout << "Type a number: ";
			cin >> N;
			result = 0;
			while (N >= 1) {
				digit = N % 10;
				N /= 10;
				counter = 1;
				for (unsigned long long int i = 1; i <= digit; i++) {
					counter = digit * counter;
				}
				result += counter;
			}
			cout << "The result of the sum is: " << result;
			break;
		case 40:
			// Escriba un programa que reciba un número n e imprima el enésimo número primo.
			cout << "Type a number: ";
			cin >> N;
			result = 0;
			for (unsigned long long int i = 1; true; i++) {
				counter = 0;
				for (unsigned long long int j = 1; j <= i; j++) {
					if ((i % j) == 0) {
						counter += j;
					}
				}
				if (counter == (i + 1)) {
					result += 1;
				}
				if (result == N) {
					result = i;
					break;
				}
			}
			cout << "The " << N << " prime number is: " << result;
			break;
		case 41:
			// Escriba un programa que reciba un número y calcule el mínimo común múltiplo de todos los números enteros entre 1 y el número ingresado.
			cout << "Type a number: ";
			cin >> N;
			counter = 0;
			for (unsigned long long int i = 1; true; i++) {
				for (unsigned long long int j = 1; j <= N; j++) {
					if ((i % j) == 0) {
						counter += 1;
					}
				}
				if (counter == N) {
					result = i;
					break;
				}
				else { counter = 0; }
			}
			cout << "The LCM is: " << result;
			break;
		case 42:
			// Escriba un programa que calcula el máximo factor primo de un número.
			cout << "Type a number: ";
			cin >> N;
			other_N = N;
			counter = 2;
			while (other_N != 1) {
				if ((other_N % counter) == 0) {
					other_N /= counter;
				}
				else { counter += 1; }
			}
			cout << "The greatest prime factor of " << N << " is: " << counter;
			break;
		case 43:
			// Escriba un programa que reciba un número y calcule la suma de todos los primos menores que el número ingresado.
			cout << "Type a number: ";
			cin >> N;
			result = 0;
			if (N > 1) {
				for (unsigned long long int i = 1; i < N; i++) {
					counter = 0;
					for (unsigned long long int j = 1; j <= i; j++) {
						if ((i % j) == 0) {
							counter += j;
						}
					}
					if (counter == (i + 1)) {
						result += (counter - 1);
					}
				}
				cout << "The result of the sum is: " << result;
			}
			else { cout << "The result of the sum is: " << result; }
			break;
		case 44:
			// Escriba un programa que calcule el número palíndromo más grande que se puede obtener como una multiplicación de números de 3 dígitos.
			C = 0;
			first_number = 100;
			for (; first_number <= 999; first_number++) {
				second_number = 100;
				for (; second_number <= 999; second_number++) {
					result = 0;
					n = first_number * second_number;
					other_N = n;
					if (n < 100000) { counter = 10000; }
					else { counter = 100000; }
					while (other_N >= 1) {
						digit = other_N % 10;
						digit *= counter;
						result += digit;
						other_N /= 10;
						counter /= 10;
					}
					if (n == result && result > C) {
						A = first_number;
						B = second_number;
						C = result;
					}
				}
			}
			cout << A << "*" << B << "=" << C;
			break;
		case 45:
			/* En el caso de esta espiral de 5x5, la suma de los números en la diagonal es 101. Escriba un programa que reciba un número impar n
			y calcule la suma de los números en la diagonal de una espiral de nxn.
			Empezando con el número 1 y moviéndose hacia la izquierda y en sentido horario se genera una espiral de números como la siguiente:
				21  22  23  24 25
				20  7   8   9  10
				19  6   1   2  11
				18  5   4   3  12
				17  16  15  14 13 */
			cout << "Type a odd number: ";
			cin >> N;
			result = 1;
			for (unsigned long long int i = 3; i <= N; i += 2) {
				counter = (i - 2) * (i - 2);
				other_counter = 1 + (i - 2);
				for (unsigned long long int j = counter + other_counter; j <= (i * i); j += other_counter) {
					result += j;
				}
			}
			cout << "In a " << N << "x" << N << ", the sum is " << result << "." << endl;
			for (unsigned long long int row = 0, ut = 0, lt = 0; row < N; row++) { // ut = upper triangle, lt = left triangle
				for (unsigned long long int column = 0; column < N; column++) {
					if (row <= column && row <= N - 1 - column) { // upper triangle
						cout << (N - 2 * row) * (N - 2 * row - 1) + 1 + ut << "\t";
						ut++;
					}
					else if (row > column && row >= N - 1 - column) { // lower triangle
						A = N - 1 - row;
						cout << (N - 2 * A) * (N - 2 * A) - 2 * (N - 2 * A - 1) - ut << "\t";
						ut++;
					}
					else if (row > column && row < N - 1 - column) { // left triangle
						cout << (N - 2 * column) * (N - 2 * column - 1) + 1 - lt + column << "\t";
					}
					else { // right triangle
						A = N - 1 - column;
						cout << (N - 2 * A) * (N - 2 * A) - 4 * (N - 2 * A - 1) + lt - A << "\t";
					}
				}
				ut = 0;
				lt++;
				cout << endl << endl << endl;
			}
			break;
		case 46:
			/* La serie de Collatz se conforma con la siguiente regla: sea n un elemento de la serie, si n es par, el siguiente elemento es n/2, y si n es impar,
			el siguiente elemento es 3n+1. Escriba un programa que reciba un número k y calcule cual es el elemento inicial j (semilla), menor que k,
			que produce la serie más larga y diga cuantos términos m tiene la serie. */
			cout << "Type a number: ";
			cin >> N;
			A = N;
			counter = 0;
			while (N != 1) {
				other_N = N;
				other_counter = 1;
				for (; other_N != 1; other_counter++) {
					if ((other_N % 2) == 0) { other_N /= 2; }
					else { other_N = (3 * other_N) + 1; }
				}
				if (other_counter > counter && N != A) {
					counter = other_counter;
					seed = N;
				}
				if ((N % 2) == 0) { N /= 2; }
				else { N = (3 * N) + 1; }
			}
			cout << "The longest series is with the seed " << seed << ", having " << counter << " terms." << endl;
			cout << seed << ", ";
			while (seed != 1) {
				if ((seed % 2) == 0) { seed /= 2; }
				else { seed = (3 * seed) + 1; }
				cout << seed;
				if (seed != 1) { cout << ", "; }
				else { cout << "."; }
			}
			break;
		case 47:
			/* La secuencia de números triangulares se forma al sumar su posición en el arreglo con el valor del número anterior: 1, 1+2=3, 3+3=6, 6+4=10, 10+5=15, 15+6=21, 21+7=28...
			Si listamos los números triangulares y sus divisores tenemos:
				1: 1
				3: 1,3
				6: 1,2,3,6
				10: 1,2,5,10
				15: 1,3,5,15
				21: 1,3,7,21
				28: 1,2,4,7,14,28
			Se observa que 28 es el primer número triangular que tiene más de 5 divisores. Escriba un programa que reciba un número k y calcule cual es el primer número
			triangular que tiene más de k divisores.*/
			cout << "Type a number: ";
			cin >> N;
			for (float i = 1; true; i++) {
				result = i * ((i + 1) / 2);
				counter = 0;
				for (unsigned long long int j = 1; j <= result; j++) {
					if ((result % j) == 0) { counter++; }
				}
				if (counter > N) {
					cout << "The number is " << result << " and has " << counter << " divisors.";
					break;
				}
			}
			break;
		default:
			cout << "The exercise entered does not exist.";
			break;
		}
		cout << endl;
	}
	return 0;
}