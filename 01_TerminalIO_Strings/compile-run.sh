g++ 1_HelloWorld.cpp

if [ $? -eq 0 ];
then
	./a.out
else
	echo "compilation failed!"
fi