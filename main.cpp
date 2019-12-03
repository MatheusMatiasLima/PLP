#include <iostream>
#include <cmath>
#include "matfoo.h"
#include <conio.h>//sï¿½ roda no windows
#include <cstdlib>

using namespace std;

//funï¿½ï¿½o iterativa para gerar o caos dos nï¿½meros
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

//funï¿½ï¿½o recursiva que chama o menu atï¿½ o usuï¿½rio querer sair
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
		cout << "             |  Digite -1 no parametro de sua escolha |\n";
		cout << "             |________________________________________|\n\n";

		cout << "              Hipotenusa: ";
		cin >> c; cout << endl;
		cout << "              Cateto um: ";
		cin >> a; cout << endl;
		cout << "              Cateto dois: ";
		cin >> b; cout << endl;

		d = pitagoras(a,b,c);
		//testa se deu tudo certo
		if(d > 0.0) {
			cout << "              Resultado -> " << d << endl;
		}
		else {
			cout << "              Alguma coisa deu errado! verifique os parametros." << endl;
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
		cout << "             |   [a] Encontrar forÃ§a de atração      |\n";
		cout << "             |   [b] Encontrar massa                  |\n";
		cout << "             |   [c] Encontrar distancia              |\n";
		cout << "             |________________________________________|\n\n";

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
		cout << "             |        [a] Calculo da Energia          |\n";
		cout << "             |        [b] Calculo da Massa            |\n";
		cout << "             |________________________________________|\n\n";

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
		cout << "             |       [a] Encontrar pressão            |\n";
		cout << "             |       [b] Encontrar volume             |\n";
		cout << "             |       [c] Encontrar mols               |\n";
		cout << "             |       [d] Encontrar temperatura        |\n";
		cout << "             |________________________________________|\n\n";

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
		cout << "                 |________________________________________|\n\n";

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
		cout << "                 |________________________________________|\n\n";

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
		cout << "                 |         Força sobre partícula          |\n";
		cout << "                 |________________________________________|\n";
		cout << "                 |                                        |\n";
		cout << "                 |    [a] Força Magnetica                 |\n";
		cout << "                 |    [b] Intencidade do Campo magnetico  |\n";
		cout << "                 |    [c] Intencidade da corrente         |\n";
		cout << "                 |    [d] Comprimento do fio              |\n";
		cout << "                 |________________________________________|\n\n";

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
	system("cls");//limpa a pï¿½gina
	StartDisplayMenu();//chama a funï¿½ï¿½o que gerencia o programa
	getch();
	system("cls");
	cout << "\nObrigado por usar nosso programa, ate breve!\n\n";
	return 0;
}