main : v0.3_functions.o
	c++ v0.3.cpp v0.3_functions.o -o Output
compile :
	c++ -c v0.3_functions.cpp
clean :
	del *.o *.exe