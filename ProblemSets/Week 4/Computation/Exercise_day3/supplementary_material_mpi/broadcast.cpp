#include <stdio.h>
#include <mpi.h>

int main(int argc, char *argv[])
{
    int rank, data=123;
    MPI_Init(&argc, &argv);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
  
    if (rank==0) {
	data=144;
	/*
        printf("enter a value:\n");
        fflush(stdout);
        scanf ("%d",&data);
	*/
	}
    
    MPI_Bcast(&data, 1, MPI_INT, 0, MPI_COMM_WORLD);

    /* broadcast the value of data of rank 0 to all ranks */

    printf("I am rank %i and the value is %i\n", rank, data);
    MPI_Finalize();
    return 0;
}
