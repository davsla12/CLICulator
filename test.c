#include "test.h"
#include <string.h>
#include <stdio.h>

bool in(const char *text, const char *D[]) {
    for (int i = 0; D[i] != NULL; i++) {
        if (strcmp(text, D[i]) == 0) {
            return true;
        }
    }
    return false;
}


void get_input(char *buffer, int size) {
    if (fgets(buffer, size, stdin) != NULL) {
        // Odebereme '\n', pokud tam je
        size_t len = strlen(buffer);
        if (len > 0 && buffer[len - 1] == '\n') {
            buffer[len - 1] = '\0';
        }
    }
}
