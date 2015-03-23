#bin bash sh
g++ test.c -o test -fopenmp -lpthread
time ./test > 1M.primes
sort -g 1M.primes 1Msorted.primes
