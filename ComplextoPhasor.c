// Code by Arush Sinha for a function to turn complex values to phasor form.
//Relevant libraries
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// A struct of type Phasor is made, this has two double parts magnitude and phase in degrees and rad. Double precision is used because it's advantageous for precision, and we can afford cost in hardware.
//For smaller hardware rich devices( even though everything has double, we  might try and do generic programming using void pointer.

typedef struct {
    double magnitude;
    double radians;
    double degrees;
} Phasor;

// Function to convert a complex number (real, imag) to phasor (magnitude, phase)
Phasor toPhasor(double real, double imag) {
    Phasor result;
    result.magnitude = sqrt(real * real + imag * imag);  // Magnitude (amplitude)
    result.radians = atan2(imag, real);                    // Phase (angle in radians)
    result.degrees= (180/M_PI)*(atan2(imag, real));// Phase Degrees
    return result;
}
// Test code for the function
/*
int main() {
    double real = 3.0;
    double imag = 4.0;

    Phasor phasor = toPhasor(real, imag);

    printf("Phasor: Magnitude is  = %.2f, and Phase = %.2f  radians,or %.2f degrees \n", phasor.magnitude, phasor.radians, phasor.degrees);
    return 0;
}
*/

