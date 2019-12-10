CXX = g++
CXXFLAGS = -std=c++0x

OBJS = main.o Menu.o Item.o Vampire.o WereWolf.o Frankenstein.o Medusa.o MainCharacter.o HomeSpace.o ClueSpace.o MonsterSpace.o SpaceShip.o

SRCS = main.cpp Menu.cpp Item.cpp Vampire.cpp WereWolf.cpp Frankenstein.cpp Medusa.cpp MainCharacter.cpp HomeSpace.cpp ClueSpace.cpp MonsterSpace.cpp SpaceShip.cpp

HEADERS = Character.hpp Space.hpp Menu.hpp Item.hpp Vampire.hpp WereWolf.hpp Frankenstein.hpp Medusa.hpp MainCharacter.hpp HomeSpace.hpp ClueSpace.hpp MonsterSpace.hpp SpaceShip.hpp

matrix: ${OBJS} ${HEADERS}
	${CXX} ${CXXFLAGS} ${OBJS} -o MakeFile

${OBJS}: ${SRCS}
	${CXX} ${CXXFLAGS} -c $(@:.o=.cpp)

clean: 
	rm *.o MakeFile
