cmake_minimum_required(VERSION 3.26)
project(laba17 C)

set(CMAKE_C_STANDARD 11)

add_executable(laba17 main.c
        string/task/getWordExceptLast.h)

add_library(str string/string_.c string/string_.h
        string/task/removeNonLetters
        string/task/removeAdjacentEqualLetters.h
        string/task/reverseWord.h
        string/task/replaceDigitToSpace.h
        string/task/replaceWordToWord.h
        string/task/lexicographicalOrder.h
        string/task/printReversOrdered.h
        string/task/counterPalindromeWords.h
        string/task/rearrangingWords.h
        string/task/changeWordOrdered.h
        string/task/getWordBeforeFirstWordWithA.h
        string/task/findLastCommonWord.h
        string/task/findDuplicateWords .h
        string/task/findAnagramWords.h
        string/task/getWordExceptLast.h
        string/task/findPrecedingWord.h
        string/task/removePalindromeWord.h)

target_link_libraries(laba17 str)