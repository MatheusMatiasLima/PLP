#include <cmath>

//(Teorema de pit�goras)
//...::: Teorema de pit�goras :::...
//recebe 3 valores como par�metro sendo apenas 2 v�lidos e retorna um terceiro
//usando o teorema de pitagoras


//pela l�gica matem�tica n�o faz sentido n�meros negativos no pit�goras
//o usu�rio deve passar 3 n�meros, 2 valores que ele sabe e um -1 que indicar�
//a incognita que ele procura
// Obs -> a e b s�o catetos e c � a hipotenusa

double pitagoras(double a, double b, double c) {
	double result = -1;
	/**
	* verifica��o importante nenhum cateto pode ser maior que a hipotenusa
 	 */
	if(a != -1 && b != -1 && c == -1) {
		//possibilidade 1: conhecimento de a e b e incognita = C
		c = sqrt((a*a)+(b*b));
		result = c;
	}else if(a == -1 && b != -1 && c != -1 && c > b) {
		////possibilidade 2: conhece B e C mas n conhece o a
		//logo a = raiz(c^2 - b^2)
		a = sqrt((c*c)-(b*b));
		result = a;
	}else if(a != -1 && b == -1 && c != -1 && c > a) {
		//possibilidade 3: conhece A e C mas n conhece o b
		//logo b = raiz(c*c - a*a)
		b = sqrt((c*c)-(a*a));
		result = b;
	}
	//retorna uma caixa de erro

	return result;
}

/**
 * (Lei da gravidade)
 * .................C�lculo da Acelera��o Gravitacional.......................
 * 
 * A Lei da Gravita��o Universal (teorizada por Isaac Newton) diz que todos 
 * os corpos (obviamente, possuindo massa) atraem-se mutuamente. E, essa for�a 
 * de atra��o � proporcional �s massas dos corpos envolvidos e inversamente 
 * proporcional ao quadrado da dist�ncia que os separa:
 * 
 * 				F�rmula Geral ->	F = (G*m1*m2)/r^2
 * 
 * F = for�a de atra��o entre os corpos = Newtons
 * G = constante da gravita��o universal G = 6,7�10^�11 Nm2/kg2
 * m1 = massa do primeiro corpo dada em kg
 * m2 = massa do segundo corpo dada em kg
 * r = distancia em metros
 * 
 * H� duas outras varia��es na aplica��o da f�rmula, uma delas � 
 * quando se tem o conhecimento da for�a de atra��o F, da dist�ncia e uma das 
 * massas, assim � possivel achar a outra massa dada pela equa��o:
 * 
 * 							m = F*(r^2)/(G*m2)
 * 
 * A terceira varia��o da f�rmula � quando se tem ambas as massas, a for�a de
 * atra��o podendo ent�o achar a dist�ncia que � dada pela equa��o:
 * 
 * 							r = sqrt((G*m1*m2)/F)
 * 
 * fonte -> infoescola.com
 * 
 */

//Primeira fun��o -> For�a de atra��o F = (G*m1*m2)/r^2

double forca_de_atracao(double massa1, double massa2, double distance) {
	double F = 0.0;
	//declara a for�a gravitacional como uma constante
	const double G = 6.7*(pow(10,-11));
	//verifica se os dados s�o positivos
	if(massa1 > 0.0 && massa2 > 0.0) {
		F = (G*massa1*massa2)/(distance*distance);
	}
	return F;
}

//segunda fun��o reconhecimento de uma massa por m = F*(r^2)/(G*m2)

double massa_lei_gravidade(double massa1, 
                           double distancia, 
						   double forcaAtracao) {
	
	double 	massa = 0.0;
	//constante da for�a gravitacional
	const double G = 6.7*(pow(10,-11));	
	//verifica se os dados s�o positivos
	if(massa1 > 0.0 && distancia > 0.0 && forcaAtracao > 0.0) {
		massa = (forcaAtracao*(distancia*distancia))/(G*massa1);
	}
										 						   
	return massa;
}

//segunda fun��o, achando a distancia r = sqrt((G*m1*m2)/F)

double distance_lei_gravidade(double massa1, double massa2, double forcaAtracao) {
	double distance = 0.0;
	//constante da for�a gravitacional
	const double G = 6.7*(pow(10,-11));	
	//verifica se os dados s�o positivos
	if(massa1 > 0.0 && massa2 > 0.0 && forcaAtracao > 0.0) {
		distance = sqrt((G*massa1*massa2)/forcaAtracao);
	}
	return distance;
}

