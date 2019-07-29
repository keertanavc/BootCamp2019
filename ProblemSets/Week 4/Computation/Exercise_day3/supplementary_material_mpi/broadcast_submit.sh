#!/bin/bash

#SBATCH --job-name=broadcast
#SBATCH --output=broadcast.out
#SBATCH --ntasks=5
#SBATCH --partition=broadwl

# Load the default OpenMPI module.
module load openmpi

# Run the hellompi program with mpirun. The -n flag is not required;
# mpirun will automatically figure out the best configuration from the
# Slurm environment variables.
mpirun ./broadcast.exec
