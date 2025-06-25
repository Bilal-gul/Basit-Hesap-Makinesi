#include <iostream>
#include <clocale>

using namespace std;

int subtraction(int a,int b){
	return a-b;
}
int addition(int a,int b){
	return a+b;
}
int multiplication(int a,int b){
	return a*b;
}
float division(int a,int b){
	if(b==0)
    return 0;
	else
	return a/b;
}
int mode(int a,int b){
	return a%b;
}

int main() {
	
    setlocale(LC_ALL,"Turkish");

	int number1,number2;
	char character;
	
	cout << "Bir sayı giriniz: ";
	cin >> number1;
	
	cout << "Diğer sayıyı giriniz: ";
	cin >> number2;
	
	cout << "Yapmak istediğiniz işlemi şeçiniz(+,-,*,/,%): ";
	cin >> character;
	
	switch(character){
		
		case '+':
			cout << addition(number1,number2);
			break;
		case '-':
		    cout <<	subtraction(number1,number2);
			break;
		case '*':
			cout << multiplication(number1,number2);
			break;
		case '/':
			if(division(number1,number2)==0)
			cout << "Payda sıfır olamaz!!!";
			else 
			cout << division(number1,number2);
			break;
		case '%':
			cout << mode(number1,number2);
			break;
		default:
			cout << "Hatalı bir karakter girdiniz.";
			
	}
	
	
	return 0;
}