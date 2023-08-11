#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* special_words[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"};

int is_special_number(char* str) {
    // Check for leading zeros
    if (str[0] == '0' && str[1] != '\0') {
        return 0;
    }
    // Check if all characters are digits
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < '0' || str[i] > '9') {
            return 0;
        }
    }
    return 1;
}

int get_special_number(char* str) {
    int num_words = sizeof(special_words) / sizeof(special_words[0]);
    char* num_str = (char*)malloc(strlen(str) + 1);
    strcpy(num_str, str);
    char* word;
    char* saveptr;
    int num = 0;
    // Split the string into words and look up the corresponding number
    word = strtok_r(num_str, " ", &saveptr);
    while (word != NULL) {
        for (int i = 0; i < num_words; i++) {
            if (strcmp(word, special_words[i]) == 0) {
                num = num * 10 + i;
                break;
            }
        }
        word = strtok_r(NULL, " ", &saveptr);
    }
    free(num_str);
    return num;
}

int compare_special_numbers(const void* a, const void* b) {
    char* str_a = *(char**)a;
    char* str_b = *(char**)b;
    int num_a = get_special_number(str_a);
    int num_b = get_special_number(str_b);
    if (num_a < num_b) {
        return -1;
    } else if (num_a > num_b) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    char shuffled_str[100];
    char* str_arr[100];
    char* str;
    char* saveptr;
    int i = 0;
    // Get input from the user
    printf("Enter the shuffled string: ");
    scanf("%[^\n]%*c", shuffled_str);
    // Split the shuffled string into words and store them in an array
    str = strtok_r(shuffled_str, " ", &saveptr);
    while (str != NULL) {
        str_arr[i] = str;
        i++;
        str = strtok_r(NULL, " ", &saveptr);
    }
    // Sort the array of words by the corresponding special numbers
    qsort(str_arr, i, sizeof(char*), compare_special_numbers);
    // Concatenate the sorted words into the smallest special number
    char smallest_num[100];
    smallest_num[0] = '\0';
    for (int j = 0; j < i; j++) {
        strcat(smallest_num, str_arr[j]);
    }
    // Output the smallest special number
    printf("The smallest special number is %s\n", smallest_num);
    return 0;
}
