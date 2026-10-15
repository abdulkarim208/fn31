#include <stdio.h>

int main(){
    FILE *f = fopen("madhiya.txt", "r");

    char qator[100];
    while (fgets(qator, 100, f) != NULL){
        printf("%s", qator);
    }
}
