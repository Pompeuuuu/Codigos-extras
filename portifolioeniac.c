#include <stdio.h>

int main() {
    char animal_type[50];
    int animal_quant;
    float animal_food, animal_feed;
    
    printf("Digite o nome do animal: ");
    scanf("%s", animal_type);
    
    printf("Digite a quantidade de animais: ");
    scanf("%d", &animal_quant);
    
    printf("Digite o preço por quilo de comida: ");
    scanf("%f", &animal_food);
    
    printf("Digite a quantidade que este animal come no dia: ");
    scanf("%f", &animal_feed);
    
    // Quantidade de que os animais comem no dia
    float animal_kiloday = animal_quant * animal_feed;
    
    // Quantidade do mês de alimento
    float animal_meskilo = animal_kiloday * 30;
    
    // Preço do mês de alimento
    float animal_mesprince = animal_meskilo * animal_food;
    
    printf("\nOs seus %d %s comem essa quantidade de quilos no dia %.2f\n", animal_quant, animal_type, animal_kiloday);
    printf("E consomem %.2f kg no mês!\n", animal_meskilo);
    printf("Que custa R$%.2f no mês!\n", animal_mesprince);
    
    return 0;
}
    
