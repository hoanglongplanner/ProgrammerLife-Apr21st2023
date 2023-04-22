#include <stdio.h>

#define K_HELLO_WORLD "Hello World Constant Define"

char str_helloworld[] = "Hello World String Char Array \n";

int main(){
    printf("Hello World Normal \n");
    printf(str_helloworld);
    printf(K_HELLO_WORLD);
    return 0;
}