#include <iostream>

using namespace std;

void questao1(){
    cout << "Escreva um Programa que peca um valor e mostre na tela se o valor eh positivo ou negativo." << endl;
    int numero;
    cout << "Digite um numero: ";
    cin >> numero;
    if (numero < 0){
        cout << "O " << numero << " eh um numero negativo" << endl;
    }
    else if (numero > 0){
        cout << "O " << numero << " eh um numero positivo" << endl;
    }
    else{
        cout << "O " << numero << " eh neutro" << endl;
    }
}

void questao2(){
    cout << "2. Escreva um Programa que peca dois numeros e imprima na tela o maior deles." << endl;
    int numero1;
    int numero2;
    cout << "Digite o primeiro numero: ";
    cin >> numero1;
    cout << "Digite o segundo numero: ";
    cin >> numero2;    
    if (numero1 > numero2){
        cout << "O numero " << numero1 << " eh maior que o numero " << numero2 << endl;
    }
    else if (numero1 < numero2){
        cout << "O numero " << numero2 << " eh maior que o numero " << numero1 << endl;
    }
    else {
        cout << "Os numeros sao iguais" << endl;
    }
}

void questao3(){
    cout << "3. Escreva um Programa que peca uma letra e verifique se a letra informada\n"
                 "   eh 'F' ou 'M' e conforme a letra mostre na tela, 'Masculino', 'Feminino' ou 'Sexo invalido'." << endl;
    string sexo;
    cout << "Digite a letra correspondente ao seu sexo (M-Masculino; F-Feminino): ";
    cin >> sexo;
    if (sexo == "M" || sexo == "m"){
        cout << "Voce eh do sexo Masculino" << endl;
    }
    else if (sexo == "F" || sexo == "f"){
        cout << "Voce eh do sexo Feminino" << endl;
    }
    else {
        cout << "Sexo nao identificado" << endl;
    }
}

void questao4(){
    cout << "4. Escreva um Programa que, dado um conjunto de N numeros determine o menor valor, o maior valor e a soma dos valores." << endl;
    int contador;
    cout << "Quantos numeros deseja inserir? ";
    cin >> contador;

    float numero = 0;
    float maiorNumero = -9999999999;
    float menorNumero = 9999999999;

    if (contador == 1){
        cout << "Digite um numero: ";
        cin >> numero;
        maiorNumero = numero;
        menorNumero = numero; 
    }
    else{
        for (int i = 0; i < contador; i++){
            cout << "Digite um numero: ";
            cin >> numero;

            if (numero < menorNumero){
                menorNumero = numero;
            }
            if ( numero > maiorNumero){
                maiorNumero = numero;
            }
        }
    }
    cout << "O maior numero digitado eh " << maiorNumero << ", o menor numero eh " << menorNumero << " e a soma do maior e menor numero eh " << maiorNumero + menorNumero << endl;
}

void questao5(){
	cout << "5. Escreva um Programa que leia um numero e imprima a tabuada desse numero. " << endl;
    float numero;
    cout << "Insira um numero: ";
    cin >> numero;
    cout << "Tabuada do "<< numero << endl;
    
    for (int i = 0; i <=10; i++){
    	cout << numero << " x " << i << " = " << numero * i << endl;
	}
}

void questao6(){
    cout << "6. Escreva um Programa que leia N numeros e imprima na tela se ele eh\n"
		"   primo ou nao. (Um numero primo tem apenas 2 divisores: 1 e ele mesmo)" << endl;
	int numero;
    cout << "Insira um numero: ";
    cin >> numero;
    int divisores = 0;
    
    for ( int i = 1; i <= numero; i++){
    	if (numero % i == 0){
    		divisores += 1;
		}
	}
	
	if (divisores > 2){
        cout << "O numero " << numero << " nao eh primo" << endl; 
    } else {
        cout << "O numero " << numero << " eh primo" << endl;
    }
}

void questao7(){
	cout << "7. Escreva um Programa que leia N numeros inteiros positivos e mostre\n"
		"   no final a soma dos numeros impares e a soma dos numeros pares.\n"
		"   O Programa deve parar quando o numero informado for maior que 1000." << endl;
	int numero = 0;
	int somaPares = 0;
	int somaImpares = 0;
	
	while (numero <= 1000) {
		cout << "Digite um numero: ";
		cin >> numero;
		if (numero > 1000){
			break;
		}
		else if (numero % 2 == 0){
			somaPares += numero;
		}
		else{
			somaImpares += numero;
		}
	}
	cout << "A soma dos numeros pares eh " << somaPares << endl;
	cout << "A soma dos numeros impares eh " << somaImpares << endl;
}

