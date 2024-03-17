#include <stdio.h>
#include <string.h>

int main(void) {
    char destination[20] = "Hello, ";
    const char *source = "world!";

    size_t new_length = strlcat(destination, source, sizeof(destination));

    printf("Concatenated string: %s\n", destination);
    printf("New length: %zu\n", new_length);

    return 0;
}