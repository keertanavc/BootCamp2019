#include <stdio.h>
#include <mpi.h>


int main (int argc, char *argv[]){
    int sum, input, my_rank;
    MPI_Init(&argc, &argv);
    MPI_Comm_rank(MPI_COMM_WORLD, &my_rank);

    input = my_rank + 1;
    MPI_Reduce(&input, &sum, 1, MPI_INT, MPI_SUM, 0, MPI_COMM_WORLD);

    if(my_rank == 0){
	printf ("Rank %i:\tSum = %i\n", my_rank, sum);
    }	

    MPI_Finalize();
    return 0;
}
