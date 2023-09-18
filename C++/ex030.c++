#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int n=10, 			
        i, 			
        id, 			
        peso, 			
        magro_id, magro_peso, 	
        gordo_id, gordo_peso; 	

    printf("Quantidade de bois: ");
    scanf("%d", &n);

    printf("Boi <id>: ");
    scanf("%d", &id);
    magro_id = id;
    gordo_id = id;

    printf("Boi <peso>: ");
    scanf("%d", &peso);
    magro_peso = peso;
    gordo_peso = peso;

    for (i = 1; i < n; i++) {
        printf("Boi <id>: ");
        scanf("%d", &id);
        printf("Boi <peso>: ");
        scanf("%d", &peso);

        if (peso < magro_peso) {
            magro_id = id;
            magro_peso = peso;
        }
        if (peso > gordo_peso) {
            gordo_id = id;
            gordo_peso = peso;
        }
    }

    printf("Gordo: id: %d peso: %d\n", gordo_id, gordo_peso);
    printf("Magro: id: %d peso: %d\n", magro_id, magro_peso);

    system("pause");
    return 0;
}