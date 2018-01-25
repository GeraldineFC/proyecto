// Fernandez Corona Geraldine Concepcion B
// Proyecto Final

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    
    char * tiposPan[][2] = { {"pan integral", "5.00"}, {"pan casero", "3.00"} };
    char * proteina[][2] = { {"jamon", "3.50"}, {"pollo", "3.00"}, {"salmon", "4.00"}, {"queso", "2.00"} };
    char * vegetales[][2] = { {"jitomate", "1.00"}, {"cebolla", "1.50"}, {"lechuga", "2.00"}, {"pimiento", "1.00"}, {"aguacate", "3.00"}, {"perejil", "2.00"}};
    char * complementos[][2] = { {"tocino", "4.00"}, {"nueces", "2.00"}, {"pimienta", "2.00"}, {"mayonesa", "2.00"}, {"mostaza", "1.50"}, {"alfalfa", "2.00"}};
    char * subTotal[4][2];
    char seleccion = ' ';
    
    //Imprimir menu
    printf("MENU PRINCIPAL\n");
    printf("Pan: \n");
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("%-15s $", tiposPan[i][j]);
        }
        printf("\n");
    }
    printf("\nProteinas: \n");
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 2; j++){
            printf("%-15s $", proteina[i][j]);
        }
        printf("\n");
    }
    printf("\nVegetales: \n");
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 2; j++){
            printf("%-15s $", vegetales[i][j]);
        }
        printf("\n");
    }
    printf("\nComplementos: \n");
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 2; j++){
            printf("%-15s $",complementos[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    
    //Seleccion de pan
    printf("Selecciona el tipo de Pan:\n");
    scanf("%12[0-9a-zA-Z ]", &seleccion);
    if(strcmp(&seleccion, tiposPan[0][0]) == 0){
        subTotal[0][0] = tiposPan[0][0];
        subTotal[0][1] = tiposPan[0][1];
    }
    else if(strcmp(&seleccion, tiposPan[1][0]) == 0){
        subTotal[0][0] = tiposPan[1][0];
        subTotal[0][1] = tiposPan[1][1];
    }
    else{
        printf("Le Pondremos Pan Integral: \n");
        subTotal[0][0] = "pan integral";
        subTotal[0][1] = "5.00";
    }
    
    //Seleccion de Proteina
    printf("Seleccione la proteina: \n");
    scanf("%s", &seleccion);
    if(strcmp(&seleccion, proteina[0][0]) == 0){
        subTotal[1][0] = proteina[0][0];
        subTotal[1][1] = proteina[0][1];
    }
    else if (strcmp(&seleccion, proteina[1][0]) == 0){
        subTotal[1][0] = proteina[1][0];
        subTotal[1][1] = proteina[1][1];
    }
    else if(strcmp(&seleccion, proteina[2][0]) == 0){
        subTotal[1][0] = proteina[2][0];
        subTotal[1][1] = proteina[2][1];
    }
    else if(strcmp(&seleccion, proteina[3][0]) == 0){
        subTotal[1][0] = proteina[3][0];
        subTotal[1][1] = proteina[3][1];
    }
    else{
        printf("¡No Tendra Proteina!\n");
        subTotal[1][0] = "Sin Proteina";
        subTotal[1][1] = "0.00";
    }
    
    //Seleccion de Vegetales
    printf("Seleccione los Vegetales: \n");
    scanf("%s", &seleccion);
    if(strcmp(&seleccion, vegetales[0][0]) == 0){
        subTotal[2][0] = vegetales[0][0];
        subTotal[2][1] = vegetales[0][1];
    }
    else if(strcmp(&seleccion, vegetales[1][0]) == 0){
        subTotal[2][0] = vegetales[1][0];
        subTotal[2][1] = vegetales[1][1];
    }
    else if(strcmp(&seleccion, vegetales[2][0]) == 0){
        subTotal[2][0] = vegetales[2][0];
        subTotal[2][1] = vegetales[2][1];
        
    }
    else if(strcmp(&seleccion, vegetales[3][0]) == 0){
        subTotal[2][0] = vegetales[3][0];
        subTotal[2][1] = vegetales[3][1];
    }
    else if(strcmp(&seleccion, vegetales[4][0]) == 0){
        subTotal[2][0] = vegetales[4][0];
        subTotal[2][1] = vegetales[4][1];
    }
    else if(strcmp(&seleccion, vegetales[5][0]) == 0){
        subTotal[2][0] = vegetales[5][0];
        subTotal[2][1] = vegetales[5][1];
    }
    else{
        printf("No tendra Vegetales!\n");
        subTotal[2][0] = "Sin Vegetales";
        subTotal[2][1] = "0.00";
    }
    
    //Seleccion de Complementos
    printf("Seleccione los complementos: \n");
    scanf("%s", &seleccion);
    if(strcmp(&seleccion, complementos[0][0]) == 0){
        subTotal[3][0] = complementos[0][0];
        subTotal[3][1] = complementos[0][1];
    }
    else if(strcmp(&seleccion, complementos[1][0]) == 0){
        subTotal[3][0] = complementos[1][0];
        subTotal[3][1] = complementos[1][1];
    }
    else if(strcmp(&seleccion, complementos[2][0]) == 0){
        subTotal[3][0] = complementos[2][0];
        subTotal[3][1] = complementos[2][1];
    }
    else if(strcmp(&seleccion, complementos[3][0]) == 0){
        subTotal[3][0] = complementos[3][0];
        subTotal[3][1] = complementos[3][1];
    }
    else if(strcmp(&seleccion, complementos[4][0]) == 0){
        subTotal[3][0] = complementos[4][0];
        subTotal[3][1] = complementos[4][1];
    }
    else if(strcmp(&seleccion, complementos[5][0]) == 0){
        subTotal[3][0] = complementos[5][0];
        subTotal[3][1] = complementos[5][1];
    }
    else{
        printf("¡No tendra Complementos!\n");
        subTotal[3][0] = "Sin Complementos";
        subTotal[3][1] = "0.00";
    }
    
    //Ticket
    printf("\nSu lista completa:\n");
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 2; j++){
            printf("%-15s $", subTotal[i][j]);
        }
        printf("\n");
    }
    

    //Convertir char a float para sumar el total
    float total = 0;
    for(int i = 0; i < 4; i++){
        total += atof(subTotal[i][1]);
    }
    
    printf("\nPrecio total : $%-15.2f\n", total);
    
    return 0;
}
