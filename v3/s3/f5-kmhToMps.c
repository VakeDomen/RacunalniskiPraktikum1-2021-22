#include <stdio.h>
/*
    NAL: napiši program, ki uporabniku pretvori km/h v m/s in obratno.
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

double toMps(double num);
double toKmh(double num);

const double COEFICIENT = 3.6;

int main() {
    printf("Izberi smer pretvorbe:\n1) kmh -> mps\n2) mps -> kmh\n");
    // 
    int direction;
    scanf("%i", &direction);

    double ammount;
    printf("Vpiši količino: ");
    scanf("%lf", &ammount);

    if (direction == 1) {
        printf("Mps: %lf\n", toMps(ammount));
    } else if (direction == 2) {
        printf("Mps: %lf\n", toKmh(ammount));
    } else {
        printf("Invalid choice!\n");
    }
}

double toMps(double num) {
    return num / COEFICIENT;
}

double toKmh(double num) {
    return num * COEFICIENT;
}