void questao8(){
	cout << "8. Escreva um Programa que leia um numero inteiro N e imprima o\n"
		"   enesimo termo da serie de Fibonacci. (1, 1, 2, 3, 5, 8, 13, 21, 34, ...)." << endl;
	int numero;
	int penultimo = 1;
	int antepenultimo = 0;
	int enesimo;

	cout << "Digite um numero para saber seu correspondente Fibonaxxi: ";
	cin >> numero;
	
	if (numero == 0 || numero == 1){
		enesimo = 1;
	
	} else{
		for (int i = 1; i < numero; i++){
			enesimo = antepenultimo + penultimo;
			antepenultimo = penultimo;
			penultimo = enesimo;
		}
	}
	cout << "O enesimo termo eh: " << enesimo << endl;
}

void questao9(){
	cout << "9. As organizacoes Tabajara resolveram dar um aumento de salario para\n"
		"   seus colaboradores. Faca um Programa que peça ao usuario o seu salario e\n"
		"   imprima seu salario com o reajuste" << endl;
    float salario;
    int aumentoPorcentagem;
    float aumento;
    
    cout << "Digite seu salario: ";
    cin >> salario;

	if (salario <= 280){
		aumentoPorcentagem = 20;
	}
	else if (salario <= 700){
		aumentoPorcentagem = 15;
	}
	else if (salario <=1500){
		aumentoPorcentagem = 10;
	}
	else{
		aumentoPorcentagem = 5;
	}

    cout << "- Salario antes do reajuste: R$ " << salario << endl;
	cout << "- Percentual de aumento: " << aumentoPorcentagem << "%" << endl;  
	cout << "- Valor do aumento: R$ " << salario*aumentoPorcentagem/100 << endl;
	cout << "- Salario apos reajuste: R$ " << salario* (100 + aumentoPorcentagem)/100 << endl;
}

void questao10(){
	int numero1 = -1;
	int numero2 = -1;
	while (numero1 < 0 || numero1 > 5) {
	cout << "Digite um numero de 0 a 5: ";
	cin >> numero1;
	} while (numero2 < 0 || numero2 > 5) {
	cout << "Digite outro numero de 0 a 5:";
	cin >> numero2;
	}
	int codigo = numero1 + numero2;
	
	switch (codigo){
		case 0:
			cout << "A musica tocada sera MEIO DIA" << endl;
			break;
		case 1:
			cout << "A musica tocada sera ROCK DO SERTAO" << endl;
			break;	
		case 2:
			cout << "A musica tocada sera SAGA DE UM VAQUEIRO" << endl;
			break;
		case 3:
			cout << "A musica tocada sera BOTA PEGADO PAREA" << endl;
			break;	
		case 4:
			cout << "A musica tocada sera PONTO FINAL" << endl;
			break;
		case 5:
			cout << "A musica tocada sera LUZ, CAMERA E ACAO" << endl;
			break;	
		case 6:
			cout << "A musica tocada sera TOMA CONTA DE MIM" << endl;
			break;
		case 7:
			cout << "A musica tocada sera OLHA PRO CEU" << endl;
			break;	
		case 8:
			cout << "A musica tocada sera OLHINHOS DE FOGUEIRA" << endl;
			break;
		case 9:
			cout << "A musica tocada sera RANCHEIRA" << endl;
			break;	
		case 10:
			cout << "A musica tocada sera AVOANTE" << endl;
			break;		
	}
}

int main() {
    int questao;
    questao = -1;

    while (questao != 0) {
        cout << " -> Digite um numero de 1 a 10 para ir a questao ou 0 para sair: ";
        cin >> questao;

		switch (questao){
			case 1:
				questao1();
				break;
				
			case 2:
				questao2();
				break;
				
			case 3:
				questao3();
				break;
				
			case 4:
				questao4();
				break;
			
			case 5:
				questao5();
				break;
				
			case 6:
				questao6();
				break;
				
			case 7:
				questao7();
				break;
				
			case 8:
				questao8();
				break;
				
			case 9:
				questao9();
				break;
				
			case 10:
				questao10();
				break;
			
			case 0:
                cout << "TCHAU" << endl;
                break;
            default:
                cout << "Questao inexistente!" << endl;
                break;
		}
	}
	return 0;
}
		
		

