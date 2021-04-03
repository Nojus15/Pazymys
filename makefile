main : v0.5_functions.o
	c++ v0.5.cpp v0.5_functions.o -o Output
compile :
	c++ -c v0.5_functions.cpp
clean :
	del *.o *.exe