#include <stdlib.h>
#include <string.h>
#include "stringx.h"

char * strcpyx(const char * src) {

    if (src == NULL) {
        return NULL;
    }

    char * dest = malloc(strlen(src));
    if (dest != NULL) {
        dest = strcpy(dest, src);
    }

    return dest;
}

char * strncpyx(const char * src, size_t n) {

    if (src == NULL) {
        return NULL;
    }

    char * dest = calloc(n, sizeof(char));
    if (dest != NULL) {
        strncpy(dest, src, n);
    }

    return dest;
}
