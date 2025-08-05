#include <stdio.h>
#include <stdint.h>

uint32_t flipBits(uint32_t n) {
    return ~n;
}

int main(){
    uint32_t input;
    printf("Enter an unsigned 32-bit integer (0 to 4294967295): ");
    scanf("%u", &input);

    uint32_t result = flipBits(input);
    printf("Flipped result: %u\n", result);
    return 0;
}