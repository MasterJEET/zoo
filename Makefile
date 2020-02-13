CPPFLAGS += -I./inc -I./inc/animals
CXXFLAGS += -g -Wall -Wextra -std=c++11

OBJS += zoo.o observable.o zookeeper.o zooannouncer.o wolf.o cat.o dog.o elephant.o hippo.o lion.o rhino.o tiger.o animal.o

all	: zoo

clean	:
	rm -f *.o zoo

test	: zoo
	./zoo > dayatthezoo.out

zoo	: $(OBJS) main.cpp
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) $^ -o $@

%.o	: ./src/%.cpp ./inc/%.h
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -c $<

%.o	: ./src/*/%.cpp ./inc/*/%.h
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -c $<

%.o	: ./src/*/*/%.cpp ./inc/*/*/%.h
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -c $<
