#include <iostream>
#include <cmath>
#include "matfoo.h"
#include <conio.h>//s� roda no windows
#include <cstdlib>

using namespace std;

//fun��o iterativa para gerar o caos dos n�meros
void caosContagem(double x, double k, int lenght) {
	int i = 0;
	double aux = caosNosNumeros(x,k);
	cout << x << endl;
	while(i < lenght) {
		cout << aux << endl;
		aux = caosNosNumeros(aux,k);
		i = 1 + i;
	}
}

//fun��o recursiva que chama o menu at� o usu�rio querer sair
void StartDisplayMenu() {
	//quantidade _ = 40
	char controle = ' ';
	char controle2;
	double a,b,c,d;
	cout << "                 .________________________________________.\n";
	cout << "                 |                                        |\n";
	cout << "                 |      *..:::Menu Principal:::..*        |\n";
	cout << "                 |________________________________________|\n";
	cout << "                 |                                        |\n";
	cout << "                 |      [a] Teorema de Pitagoras          |\n";
	cout << "                 |      [b] Lei da gravidade              |\n";
	cout << "                 |      [c] Teoria da relatividade        |\n";
	cout << "                 |      [d] Equacao de Clapeyron          |\n";
	cout << "                 |      [e] Equacao de Torricelli         |\n";
	cout << "                 |      [f] Equacao de Gauss              |\n";
	cout << "                 |      [g] Forca sobre particula         |\n";
	cout << "                 |      [h] Teoria do Caos                |\n";
	cout << "                 |      [z] Sair!                         |\n";
	cout << "                 |________________________________________|\n\n";
	controle = getch();
	system("cls");

	if(controle == 'a' || controle == 'A') {
		cout << "             .________________________________________.\n";
		cout << "             |                                        |\n";
		cout << "             |          Teorema de Pitagoras          |\n";
		cout << "             |________________________________________|\n";
		cout << "             |                                        |\n";
		cout << "             | Forneca para o sistema dois valores va-|\n";
		cout << "             |lores positivos e -1 para o desconhecido|\n";
		cout << "             |que voce necessita encontrar, exemplo:  |\n";
		cout << "             |hipotenusa = -1                         |\n";
		cout << "             |cateto um = 3                           |\n";
		cout << "             |cateto dois = 5                         |\n";
		cout << "             |Nesse exemplo acima sera calculada o va-|\n";
		cout << "             |lor da hipotenusa a partir de dois cate-|\n";
		cout << "             |tos.                                    |\n";
		cout << "             |________________________________________|\n";

		cout << "              Hipotenusa: ";
		cin >> c; cout << endl;
		cout << "              Cateto um: ";
		cin >> a; cout << endl;
		cout << "              Cateto dois: ";
		cin >> b; cout << endl;

		d = pitagoras(a,b,c);
		//testa se deu tudo certo
		if(d > 0.0) {
			cout << "             Resultado -> " << d << endl;
		}
		else {
			cout << "             Alguma coisa deu errado! verifique os parametros." << endl;
		}
		//trava a tela antes de limpar
		getch();
		system("cls");
	}

	else  if(controle == 'b' || controle == 'B') {
		cout << "             .________________________________________.\n";
		cout << "             |                                        |\n";
		cout << "             |            Lei da Gravidade            |\n";
		cout << "             |________________________________________|\n";
		cout << "             |                                        |\n";
		cout << "             | Encontrar força de atração a           |\n";
		cout << "             | Encontrar massa  b                     |\n";
		cout << "             | Encontrar distancia c                  |\n";
		cout << "             |________________________________________|\n";

		cout << "             "; cin >> controle2;

		if (controle2 == 'a' || controle2 == 'A') {
			cout << "             Massa 1: ";
			cin >> a; cout << endl;
			cout << "             Massa 2: ";
			cin >> b; cout << endl;
			cout << "             Distancia: ";
			cin >> c; cout << endl;
			d = forca_de_atracao(a,b,c);
			cout << "             Resultado -> " << d << endl;
		}
		else if (controle2 == 'b' || controle2 == 'B') {
			cout << "             Massa 1: ";
			cin >> a; cout << endl;
			cout << "             Massa 2: ";
			cin >> b; cout << endl;
			cout << "             Distancia: ";
			cin >> c; cout << endl;
			d = massa_lei_gravidade(a,b,c);
			cout << "             Resultado -> " << d << endl;
		}
		else if (controle2 == 'c' || controle2 == 'C') {
			cout << "             Massa 1: ";
			cin >> a; cout << endl;
			cout << "             Massa 2: ";
			cin >> b; cout << endl;
			cout << "             Distancia: ";
			cin >> c; cout << endl;
			d = massa_lei_gravidade(a,b,c);
			cout << "             Resultado -> " << d << endl;
		}
		getch();
		system("cls");
	}

	else if(controle == 'c' || controle == 'C') {
		cout << "             .________________________________________.\n";
		cout << "             |                                        |\n";
		cout << "             |        Teoria da relatividade          |\n";
		cout << "             |________________________________________|\n";
		cout << "             |                                        |\n";
		cout << "             | Calculo da Energia a                   |\n";
		cout << "             | Calculo da Massa  b                    |\n";
		cout << "             |________________________________________|\n";

		cout << "             "; cin >> controle2;

		if (controle2 == 'a' || controle2 == 'A') {
			cout << "             Massa: ";
			cin >> a; cout << endl;
			d = energia_relatividade(a);
			cout << "             Resultado -> " << d << endl;
		}

		else if (controle2 == 'b' || controle2 == 'B') {
			cout << "             Energia: ";
			cin >> a; cout << endl;
			d = massa_relatividade(a);
			cout << "             Resultado -> " << d << endl;
		}

	}

	else if(controle == 'd' || controle == 'D') {
		cout << "             .________________________________________.\n";
		cout << "             |                                        |\n";
		cout << "             |          Equacao de Clapeyron          |\n";
		cout << "             |________________________________________|\n";
		cout << "             |                                        |\n";
		cout << "             | Encontrar pressao a                    |\n";
		cout << "             | Encontrar volume  b                    |\n";
		cout << "             | Encontrar mols c                       |\n";
		cout << "             | Encontrar temperatura d                |\n";
		cout << "             |________________________________________|\n";

		cout << "             "; cin >> controle2;
		int aux;
		cout << "             1 pra pressao em atm e 0 para mmHg: ";
		cin >> aux; cout << endl;

		if (controle2 == 'a' || controle2 == 'A') {
			cout << "             Mols: ";
			cin >> a; cout << endl;
			cout << "             Volume: ";
			cin >> b; cout << endl;
			cout << "             Temperatura: ";
			cin >> c; cout << endl;
			d = pressao_clapeyron(a,b,c,aux);
			cout << "             Resultado -> " << d << endl;

		}

		else if (controle2 == 'b' || controle2 == 'B') {
			cout << "             Mols: ";
			cin >> a; cout << endl;
			cout << "             Pressao: ";
			cin >> b; cout << endl;
			cout << "             Temperatura: ";
			cin >> c; cout << endl;
			d = volume_clapeyron(a,b,c,aux);
			cout << "             Resultado -> " << d << endl;

		}

		else if (controle2 == 'c' || controle2 == 'C') {
			cout << "             Volume: ";
			cin >> a; cout << endl;
			cout << "             Pressao: ";
			cin >> b; cout << endl;
			cout << "             Temperatura: ";
			cin >> c; cout << endl;
			d = mols_clapeyron(a,b,c,aux);
			cout << "             Resultado -> " << d << endl;

		}

		else if (controle2 == 'd' || controle2 == 'D') {
			cout << "             Volume: ";
			cin >> a; cout << endl;
			cout << "             Pressao: ";
			cin >> b; cout << endl;
			cout << "             Mols: ";
			cin >> c; cout << endl;
			d = temperatura_clapeyron(a,b,c,aux);
			cout << "             Resultado -> " << d << endl;
		}
	
	}

	else if(controle == 'e' || controle == 'E') {
		cout << "                 .________________________________________.\n";
		cout << "                 |                                        |\n";
		cout << "                 |         Equacao de Torricelli          |\n";
		cout << "                 |________________________________________|\n";
		cout << "                 |                                        |\n";
		cout << "                 |      [a] Velocidade Inicial            |\n";
		cout << "                 |      [b] Velocidade Final              |\n";
		cout << "                 |      [c] Aceleracao                    |\n";
		cout << "                 |      [d] Variacao do Espaco            |\n";
		cout << "                 |________________________________________|\n";

		cout << "             "; cin >> controle2;
		if (controle2 == 'a' || controle2 == 'A') {
			cout << "             v: ";
			cin >> a; cout << endl;
			cout << "             a: ";
			cin >> b; cout << endl;
			cout << "             Delta: ";
			cin >> c; cout << endl;
			d = velocidadeITorricelli(a,b,c);
			cout << "             Resultado -> " << d << endl;

		}

		else if (controle2 == 'b' || controle2 == 'B') {
			cout << "             v: ";
			cin >> a; cout << endl;
			cout << "             a: ";
			cin >> b; cout << endl;
			cout << "             Delta: ";
			cin >> c; cout << endl;
			d = velocidadeFTorricelli(a,b,c);
			cout << "             Resultado -> " << d << endl;

		}

		else if (controle2 == 'c' || controle2 == 'C') {
			cout << "             v: ";
			cin >> a; cout << endl;
			cout << "             a: ";
			cin >> b; cout << endl;
			cout << "             Delta: ";
			cin >> c; cout << endl;
			d = aceleracaoTorricelli(a,b,c);
			cout << "             Resultado -> " << d << endl;

		}

		else if (controle2 == 'd' || controle2 == 'D') {
			cout << "             Velocidade Inicial: ";
			cin >> a; cout << endl;
			cout << "             Velocidade Final: ";
			cin >> b; cout << endl;
			cout << "             Delta: ";
			cin >> c; cout << endl;
			d = variacaoEspacoTorricelli(a,b,c);
			cout << "             Resultado -> " << d << endl;
		}
	
	}

	else if(controle == 'f' || controle == 'F') {
		cout << "                 .________________________________________.\n";
		cout << "                 |                                        |\n";
		cout << "                 |            Equacao de Gauss            |\n";
		cout << "                 |________________________________________|\n";
		cout << "                 |                                        |\n";
		cout << "                 |      [a] Distancia Focal               |\n";
		cout << "                 |      [b] Distancia do Objeto           |\n";
		cout << "                 |      [c] Distancia da Imagem           |\n";
		cout << "                 |________________________________________|\n";

		cout << "             "; cin >> controle2;

		if (controle2 == 'a' || controle2 == 'A') {
			cout << "             Distancia do Objeto: ";
			cin >> a; cout << endl;
			cout << "             Distancia da Imagem: ";
			cin >> b; cout << endl;
			d = distanciaFocal(a,b);
			cout << "             Resultado -> " << d << endl;

		}

		else if (controle2 == 'b' || controle2 == 'B') {
			cout << "             Distancia Focal: ";
			cin >> a; cout << endl;
			cout << "             Distancia da Imagem: ";
			cin >> b; cout << endl;

			d = distanciaObj(a,b);
			cout << "             Resultado -> " << d << endl;

		}

		else if (controle2 == 'c' || controle2 == 'C') {
			cout << "             Distancia Focal: ";
			cin >> a; cout << endl;
			cout << "             Distancia do Objeto: ";
			cin >> b; cout << endl;

			d = distanciaImg(a,b);
			cout << "             Resultado -> " << d << endl;
		}


	
	}

	else if(controle == 'g' || controle == 'G') {
		cout << "                 .________________________________________.\n";
		cout << "                 |                                        |\n";
		cout << "                 |         Força sobre particula          |\n";
		cout << "                 |________________________________________|\n";
		cout << "                 |                                        |\n";
		cout << "                 |      [a] Força Magnetica               |\n";
		cout << "                 |      [b] Intencidade do Campo magnetico|\n";
		cout << "                 |      [c] Intencidade da corrente       |\n";
		cout << "                 |      [d] Comprimento do fio            |\n";
		cout << "                 |________________________________________|\n";

		cout << "             "; cin >> controle2;
		double result;
		if (controle2 == 'a' || controle2 == 'A') {
			cout << "             Intencidade do Campo: ";
			cin >> a; cout << endl;
			cout << "             Intencidade da corrente: ";
			cin >> b; cout << endl;
			cout << "             Comprimento do fio: ";
			cin >> c; cout << endl;
			cout << "             Angulo: ";
			cin >> d; cout << endl;
			result = forcaMagnetica(a, b, c, d);
			cout << "             Resultado -> " << result << endl;

		}

		else if (controle2 == 'b' || controle2 == 'B') {
			cout << "             Força Magnetica: ";
			cin >> a; cout << endl;
			cout << "             Intencidade da corrente: ";
			cin >> b; cout << endl;
			cout << "             Comprimento do fio: ";
			cin >> c; cout << endl;
			cout << "             Angulo: ";
			cin >> d; cout << endl;
			result = intensidadeCamp(a, b, c, d);
			cout << "             Resultado -> " << result << endl;
		}

		else if (controle2 == 'c' || controle2 == 'C') {
			cout << "             F: ";
			cin >> a; cout << endl;
			cout << "             B: ";
			cin >> b; cout << endl;
			cout << "             l: ";
			cin >> c; cout << endl;
			cout << "             sen: ";
			cin >> d; cout << endl;
			result = intCorrente(a, b, c, d);
			cout << "             Resultado -> " << result << endl;

		}

		else if (controle2 == 'd' || controle2 == 'D') {
			cout << "             F: ";
			cin >> a; cout << endl;
			cout << "             B: ";
			cin >> b; cout << endl;
			cout << "             i: ";
			cin >> c; cout << endl;
			cout << "             sen: ";
			cin >> d; cout << endl;
			result = compFio(a, b, c, d);
			cout << "             Resultado -> " << result << endl;
		}
	


	}

	else if(controle == 'h' || controle == 'H') {
		cout << "                 .________________________________________.\n";
		cout << "                 |                                        |\n";
		cout << "                 |             Teoria do Caos             |\n";
		cout << "                 |________________________________________|\n";
		cout << "                 |                                        |\n";
		cout << "                 |                                        |\n";
		cout << "                 |                                        |\n";
		cout << "                 |                                        |\n";
		cout << "                 |________________________________________|\n";

		cout << "             X: ";
		cin >> a; cout << endl;
		cout << "             K: ";
		cin >> b; cout << endl;		
		d = caosNosNumeros(a,b);
		cout << "             Resultado -> " << d << endl;

	}


	
	else if(controle != 'z')
		StartDisplayMenu();
}

int main()
{
	cout << "\nSeja bem vindo ao nosso programa!\n";
	getch();
	system("cls");//limpa a p�gina
	StartDisplayMenu();//chama a fun��o que gerencia o programa
	getch();
	system("cls");
	cout << "\nObrigado por usar nosso programa, ate breve!\n\n";
	return 0;
}