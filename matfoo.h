#ifndef _MATFOO_H_
#define _MATFOO_H_

//teorema de pitagoras
double pitagoras(double a, double b, double c);

//lei da gravidade.
double forca_de_atracao(double massa1, double massa2, double distance);
double massa_lei_gravidade(double massa1, double distancia, double forcaAtracao);
double distance_lei_gravidade(double massa1, double massa2, double forcaAtracao);

//teoria da relatividade
double energia_relatividade(double massa);
double massa_relatividade(double energia);

//equação de clapeyron (ainda não testei)
double pressao_clapeyron(double mols, double volume, double temperatura, int aux);
double volume_clapeyron(double mols, double pressao, double temperatura, int aux);
double mols_clapeyron(double volume, double pressao, double temperatura, int aux);
double temperatura_clapeyron(double volume, double pressao, double mols, int aux);

//equação de torricelli
double velocidadeITorricelli(double v, double a, double delta);
double velocidadeFTorricelli(double v, double a, double delta);
double aceleracaoTorricelli(double vInicial, double vFinal, double delta);
double variacaoEspacoTorricelli(double vInicial, double vFinal, double a);

//Equação de Gauss
double distanciaFocal(double distObj, double distimg);
double distanciaObj(double distFocal, double distimg);
double distanciaImg(double distFocal, double distObj);

//força sobre uma particula (Falta a função do angulo?)
double converteToRad(double graus);
double forcaMagnetica(double intCamp, double intCorr, double lenFio, double ang);
double intensidadeCamp(double F, double i, double l, double sen);
double intCorrente(double F, double B, double l, double sen);
double compFio(double F, double B, double i, double sen);

//teoria do caos
double caosNosNumeros(double x, double k);

#endif