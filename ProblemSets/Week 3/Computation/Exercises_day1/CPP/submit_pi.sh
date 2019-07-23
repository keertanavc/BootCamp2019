#!/bin/bash
#SBATCH --job-name=pi
#SBATCH --output=pi.out
#SBATCH --ntasks=1
 
./pi.exec
