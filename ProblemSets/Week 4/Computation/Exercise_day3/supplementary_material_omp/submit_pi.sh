#!/bin/bash
#SBATCH --job-name=serial_pi
#SBATCH --output=serial_pi.out

# this job requests node
#SBATCH --ntasks=2
# and request 8 cpus per task for OpenMP threads
#SBATCH --cpus-per-task=8
# this job will run in the broadwl partition on Midway1
# set OMP_NUM_THREADS to the number of --cpus-per-task we asked for
export OMP_NUM_THREADS=$SLURM_CPUS_PER_TASK
# Run the process with mpirun. Notice -n is not required. mpirun will
# automatically figure out how many processes to run from the slurm options
### openmp executable
./serial_pi.exec
