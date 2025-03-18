#include <stdio.h>

int sum_of_squares(int num) {
    int sum = 0;
    while (num > 0) {
        int rem = num % 10;
        sum += rem * rem;
        num /= 10;
    }
    return sum;
}

int is_happy_number(int number) {
    int slow = number, fast = number;

    do {
        slow = sum_of_squares(slow);
        fast = sum_of_squares(sum_of_squares(fast));

        if (fast == 1) return 1;

    } while (slow != fast);

    return 0;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (is_happy_number(num))
        printf("%d is a Happy Number\n", num);
    else
        printf("%d is not a Happy Number\n", num);

    return 0;
}
