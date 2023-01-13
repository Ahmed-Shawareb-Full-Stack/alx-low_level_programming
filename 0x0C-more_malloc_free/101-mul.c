#include <stdio.h>
#include <stdlib.h>

void check_args(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Error\n");
        exit(98);
    }
    for (int i = 1; i < argc; i++) {
        for (int j = 0; argv[i][j]; j++) {
            if (!isdigit(argv[i][j])) {
                printf("Error\n");
                exit(98);
            }
        }
    }
}

int mul(int num1, int num2) {
    return num1 * num2;
}

int main(int argc, char *argv[]) {
    check_args(argc, argv);
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);
    int result = mul(num1, num2);
    printf("%d\n", result);
    return 0;
}
