#include <stdio.h>
/*
    NAL: napiši program, ki uporabniku pretvori km/h v m/s in obratno.
    Uporabnik smer pretvorbe izbere z vnosom št. 1 ali 2.
    Implementiraj funckiji (toKmh in toMps) za pretvorbo ter za 
    pretvorbo uporabljaj konstante.
    1 m/s = 3.6 km/h
    
    IZPIS:
    Izberi smer pretvorbe:
    1) kmh -> mps
    2) mps -> kmh
    2
    Vpiši količino: 1
    Kmh: 3.600000
*/

double kmhToMps(double number);
double mpsToKmh(double number);

const double COEFICIENT = 3.6;

int main() {
    int direction;
    double number;

    printf("Izberi smer pretvorbe\n");
    printf("1) kmh -> mps\n");
    printf("2) mps -> kmh\n");

    scanf("%i", &direction);

    printf("Vpiši količino: ");

    scanf("%lf", &number);

    if (direction == 1) {
        printf("Mps: %lf\n", kmhToMps(number));
    } else if (direction == 2) {
        double converted = mpsToKmh(number);
        printf("Kmh: %lf\n", converted);
    } else {
        printf("Napačen vnos!\n");
    }
}

double kmhToMps(double number) {
    return number / COEFICIENT;
}

double mpsToKmh(double number) {
    return number * COEFICIENT;
}