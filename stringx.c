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
