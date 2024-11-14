#include <stdio.h>
#include <stdlib.h>

#define MATRIX_SIZE 3

// Struct representing the virtual Ogre Accelerator device
typedef struct {
    int matrix_a[MATRIX_SIZE][MATRIX_SIZE];
    int matrix_b[MATRIX_SIZE][MATRIX_SIZE];
    int result[MATRIX_SIZE][MATRIX_SIZE];
} OgreAccelerator;

// Function to load matrices into the device
void ogre_load_matrices(OgreAccelerator* device, int a[MATRIX_SIZE][MATRIX_SIZE], int b[MATRIX_SIZE][MATRIX_SIZE]) {
    for (int i = 0; i < MATRIX_SIZE; i++) {
        for (int j = 0; j < MATRIX_SIZE; j++) {
            device->matrix_a[i][j] = a[i][j];
            device->matrix_b[i][j] = b[i][j];
        }
    }
}

// Perform matrix multiplication and store the result in the device
void ogre_multiply(OgreAccelerator* device) {
    for (int i = 0; i < MATRIX_SIZE; i++) {
        for (int j = 0; j < MATRIX_SIZE; j++) {
            device->result[i][j] = 0;
            for (int k = 0; k < MATRIX_SIZE; k++) {
                device->result[i][j] += device->matrix_a[i][k] * device->matrix_b[k][j];
            }
        }
    }
}

// Function to print the result matrix
void ogre_print_result(OgreAccelerator* device) {
    printf("Result matrix:\n");
    for (int i = 0; i < MATRIX_SIZE; i++) {
        for (int j = 0; j < MATRIX_SIZE; j++) {
            printf("%d ", device->result[i][j]);
        }
        printf("\n");
    }
}
