#include <stdio.h>
#include <stdlib.h>
/**
 * is_palindrome - Checks if a number is a palindrome.
 * @num: The number to be checked.
 * Return: 1 if the number is a palindrome, 0 otherwise.
 */
int is_palindrome(int num) {
    int reversed = 0;
    int original = num;

    while (num != 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }

    return original == reversed;
}

/**
 * find_largest_palindrome - Finds the largest palindrome made from the product of two 3-digit numbers.
 *
 * Return: The largest palindrome found.
 */
int find_largest_palindrome() {
    int largest_palindrome = 0;
    int i, j;

    for (i = 100; i < 1000; i++) {
        for (j = 100; j < 1000; j++) {
            int product = i * j;
            if (is_palindrome(product) && product > largest_palindrome) {
                largest_palindrome = product;
            }
        }
    }

    return largest_palindrome;
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main() {
    int result = find_largest_palindrome();

    FILE *fp = fopen("102-result", "w");
    if (fp != NULL) {
        fprintf(fp, "%d", result);
        fclose(fp);
    } else {
        printf("Error opening file.\n");
        return 1;
    }

    return 0;
}

