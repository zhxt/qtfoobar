

SOURCES = main.cpp object.cpp my_object.cpp
TARGET = testqtss

all: $(TARGET)

$(TARGET) :  $(SOURCES)
	g++  -o $@ $^

clean:
	- rm -rf *.o $(TARGET)
