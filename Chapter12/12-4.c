#include <stdio.h>
#define ROW 3
#define COL 3

void addMatrix(int (*a)[COL], int (*b)[COL], int (*result)[COL]) {
    int i, j;
    for (i = 0; i < ROW; i++) {
        for (j = 0; j < COL; j++) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
}

int main() {
    int a[ROW][COL] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int b[ROW][COL] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int result[ROW][COL];

    addMatrix(a, b, result);

    printf("Resultant Matrix:\n");
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
