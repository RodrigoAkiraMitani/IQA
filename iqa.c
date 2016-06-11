#include <stdio.h>
#include <math.h>
#include "funcoes.h"

int main(void){
double IQA, oxi, cf, ph, dbo, ft, nt, tu, dt, st, r[9];
 
	printf("Coliformes Fecais (NMP/100 ml):"); 
	scanf("%lf", &cf);
	printf("Potencial Hidrogeniônico (pH):");
	scanf("%lf", &ph);
	printf("DBO - Demanda Bioquímica de Oxigênio(mg/L): ");
	scanf("%lf", &dbo);
	printf("Nitrato Total (mg/L): ");
	scanf("%lf", &nt);
	printf("Fosfato Total (mg/L): ");
	scanf("%lf", &ft);
	printf("Variação de Temperatura(°C):");
	scanf("%lf", &dt);
	printf("Turbidez (UNT): ");
	scanf("%lf", &tu);
	printf("OD - Oxigênio Dissolvido (%% saturação): ");
	scanf("%lf", &oxi);
	printf("Sólidos Totais (mg/L): ");
	scanf("%lf", &st);
 

r[0] = qCF(cf);
r[1] = qDBO(dbo);
r[2] = qFT(ft);
r[3] = qOxi(oxi);
r[4] = qpH(ph);
r[5] = qST(st);
r[6] = qTU(tu);
r[7] = qDT(dt);
r[8] = qNT(nt);
 
 	IQA = pow(r[0],0.15) * pow(r[4],0.12) * pow(r[1],0.10) * pow(r[8],0.10)* pow(r[2],0.10) * pow(r[7],0.10) *pow(r[6],0.08) * pow(r[5],0.08) * pow(r[3],0.17);
 	
 //Qualidade
	if(IQA <20 && IQA >= 0){
 		printf("IQA: %lf\nQualidade: Péssima\n",IQA);
 		}
 		else if(IQA <37 && IQA >= 20){
 	printf("IQA: %lf\nQualidade: Ruim\n",IQA);
 		}
 		else if(IQA <51 && IQA >= 37){
 		printf("IQA: %lf\nQualidade: Aceitável\n",IQA);
 			}
 			else if(IQA <80 && IQA >= 51){
 			printf("IQA: %lf\nQualidade: Boa\n",IQA);
 				}
 				else if(IQA >= 80){
 				printf("IQA: %lf\nQualidade: Ótima\n",IQA);
 					}else {
 					printf("Sem valores o suficiente.\n");
 				}

	return 0;
}