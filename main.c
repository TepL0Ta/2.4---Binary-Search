#include <stdio.h>

void main() {
    int lenght;
    int arr[10000];

    scanf("%d", &lenght);

    for (int i = 0; i < lenght; i++) {
        scanf_s("%d", &arr[i]);
    }

    int required;
    scanf_s("%d", &required);

    int lower = 0;
    int upper = lenght;
    int found = 0;

    while (lower <= upper) {
        const int mid = (lower + upper) / 2;

        if (arr[mid] == required) {
            printf("%d", mid);
            found = 1;
            break;
        }

        if (arr[mid] < required) {
            lower = mid + 1;
        } else {
            upper = mid - 1;
        }
    }
    if (!found) {
        printf("notfound");
    }
}
