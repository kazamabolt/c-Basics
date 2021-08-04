#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    switch(ch){
        case 'H':
        printf("Hydrogen");
        break;

        case'B':
        printf("Boron");
        break;

        case'C':
        printf("Carbon");
        break;

        case'N':
        printf("Nitrogen");
        break;

        case'O':
        printf("Oxygen");
        break;

        case'F':
        printf("Fluorine");
        break;

        case'P':
        printf("Phosphorus");
        break;

        case'S':
        printf("Sulphur");
        break;

        case'K':
        printf("Potassium");
        break;

        case'V':
        printf("Vanadium");
        break;

        case'Y':
        printf("Yttrium");
        break;

        case'I':
        printf("Iodine");
        break;

        case'W':
        printf("Tungsten");
        break;

        case'U':
        printf("Uranium");
        break;

        default:
        printf("No Match Found");
    }
}
