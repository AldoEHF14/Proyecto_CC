#include <mpi.h>
#include <stdio.h>

int main(int argc, char** argv) {
    // Initialize the MPI environment
    MPI_Init(NULL, NULL);



    // Print off a hello world message
    printf("\nHola mundo.\n");

    // Finalize the MPI environment.
    MPI_Finalize();
}