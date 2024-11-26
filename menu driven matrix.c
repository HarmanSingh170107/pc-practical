#include <stdio.h>

void input_matrix(int matrix[10][10], int rows, int cols) {
    printf("Enter elements for a %dx%d matrix:\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void print_matrix(int matrix[10][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void add_matrices(int matrix1[10][10], int matrix2[10][10], int result[10][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

void subtract_matrices(int matrix1[10][10], int matrix2[10][10], int result[10][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
}

void multiply_matrices(int matrix1[10][10], int matrix2[10][10], int result[10][10], int rows1, int cols1, int rows2, int cols2) {
    if (cols1 != rows2) {
        printf("Matrices cannot be multiplied\n");
        return;
    }
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

void lower_triangular_matrix(int matrix[10][10], int result[10][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (j > i) {
                result[i][j] = 0;
            } else {
                result[i][j] = matrix[i][j];
            }
        }
    }
}

int main() {
    int matrix1[10][10], matrix2[10][10], result[10][10];
    int rows1, cols1, rows2, cols2;
    int choice;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Addition of 2 matrices\n");
        printf("2. Subtraction of 2 matrices\n");
        printf("3. Multiplication of 2 matrices\n");
        printf("4. Lower Triangular Matrix\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 5) {
            printf("Exiting...\n");
            break;
        }

        printf("Enter number of rows and columns for the first matrix: ");
        scanf("%d %d", &rows1, &cols1);
        input_matrix(matrix1, rows1, cols1);

        if (choice != 4) {
            printf("Enter number of rows and columns for the second matrix: ");
            scanf("%d %d", &rows2, &cols2);
            input_matrix(matrix2, rows2, cols2);
        }

        if (choice == 1) {
            if (rows1 == rows2 && cols1 == cols2) {
                add_matrices(matrix1, matrix2, result, rows1, cols1);
                printf("Result of Addition:\n");
                print_matrix(result, rows1, cols1);
            } else {
                printf("Matrices must have the same dimensions for addition.\n");
            }
        } else if (choice == 2) {
            if (rows1 == rows2 && cols1 == cols2) {
                subtract_matrices(matrix1, matrix2, result, rows1, cols1);
                printf("Result of Subtraction:\n");
                print_matrix(result, rows1, cols1);
            } else {
                printf("Matrices must have the same dimensions for subtraction.\n");
            }
        } else if (choice == 3) {
            if (cols1 == rows2) {
                multiply_matrices(matrix1, matrix2, result, rows1, cols1, rows2, cols2);
                printf("Result of Multiplication:\n");
                print_matrix(result, rows1, cols2);
            } else {
                printf("Matrices cannot be multiplied. The number of columns of the first matrix must equal the number of rows of the second matrix.\n");
            }
        } else if (choice == 4) {
            lower_triangular_matrix(matrix1, result, rows1, cols1);
            printf("Lower Triangular Matrix:\n");
            print_matrix(result, rows1, cols1);
        } else {
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
