#include <stdio.h>
// Referenciacion: Es la obtencion de la direccion de una variable

int main() {
    int dir_var = 15;
    //printf("La direccion de dir_var es: %d\n", dir_var);
    printf("La direccion de dir_var es: %p \n", &dir_var);
    return 0;
}
  