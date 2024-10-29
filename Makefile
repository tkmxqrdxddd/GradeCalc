# Compiler
CXX = g++

# Qt includes and libraries
QT_INCLUDES = $(shell pkg-config --cflags Qt5Widgets)
QT_LIBS = $(shell pkg-config --libs Qt5Widgets)

# Source files
SOURCES = main.cpp mainwindow.cpp

# Header files
HEADERS = mainwindow.h

# Object files
OBJECTS = $(SOURCES:.cpp=.o)

# Target executable
TARGET = myapp

# Build rules
all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) -o $(TARGET) $(OBJECTS) $(QT_LIBS)

%.o: %.cpp $(HEADERS)
	$(CXX) -c $< -o $@ $(QT_INCLUDES)

clean:
	rm -f $(OBJECTS) $(TARGET)

.PHONY: all clean