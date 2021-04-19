main : v1.0_functions.o
	c++ v1.0.cpp v1.0_functions.o -o Output
compile :
	c++ -c v1.0_functions.cpp
clean :
	del *.o *.exe