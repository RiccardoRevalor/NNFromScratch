# Variables

CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra -Werror -O1
LDFLAGS = 

# Targets
TARGET = layerExampleProgram

#Sources
SOURCES = $(wildcard *.cpp)		#all .cpp files in the current directory

#Objects
OBJECTS = $(SOURCES:.cpp=.o)	#take all .cpp files and replace .cpp with .o in the name

#Rules
all: $(TARGET)					#default target


#Compile final program
$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)


#Compile all .cpp files into .o files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@


#Clean up
clean:
	rm -f $(TARGET) $(OBJECTS)


#Debug Rule
debug:
	$(CXX) $(CXXFLAGS) -g $(SRC) -o $(TARGET)

#Rebuild
rebuild: clean all