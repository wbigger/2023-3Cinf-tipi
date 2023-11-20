#include <stdbool.h>
#include <stdio.h>
#include <assert.h>

#include "fisica.h"
#include "matematica.h"

int main() {
    // il secondo parametro è 2 ma il compilatore non 
    // mi dà nessun warning perché è una conversione "safe"
    float v = calcola_velocita(20.0F,2);
    printf("La velocita' e' %0.2f m/s\n",v);

    // in questo caso la conversione da float a int non è safe,
    // devo forzare la conversione, questa operazione si chiama
    // "casting"
    int c = somma((int)2.1,2);
    printf("la somma e' %d\n",c);

    // bool non è un tipo base, le costanti "true" e "false"
    // vengono convertiti automaticamente in 1 e 0
    bool k = true;
    printf("il carattere e' %c (%d, 0x%x)\n",x,x,x);
    
    // char è rappresentato internamente con un intero a 8 bit
    // Posso assegnare direttamente un intero oppure 
    // usare i singoli apici 
    char x = 'F'; // equivalente ad assegnare il valore 70
    // stampo la variabile x in 3 modi diversi: 
    // come carattere, come decimale e come esadecimale
    printf("il carattere e' %c (%d, 0x%x)\n",x,x,x);
    return 0;
}