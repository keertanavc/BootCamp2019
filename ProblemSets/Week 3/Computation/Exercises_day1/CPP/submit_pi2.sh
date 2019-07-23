#!/bin/bash
#SBATCH --job-name=pi2
#SBATCH --output=pi2.out
#SBATCH --ntasks=1

./pi2.exec
