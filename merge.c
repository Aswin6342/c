#include <stdio.h>

int main(void) {
    int a[100], b[100], c[200];
    int n1, n2, n3;
    int i, j, k, temp;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter %d elements: ", n1);
    for (i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    printf("Enter %d elements: ", n2);
    for (i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    for (i = 0; i < n1 - 1; i++) {
        for (j = 0; j < n1 - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < n2 - 1; i++) {
        for (j = 0; j < n2 - 1 - i; j++) {
            if (b[j] > b[j + 1]) {
                temp = b[j];
                b[j] = b[j + 1];
                b[j + 1] = temp;
            }
        }
    }

    i = 0;
    j = 0;
    k = 0;

    while (i < n1 && j < n2) {
        if (a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }

    while (i < n1)
        c[k++] = a[i++];

    while (j < n2)
        c[k++] = b[j++];

    n3 = n1 + n2;

    printf("Merged array:\n");
    for (i = 0; i < n3; i++)
        printf("%d\n", c[i]);

    return 0;
}