/**
 * ---------------------------- #Equa��o da teoria da relatividade -----------
 * 
 * 		Nessa f�rmula h� duas maneiras de se utilizar, a primeira e a mais comum
 * pela maneira tradicional que � pela classica f�rmula:
 * 							
 * 								E = mc^2
 * Tal que:
 * 
 * 	E = Energia = joule
 *  m = Massa = kg
 * 	c = velocidade da luz = m/s
 * 
 * 		Outra abordagem poss�vel mas n�o usual � a possibilidade se obter a massa
 * atrav�s da energia e da velocidade.
 * 
 * 								m = E/c^2
 * 
 */


//calculo tradicional da energia
double energia_relatividade(double massa) {
	
	const double velocidadeLuz = 2.998*pow(10,8);
	double E = 0.0;
	//testa se a massa � v�lida
	if(massa > 0.0) {
		E = massa*(velocidadeLuz*velocidadeLuz);
	}
	
	return E;
}

//calculo da massa a partir da energia
double massa_relatividade(double energia) {
	
	const double velocidadeLuz = 2.998*pow(10,8);
	double M = 0.0;
	//testa se a massa � v�lida
	if(energia > 0.0) {
		M = energia/(velocidadeLuz*velocidadeLuz);
	}
	
	return M;
}

/**
 * ---------------------------#Equa��o de Clapeyron------------------------
 * 
 * Relacionando as Leis de Boyle, Charles Gay-Lussac e de Charles � poss�vel 
 * estabelecer uma equa��o que relacione as vari�veis de estado: press�o (p), 
 * volume (V) e temperatura absoluta (T) de um g�s.
 * 
 * Esta equa��o � chamada Equa��o de Clapeyron, em homenagem ao f�sico franc�s 
 * Paul Emile Clapeyron que foi quem a estabeleceu.
 * 
 * Dada pela f�rmula geral ->  		pV = nRT
 * 
 * Tal que:
 * 
 * p = press�o
 * V = volume = litro
 * n = N�mero de mols
 * R = constante universal dos gases
 * T = temperatura = kelvin
 * 
 * C�lculo da press�o -> 			p = nrt/v
 * C�lculo do volume -> 			v = nrt/p
 * C�lculo do n�mero de mols -> 	n = pv/rt
 * C�lculo da temperatura -> 		T = pv/nr
 * 
 * Valor da constante
 * 
 * R = 0.082 se -> a press�o = atm; volume = litro.
 * R = 62.3 se -> press�o = mm de mercurio = mmHg; volume = litro
 * 
 * OBS: para as demais varia��es dessa equa��o n�o s�o inclu�dos a press�o ou
 * o volume, portanto n�o ser� considerado aqui, pois o c�lculo respeitar� a
 * equa��o geratriz de todas as demais varia��es que � pV = nRT.
 * 
 * fonte -> sofisica.com
 * 
 */

//o parametro aux serve para determinar se a press�o est� em atm ou
//mm de mercurio
//aux  =  1 = atm 
//aux != 1 = mmHg

double pressao_clapeyron(double mols, double volume, double temperatura, int aux) {
	//equa��o= p = nrt/v
	double pressao = 0.0;
	double constanteDosGases = 0.0;
	//testa a validade dos dados
	if(mols > 0.0 && volume > 0.0 && temperatura > 0.0) {
		if(aux == 1) {
			//press�o em atm
			constanteDosGases = 0.082;
		}else {
			//pressao em mmHg
			constanteDosGases = 62.3;
		}
		pressao = (mols*constanteDosGases*temperatura)/volume;
	}
	return pressao;
}

double volume_clapeyron(double mols, double pressao, double temperatura, int aux) {
	//equa��o= v = nrt/p
	double volume = 0.0;
	double constanteDosGases = 0.0;
	//testa a validade dos dados
	if(mols > 0.0 && pressao > 0.0 && temperatura >= 0.0) {
		if(aux == 1) {
			//press�o em atm
			constanteDosGases = 0.082;
		}else {
			//pressao em mmHg
			constanteDosGases = 62.3;
		}
		volume = (mols*constanteDosGases*temperatura)/pressao;
	}
	return volume;
}

