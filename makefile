
output: main.o c_render.o
	gcc main.o c_render.o -o output

main.o: main.cpp 
	g++ -c main.cpp

c_render.o: c_render.cpp c_render.h
	g++ -c c_render.cpp

clean: 
	rm *.o output

