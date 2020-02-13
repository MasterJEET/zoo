INC_DIR := ./inc
SRC_DIR := ./src

CPPFLAGS += -I$(INC_DIR)
CXXFLAGS += -std=c++11

OBJS += zoo.o zookeeper.o wolf.o cat.o dog.o elephant.o hippo.o lion.o rhino.o tiger.o pachyderm.o feline.o canine.o animal.o
OBJS += walk.o sprint.o run.o
OBJS += grunt.o trumpet.o growl.o snarl.o roar.o meow.o bark.o howl.o

all	: zoo

clean	:
	rm -f *.o zoo

zoo: $(OBJS) main.cpp
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) $^ -o $@

%.o	: $(SRC_DIR)/%.cpp $(INC_DIR)/%.h
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -c $<
