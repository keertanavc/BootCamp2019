ll:    normalize_vec.exec dot_prod.exec serial_pi.exec

#######################################################################
## Example 6
6a.integration_pi_reduction.exec: 6a.integration_pi_reduction.cpp
	g++ 6a.integration_pi_reduction.cpp -fopenmp -o 6a.integration_pi_reduction.exec


#######################################################################
## EXERCISE 1
normalize_vec.exec : normalize_vec.cpp
	g++ normalize_vec.cpp -fopenmp -o normalize_vec.exec

## EXERCISE 2
dot_prod.exec : dot_prod.cpp
	g++ dot_prod.cpp -fopenmp -o dot_prod.exec

## EXERCISE 3
serial_pi.exec : serial_pi.cpp
	g++ serial_pi.cpp -fopenmp -o serial_pi.exec

#######################################################################

clean :
	rm -f *.exec

