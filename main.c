#include <stdio.h>

int main() {
    printf("Module Ready!\n");
    return 0;
}

const char* say_my_name() {
    return "hello, wasm!";
}