double mols_clapeyron(double volume, double pressao, double temperatura, int aux) {
	//equa��o= n = pv/rt
	double mols = 0.0;
	double constanteDosGases = 0.0;
	//testa a validade dos dados
	if(volume > 0.0 && pressao > 0.0 && temperatura > 0.0) {
		if(aux == 1) {
			//press�o em atm
			constanteDosGases = 0.082;
		}else {
			//pressao em mmHg
			constanteDosGases = 62.3;
		}
		//teoricamente a temperatura poderia ser 0 por�m para evitar um absurdo
		//matem�tico da divis�o por zero o mesmo foi omitido
		mols = (pressao*volume)/(constanteDosGases*temperatura);
	}
	return mols;
}

double temperatura_clapeyron(double volume, double pressao, double mols, int aux) {
	//equa��o= T = pv/nr
	double temperatura = 0.0;
	double constanteDosGases = 0.0;
	//testa a validade dos dados
	if(mols > 0.0 && pressao > 0.0 && volume > 0.0) {
		if(aux == 1) {
			//press�o em atm
			constanteDosGases = 0.082;
		}else {
			//pressao em mmHg
			constanteDosGases = 62.3;
		}
		temperatura = (pressao*volume)/(constanteDosGases*mols);
	}
	return temperatura;
}

/**
 * ----------------------------#Equa��o de Torricelli------------------------
 * 
 * A equa��o de Torricelli � uma equa��o da Cinem�tica desenvolvida pelo f�sico 
 * e matem�tico italiano Evangelista Torricelli. Essa equa��o permite determinar 
 * grandezas como acelera��o, velocidades final e inicial e, at� mesmo, o 
 * deslocamento de um corpo que se move com acelera��o constante quando n�o se 
 * conhece o intervalo de tempo no qual o movimento ocorreu.
 * 
 * Equa��o geral -> v2^2 = v1^2 * 2 * a * deltaS
 * 
 * tal que:
 * 
 * v2 = velocidade final = ms
 * v1 = velocidade inicial = ms
 * a = acelera��o = ms^2
 * deltaS = varia��o do espa�o = metros
 * 
 * Velocidade final: v2 = sqrt(v1^2 + 2*a*deltaS)
 * Velocidade inicial: v1 = sqrt(v2^2 + 2*a*deltaS)
 * 
 * Acelera��o: a = (v2^2 - v1^2)/2*deltaS
 * varia��o do espa�o: deltaS = (v2^2 - v1^2)/2*a
 * 
 * fonte -> https://brasilescola.uol.com.br/fisica/equacao-torricelli.htm
 * 
 */ 

double velocidadeITorricelli(double v, double a, double delta) {
	//Velocidade final: v2 = sqrt(v1^2 + 2*a*deltaS)
	double velocidade = 0.0;
	//testa a validade dos dados
	if(delta >= 0.0) {
		velocidade = sqrt((v*v) - (2*a*delta));
	}
	return velocidade; 
}

double velocidadeFTorricelli(double v, double a, double delta) {
	//Velocidade final: v2 = sqrt(v1^2 + 2*a*deltaS)
	double velocidade = 0.0;
	//testa a validade dos dados
	if(delta >= 0.0 && a > 0) {
		velocidade = sqrt((v*v) + (2*a*delta));
	}
	return velocidade; 
}

//a = (v2^2 - v1^2)/2*deltaS
double aceleracaoTorricelli(double vInicial, double vFinal, double delta) {
	double aceleracao = 0.0;
	//testa a validade dos dados
	if(delta > 0.0) {
		aceleracao = ((vFinal*vFinal)-(vInicial*vInicial))/(2*delta);
	}
	return aceleracao;
}

//deltaS = (v2^2 - v1^2)/2*a
double variacaoEspacoTorricelli(double vInicial, double vFinal, double a) {
	double delta = 0.0;
	if (a != 0)
		delta = ((vFinal*vFinal)-(vInicial*vInicial))/(2*a);
	return delta;
}

/**
 *------------------------------#Equa��o de Gauss-------------------------------
 * 
 * Para saber as posi��es das imagens e sua nitidez nos espelhos esf�ricos, 
 * devemos conhecer as condi��es de nitidez e a equa��o estabelecida por Gauss.
 * 
 * Regra geral -> 1/f = 1/p0 + 1/p1
 * 
 * Tal que:
 * 
 * f = Distancia focal da lente
 * p0= distancia do objeto a lente
 * p1= distancia da imagem a lente esferica
 * 
 * isolando as vari�veis da equa��o principal
 * 
 * f = p0*p1/p1+p0
 * p0= f*p1/p1-f
 * p1= f*p0/p0-f
 * 
 * https://alunosonline.uol.com.br/fisica/espelhos-esfericos-equacao-gauss.html
 */

