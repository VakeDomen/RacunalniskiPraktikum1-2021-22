#include <stdio.h> 
int main (){ 
    int stevilo; 
    printf("vnesite poljubno stevilo!"); 
    scanf("%i", &stevilo); 
    for(int i = 0; i <= stevilo; i++){ 
        printf("%d", i); 
        printf(" "); 
    } 
} 
