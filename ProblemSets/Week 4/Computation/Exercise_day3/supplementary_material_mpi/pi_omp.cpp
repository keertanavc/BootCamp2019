#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <mpi.h>

int main(int argc, char *argv[])
{
    int rank, size, tot_count;
    double niter = 1000;
    double x,y;
    int i;
    int count=0;
    double z;
    double pi;
    MPI_Init(&argc, &argv);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    MPI_Comm_size(MPI_COMM_WORLD, &size);
    
    for(i=0; i<niter/size; i++){
        x = (double)random()/RAND_MAX;
        y = (double)random()/RAND_MAX;
        z = sqrt((x*x)+(y*y));
        if (z<=1)
        {
            count += 1;
        }
    }
    MPI_Reduce(&count, &tot_count, 1, MPI_INT, MPI_SUM, 0, MPI_COMM_WORLD);
    if (rank == 0){
       pi = ((double)tot_count/(double)niter)*4.0;
       printf("Pi: %f\n", pi);
    }
    return 0;
}
