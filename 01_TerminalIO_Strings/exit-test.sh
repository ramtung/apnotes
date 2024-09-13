g++ ExitTest.cpp && ./a.out
if [ $? -eq 0 ];
then
	echo "That was a good person!"
else
	echo "Toby is the worst!"
fi
