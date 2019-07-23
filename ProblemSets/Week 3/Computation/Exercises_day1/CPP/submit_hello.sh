#!/bin/bash -I
#SBATCH --ntasks=1
#SBATCH --time=00:02:00
#SBATCH --output=hello.out
#SBATCH --job-name=hello
./hidiho.exec
