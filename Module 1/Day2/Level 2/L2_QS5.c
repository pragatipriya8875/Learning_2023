/*

*/

#include <stdio.h>
#include <string.h>

// Function to encode a string
void encode(char* str) {
    int length = strlen(str);

    // Perform character manipulation for encoding
    for (int i = 0; i < length; i++) {
        if (str[i] != ' ') {
            str[i] += 1; // Shift each character by 1
        }
    }
}

// Function to decode an encoded string
void decode(char* str) {
    int length = strlen(str);

    // Perform character manipulation for decoding
    for (int i = 0; i < length; i++) {
        if (str[i] != ' ') {
            str[i] -= 1; // Shift each character back by 1
        }
    }
}

int main() {
    char str[] = "Hello, World!";

    printf("Original String: %s\n", str);

    // Encode the string
    encode(str);
    printf("Encoded String: %s\n", str);

    // Decode the encoded string
    decode(str);
    printf("Decoded String: %s\n", str);

    return 0;
}
