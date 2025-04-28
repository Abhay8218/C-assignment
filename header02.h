#include <ctype.h> // Only for toupper, tolower

// Helper function to get string length
int string_length(const char str[]) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

// Helper function to copy strings
void string_copy(char a[],const char b[]) {
    int i = 0;
    while (b[i] != '\0') {
        a[i] = b[i];
        i++;
    }
    a[i] = '\0';
}

// Helper function to compare two strings
int string_compare(const char str1[], const char str2[]) {
    int i = 0;
    while (str1[i]!='\0' && str2[i]!='\0'){
        if (str1[i] != str2[i]) {
            return (str1[i]-str2[i]);
        }
        i++;
    }
    return (str1[i]-str2[i]);
}

// Converts a string to uppercase
void to_uppercase(char str[]){
    int i = 0;
    while (str[i]!='\0'){
        str[i] = toupper((unsigned char)str[i]);
        i++;
    }
}

// Converts a string to lowercase
void to_lowercase(char str[]){
    int i=0;
    while (str[i]!='\0'){
        str[i] = tolower((unsigned char)str[i]);
        i++;
    }
}

// Counts the number of vowels in a string
int count_vowels(const char str[]){
    int count = 0;
    int i = 0;
    while (str[i]!='\0') {
        char c = tolower((unsigned char)str[i]);
        if (c=='a' || c=='e' || c=='i'|| c=='o' ||c=='u') {
            count++;
        }
        i++;
    }
    return count;
}

// Reverses the characters of a string
void reverse_string(char str[]) {
    int len = string_length(str);
    for (int i = 0;i<len/2;i++) {
        char temp = str[i];
        str[i]=str[len-1-i];
        str[len - 1 - i]=temp;
    }
}

// Sorts an array of strings alphabetically
void sort_strings(char arr[][100], int n) {
    char temp[100];
    for (int i = 0;i<n-1;i++) {
        for (int j =i+1;j<n;j++){
            if (string_compare(arr[i],arr[j])>0) {
                string_copy(temp,arr[i]);
                string_copy(arr[i],arr[j]);
                string_copy(arr[j],temp);
            }
        }
    }
}

// Reverses the order of words in a string
void reverse_words(char str[]) {
    char words[100][100];
    int word_count = 0,i=0,j=0,k=0;

    // Split the words manually
    while (1) {
        if (str[i]!=' '&&str[i]!='\0') {
            words[word_count][j++]=str[i];
        } else {
            words[word_count][j]='\0';
            word_count++;
            j = 0;
            if (str[i]=='\0')
                break;
        }
        i++;
    }

    // Reconstruct the string in reverse order
    k = 0;
    for(i = word_count-1;i>=0;i--) {
        int l=0;
        while(words[i][l]!='\0') {
            str[k++]=words[i][l++];
        }
        if (i>0) {
            str[k++] =' ';
        }
    }
    str[k] = '\0';
}
