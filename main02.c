#include<stdio.h>
#include<ctype.h>
#include"header02.h"

int main() {
    char str1[100] = "I am Abhay Singh";
    char str2[100] = "I Am From AF1";
    char str3[100] = "This Is My Assignment";
    char arr[5][100] = {"list", "count", "array", "data type", "pow"};
    
    printf("Our string : %s\n", str1);
    to_uppercase(str1);
    printf("In Uppercase: %s\n", str1);

    printf("\nOur str2: %s\n", str2);
    to_lowercase(str2);
    printf("In Lowercase: %s\n", str2);

    printf("\nOur str3: %s\n", str3);
    int vowels = count_vowels(str3);
    printf("Number of vowels in str3 : %d\n", vowels);

    printf("\nOur str3 : \n");
    reverse_string(str3);
    printf("Reverse of str3: %s\n", str3);

    printf("\nOriginal array of strings:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\n", arr[i]);
    }

    sort_strings(arr, 5);
    printf("\nSorted array of strings:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\n", arr[i]);
    }

    char str4[100] = "Python java C Html";
    printf("\nOur str4: %s\n", str4);
    reverse_words(str4);
    printf("Words reversed: %s\n", str4);

    return 0;
}
