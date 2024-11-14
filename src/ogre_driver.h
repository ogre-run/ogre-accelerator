#include <stdlib.h>
#include "ogre_device.h" // Include the virtual device header

// Initialize the device (allocate memory, set up any needed resources)
OgreAccelerator* ogre_init() {
    OgreAccelerator* device = malloc(sizeof(OgreAccelerator));
    return device;
}

// Send matrices to the virtual device
void ogre_driver_load_matrices(OgreAccelerator* device, int a[MATRIX_SIZE][MATRIX_SIZE], int b[MATRIX_SIZE][MATRIX_SIZE]) {
    ogre_load_matrices(device, a, b); // Use the virtual device's load function
}

// Execute multiplication on the virtual device
void ogre_driver_multiply(OgreAccelerator* device) {
    ogre_multiply(device);
}

// Retrieve the result
void ogre_driver_get_result(OgreAccelerator* device) {
    ogre_print_result(device);
}

// Clean up the device (free allocated memory)
void ogre_cleanup(OgreAccelerator* device) {
    free(device);
}
