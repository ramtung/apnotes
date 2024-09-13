CC_EXEC=g++
CC_FLAGS=-c

CC= ${CC_EXEC} ${CC_FLAGS}

BUILD_DIR=build

executable: ${BUILD_DIR}/date.o ${BUILD_DIR}/person.o ${BUILD_DIR}/test.o
	${CC_EXEC} ${BUILD_DIR}/date.o ${BUILD_DIR}/person.o ${BUILD_DIR}/test.o -o ${BUILD_DIR}/bdapp

${BUILD_DIR}/test.o: test.cpp date.hpp person.hpp
	${CC} test.cpp -o ${BUILD_DIR}/test.o

${BUILD_DIR}/person.o: person.cpp date.hpp person.hpp
	${CC} person.cpp -o ${BUILD_DIR}/person.o

${BUILD_DIR}/date.o: date.cpp date.hpp
	${CC} date.cpp -o ${BUILD_DIR}/date.o

clean:
	rm -rf ${BUILD_DIR} && mkdir -p ${BUILD_DIR}