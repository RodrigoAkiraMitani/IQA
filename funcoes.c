#include <stdio.h>
#include <math.h>

double qCF (double CF){
	
	double q1, A = 98.03, B = -36.45, C = 3.138, D = 0.06776;

	if (CF > 100000){

		return 3;
	}
	else{
		
		q1 = A + (B * log(CF)) + C * (pow(log10(CF), 2)) + (D * pow(log10(CF), 3));

		return q1;
	
	}

}

double qpH (double pH){

	double q2, A = 0.05421, B = 1.23, C = -0.09873;

	if (pH > 12){
		
		return 3;

	}else if (pH < 2){

		return 2;

	}else {

		q2 = A * pow(pH, (B * pH) + (C * pow(pH, 2))) + 5,213;

		return q2;

	}

}

double qDBO (double DBO){

	double q3, A = 102.6, B = -0.01101;

	if (DBO > 30){
		return 2;
	}else{

		q3 = A * exp(B * DBO);

		return q3;
	}
}

double qNT (double NT){

	double q4, A = 98.96, B = -0.01139, C = -0.006457;

	if (NT > 100){
		return 1;
	}else{

		q4 = A * pow(NT, (B + (C * NT)));

		return q4;

	}
}

double qFT (double FT){

	double q5, A= 213.7, B = -1.680, C = 0.3325;

	if(FT > 10){
		return 1;
	}else{
		q5 = A * exp(B * pow(FT, C));
		return q5;
	}
}

double qDT (double DT){

	double q6, A = 0.0003869, B= 0.1815, C = 0.01081;

	if(DT <= 5){
		return 1;
	}else if (DT > 15)
	{
		return 9;
	}else{

		q6 = 1 / (A * pow(DT + B, 2) + C);

		return q6;
	}
}

double qTU (double TU){

	double q7, A = 97.34, B= -0.01139, C = -0.04917;

	if(TU > 100){
		return 5;
	}else{

		q7 = A * exp((B * TU) + (C * sqrt(TU)));

		return q7;
	}
}

double qST (double ST){

	double q8, A = 80.26, B = -0.00107, C = 0.03009, D = -0.1185;

	if(ST > 500){
		return 32;
	}else{

		q8 = (A * exp((B * ST) + (C * sqrt(ST)))) + D * ST;

		return q8;
	}
}

double qOxi (double Oxi){

	double q9, A = 100.8, B = -106, C = -3745;

	if (Oxi >= 140){
		return 47;
	}else{

		double q9 = A * exp(pow(Oxi + B, 2) / C);

		return q9;
	}
}