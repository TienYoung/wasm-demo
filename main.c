#include <stdio.h>

int main() {
    printf("hello, wasm!\n");
    return 0;
}

const char* say_my_name() {
    return "WebAssembly";
}