#include <stdio.h>

int main() {
    float m1, m2, m3, m4, m5;
    float sum, percentage;

    // Input marks
    printf("Enter marks of 5 subjects:\n");
    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);

    // Calculate sum
    sum = m1 + m2 + m3 + m4 + m5;

    // Calculate percentage (assuming each subject is out of 100)
    percentage = (sum / 500) * 100

    return 0;
}