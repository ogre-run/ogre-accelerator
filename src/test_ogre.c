#include "ogre_driver.h" // Include the driver header

int main() {
    // Sample matrices
    int matrix_a[MATRIX_SIZE][MATRIX_SIZE] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matrix_b[MATRIX_SIZE][MATRIX_SIZE] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};

    // Initialize the device
    OgreAccelerator* device = ogre_init();

    // Load matrices, multiply and retrieve the result
    ogre_driver_load_matrices(device, matrix_a, matrix_b);
    ogre_driver_multiply(device);
    ogre_driver_get_result(device);

    // Clean up
    ogre_cleanup(device);

    return 0;
}
