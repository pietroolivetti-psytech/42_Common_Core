#ifndef LIBFT_TESTS_H
# define LIBFT_TESTS_H

# include <stddef.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
#include <string.h>
#include <ctype.h> 
#include <limits.h>

#define check(condition) \
    if (condition) { \
        printf("[OK]✅ Test passed (line %d)\n", __LINE__); \
    } else { \
        printf("[FAIL]❌ Test failed (line %d)\n", __LINE__); \
    }

#endif