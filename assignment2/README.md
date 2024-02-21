This zip contains the checker.c and coordinator.c program files. 

The *checker*: The checker program returns exit status 1 if the dividend is divisible by the divisor and exit status 0 if it is not divisible

The *coordinator*: coordinator program responsible for forking the parent process, waiting for the child process to exit, and passes the checker program to the child process to execute. 

The *Makefile*: Make all creates the executables checker.o and coordinator.o.  The program is run using the coordinator.o executable along with the five integer arguments, the first being the divisor and the last four being the dividends. 