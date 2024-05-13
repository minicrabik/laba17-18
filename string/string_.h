#ifndef LABA17_STRING__H
#define LABA17_STRING__H

#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <ctype.h>

#define ASSERT_STRING(expected, got) assert_string(expected, got, __FILE__, __FUNCTION__, __LINE__)

#define MAX_WORD_SIZE 30
#define MAX_N_WORDS_IN_STRING 100
#define MAX_STRING_SIZE 200

extern char _string_buffer[MAX_STRING_SIZE + 1];

size_t strlen_(const char *begin);

char* find(char *begin, char *end, int ch);

char* findNonSpace(char *begin);

char* findSpace(char *begin);

char* findNonSpaceReverse(char *rbegin, const char *rend);

char* findSpaceReverse(char *rbegin, const char *rend);

int strcmp(const char *lhs, const char *rhs);

char* copy(const char *beginSource, const char *endSource, char *beginDestination);

char* copyIf(char *beginSource, const char *endSource, char *beginDestination, int (*f)(int));

char* copyIfReverse(char *rbeginSource, const char *rendSource, char *beginDestination, int (*f)(int));

char* getEndOfString(char* s)

void assert_string(const char* expected, char* got,
                   char const* file_name, char const* func_name,
                   int line);

#endif //LABA17_STRING__H