double distanciaFocal(double distObj, double distimg) {
	double dist = 0.0;
	//n�o ser� permitido zero ou menor, j� que se trata de
	//uma distancia a um objeto
	if(distObj > 0.0 && distimg > 0.0) {
		dist = (distObj*distimg)/(distimg+distObj);
	}
	return dist;
}

double distanciaObj(double distFocal, double distimg) {
	double distObj = 0.0;
	//n�o ser� permitido zero ou menor, j� que se trata de
	//uma distancia a um objeto
	if(distFocal > 0.0 && distimg > 0.0) {
		distObj = (distFocal*distimg)/(distimg-distFocal);
	}
	return distObj;
}

double distanciaImg(double distFocal, double distObj) {
	double distImg = 0.0;
	//n�o ser� permitido zero ou menor, j� que se trata de
	//uma distancia a um objeto
	if(distFocal > 0.0 && distObj > 0.0) {
		distImg = (distFocal*distObj)/(distObj-distFocal);
	}
	return distImg;
}

/**
 * -----------------------------#For�a sobre uma particula--------------------
 * 
 * For�a magn�tica, dada em N (Newton) dada pela f�rmula
 * F = B*i*l*sen(teta)
 * 
 * intensidade do campo magnetico dado em T(tesla)
 * B = F/i*l*sen(teta)
 * 
 * intensidade da corrente eletrica dada em amperes(A)
 * i = F/B*l*sen(teta)
 * 
 * comprimento do fio (metros)
 * l = F/B*i*sen(teta)
 * 
 */

//fun��o auxilicar para converter graus em radianos, que � o padr�o
//das fun��es matem�ticas da biblioteca de dados cmath
double converteToRad(double graus) {
	const double pi = 3.14159265359;
	return (graus*pi)/180;
}

//For�a magn�tica
//F = B*i*l*sen(teta)
double forcaMagnetica(double intCamp, double intCorr, double lenFio, double ang) {
	//passa o angulo em graus para radianos
	double radianos = converteToRad(ang);
	double forcaMag = 0.0;
	//testa os dados
	if(lenFio > 0) {
		forcaMag = intCamp * intCorr * lenFio * (sin(radianos));
	}
	return forcaMag;
}

//intensidade do campo magnetico
//B = F/i*l*sen(teta)

double intensidadeCamp(double F, double i, double l, double sen) {
	//passa o angulo em graus para radianos
	double radianos = converteToRad(sen);
	double intCamp = 0.0;
	//testa os dados
	if(l > 0) {
		intCamp = F/(i*l*(sin(radianos)));
	}
	return intCamp;
}

//intensidade da corrente eletrica
//i = F/B*l*sen(teta)

double intCorrente(double F, double B, double l, double sen) {
	//passa o angulo em graus para radianos
	double radianos = converteToRad(sen);
	double i = 0.0;
	//testa os dados
	if(l > 0) {
		i = F/(B*l*(sin(radianos)));
	}
	return i;
}

//comprimento do fio
//l = F/B*i*sen(teta)
double compFio(double F, double B, double i, double sen) {
	//passa o angulo em graus para radianos
	double radianos = converteToRad(sen);
	//n�o h� restri��o de dados
	double l = F/(B*i*(sin(radianos)));
	return l;
}

/**
 * -----------------------------#Teoria do Caos
 * 
 * Como voc� j� sabe, as pequenas diferen�as num�ricas no modelo de Lorenz 
 * produziram enormes diferen�as no resultado final de sua simula��o clim�tica. 
 * Isto � o que costumamos chamar de depend�ncia sens�vel das condi��es iniciais. 
 * Podemos ver isto, numericamente, no exemplo a seguir...
 * 
 * x1 = kx0(1-x0^2)
 * 
 * fonte -> https://sites.google.com/site/onthechaos/num
 */

double caosNosNumeros(double x, double k) {
	//variavel no registrador pra intensificar a velocidade do c�lculo
	register double instant = k*x*(1 - (x*x));
	return instant;
}

