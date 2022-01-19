#include <stdio.h>

typedef struct _food {
    char name;
    float  calories;
} food;

typedef struct _diet {
    int totalFood;
    food foods[20];
    float totalCaloric;
} diet;


food createsFood(char name, float calories) {
    food f;
    f.name = name;
    f.calories = calories;
    return f;
}

diet createsDiet() {
    diet d;
    d.totalCaloric = 0;
    d.totalFood = 0;
    return d;
}


float calculateTotalCalories(diet d) {
    int i, totalCalories = 0;
    for(i; i < d.totalFood; i++) {
        totalCalories += d.foods[i].calories;
    }
    return totalCalories;
}

void dietSummary(diet d) {
    int i = 0;
    printf("Alimentos da sua dieta: \n");
    printf("\n");

    for(i; i < d.totalFood; i++) {
        printf("%c\n", d.foods[i].name);
    }

    printf("\n");
    printf("Total de calorias da sua dieta %f\n\n", calculateTotalCalories(d) );
}

int main(void)
{
    int menuChoose;
    diet d = createsDiet();
    char name;
    float calories;

    do {
        printf("1 - Criar dieta. \n");
        printf("2 - Inserir alimento na dieta.\n");
        printf("3 - Imprimir resumo da dieta, com a lista de alimentos e o total de calorias\n");
        printf("4 - Sair\n");
        scanf("%d", &menuChoose);
        printf("----------------------------------\n\n");


        if(menuChoose == 1) {
            d = createsDiet();
        } else {
            if(menuChoose == 2) {
                if(d.totalCaloric >= 1500 || d.totalFood >= 20) {
                    printf("Sua dieta ja atingiu 1500 calorias ou ja tem 20 alimentos \n\n");
                } else {
                    printf("Digite o nome do alimento: ");
                    scanf(" %c", &name);
                    printf("Digite as calorias do alimento: ");
                    scanf("%f", &calories);

                    if(calories > 1500 || (d.totalCaloric + calories) >= 1500) {
                        printf("\n");
                        printf("Sua dieta nao pode ter mais de 1500 calorias insira outro alimento\n\n");

                        printf("Digite o nome do alimento: ");
                        scanf(" %c", &name);
                        printf("Digite as calorias do alimento: ");
                        scanf("%f", &calories);
                    }

                    printf("\n");
                    d.foods[d.totalFood] = createsFood(name, calories);
                    d.totalFood += 1;
                    d.totalCaloric = calculateTotalCalories(d);
                }
            } else if(menuChoose == 3) {
                dietSummary(d);
            }
        }
    } while ((menuChoose >=1 && menuChoose <= 3) && menuChoose != 4);


    return 0;
}
