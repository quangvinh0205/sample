#include <stdio.h>
#include <string.h>
#include <cstdlib>

char* addLargeNumbers(char num1[], char num2[]) {
    int len1 = strlen(num1);
    int len2 = strlen(num2);

  
    int maxLen = (len1 > len2) ? len1 : len2;
    char* result = (char*)malloc((maxLen + 2) * sizeof(char)); 

    int carry = 0; 
    int i = len1 - 1;
    int j = len2 - 1;
    int k = 0;

    while (i >= 0 || j >= 0 || carry > 0) {
        int digit1 = (i >= 0) ? num1[i] - '0' : 0;
        int digit2 = (j >= 0) ? num2[j] - '0' : 0;

        int sum = digit1 + digit2 + carry;
        result[k++] = sum % 10 + '0'; 
        carry = sum / 10; 
        i--;
        j--;
    }

    for (int m = 0, n = k - 1; m < n; m++, n--) {
        char temp = result[m];
        result[m] = result[n];
        result[n] = temp;
    }
    result[k] = '\0'; 

    return result;
}

int main() {
    int num_tests;
    scanf("%d", &num_tests);
    for (int i = 0; i < num_tests; i++) {
        char num1[502], num2[502];
        scanf("%s", num1);
        scanf("%s", num2);

        char* sum = addLargeNumbers(num1, num2);
        printf("%s\n", sum);

        free(sum);
    }

    return 0;
}