all:    broadcast.exec allreduce.exec scatter.exec pi_omp.exec

#######################################################################
## Broadcasting
broadcast.exec : broadcast.cpp
	mpicxx -O3 broadcast.cpp -o broadcast.exec
	mpiexec -np 4 broadcast.exec
## Allreduce
allreduce.exec: allreduce.cpp
	mpicxx -O3 allreduce.cpp -o allreduce.exec
	mpiexec -np 5 allreduce.exec

## Scatter
scatter.exec: scatter.cpp
	mpicxx -O3 scatter.cpp -o scatter.exec
	mpiexec -np 3 scatter.exec
## Pi
pi_omp.exec: pi_omp.cpp
	mpicxx -O3 pi_omp.cpp -o pi_omp.exec
	mpiexec -np 3 pi_omp.exec
#######################################################################

clean :
	rm -f *.exec

