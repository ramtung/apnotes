a.out: date.o person.o test.o
	g++ date.o person.o test.o

test.o: test.cpp date.hpp person.hpp
	g++ -c test.cpp

person.o: person.cpp date.hpp person.hpp
	g++ -c person.cpp

date.o: date.cpp date.hpp
	g++ -c date.cpp

clean:
	rm *.o a.out