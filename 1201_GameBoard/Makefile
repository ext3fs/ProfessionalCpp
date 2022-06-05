CC	= g++
OBJECTS	= GameBoard.o GameBoardTest.o
TARGET	= test


.SUFFIXES : .cpp .o

.cpp.o :
	$(CC) -std=c++17 -O2 -c -Wall $<

$(TARGET)	: $(OBJECTS)
	$(CC) -o $(TARGET) $(OBJECTS)
	
clean :
	rm -rf $(TARGET) $(OBJECTS) core*
