all: proj3.exe

CheckUserOneIntInput.o: CheckUserOneIntInput.h
	g++ -std=c++98 -g -Wall -c CheckUserOneIntInput.cpp -o CheckUserOneIntInput.o

CheckUserTwoIntInput.o: CheckUserTwoIntInput.h
	g++ -std=c++98 -g -Wall -c CheckUserTwoIntInput.cpp -o CheckUserTwoIntInput.o

ColorClass.o: ColorClass.cpp ColorClass.h constants.h
	g++ -std=c++98 -g -Wall -c ColorClass.cpp -o ColorClass.o

MessgFileClass.o: constants.h MessgFileClass.cpp MessgFileClass.h ColorClass.o
	g++ -std=c++98 -g -Wall -c MessgFileClass.cpp -o MessgFileClass.o

PpmImgClass.o: constants.h PpmImgClass.cpp CheckUserTwoIntInput.o ColorClass.o MessgFileClass.o
	g++ -std=c++98 -g -Wall -c PpmImgClass.cpp -o PpmImgClass.o

proj3.o: constants.h CheckUserOneIntInput.o ColorClass.o PpmImgClass.o MessgFileClass.o PpmImgClass.o proj3.cpp
	g++ -std=c++98 -g -Wall -c proj3.cpp -o proj3.o

proj3.exe:  proj3.o CheckUserOneIntInput.o CheckUserTwoIntInput.o ColorClass.o MessgFileClass.o PpmImgClass.o
	g++ -std=c++98 -g -Wall proj3.o CheckUserOneIntInput.o CheckUserTwoIntInput.o ColorClass.o MessgFileClass.o PpmImgClass.o -o proj3.exe
	
clean:
	rm -f *.o *.exe