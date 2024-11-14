#ifndef OGRE_DEVICE_H
#define OGRE_DEVICE_H

#define MATRIX_SIZE 3

// Struct representing the virtual Ogre Accelerator device
typedef struct {
    int matrix_a[MATRIX_SIZE][MATRIX_SIZE];
    int matrix_b[MATRIX_SIZE][MATRIX_SIZE];
    int result[MATRIX_SIZE][MATRIX_SIZE];
} OgreAccelerator;

// Functions to interact with the virtual device
void ogre_load_matrices(OgreAccelerator* device, int a[MATRIX_SIZE][MATRIX_SIZE], int b[MATRIX_SIZE][MATRIX_SIZE]);
void ogre_multiply(OgreAccelerator* device);
void ogre_print_result(OgreAccelerator* device);

#endif // OGRE_DEVICE_H
