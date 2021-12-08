#include <stdio.h>

/*
    NAL: napiši program, ki uporabniku pretvori hm/h v m/s in obratno.
    Uporabnik smer pretvorbe izbere z vnosom št. 1 ali 2.
    Implementiraj funckiji (toKmh in toMps) za pretvorbo ter za pretvorbo uporabljaj konstante.
    1 m/s = 3.6 km/h
    
    IZPIS:
    Izberi smer pretvorbe:
    1) kmh -> mps
    2) mps -> kmh
    2
    Vpiši količino: 1
    Kmh: 3.600000
*/
/*
    deklaracija funkcij
*/
double kmhToMps(double num);
double mpsToKmh(double num);

/*
    inicializacija globalnih konstant
*/ 
const double coeficient = 3.6;
/*
    inicializacija funkcij
*/ 
int main() {
    int conversionDirection;
    double ammount;
    double result;

    printf("Izberi smer pretvorbe:\n");
    printf("1) kmh -> mps\n");
    printf("2) mps -> kmh\n");
    scanf("%i", &conversionDirection);
    printf("Vpiši količino: ");
    scanf("%lf", &ammount);
    

    if (conversionDirection == 1) {
        result = kmhToMps(ammount);
        printf("Mps: %lf\n", result);    
    } else {
        result = mpsToKmh(ammount);
        printf("Kmh: %lf\n", result);    
    }
}

double kmhToMps(double num) {
    return num / coeficient;
}

double mpsToKmh(double num) {
    return num * coeficient;
}