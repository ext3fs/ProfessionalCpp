CC	= g++
OBJECTS	= SpreadsheetTest.o Spreadsheet.o SpreadsheetCell.o SpreadsheetImpl.o
TARGET	= test


.SUFFIXES : .cpp .o

.cpp.o :
	$(CC) -std=c++17 -O2 -c -g -Wall $<

$(TARGET) : $(OBJECTS)
	$(CC) -o $(TARGET) $(OBJECTS)
	
clean :
	rm -rf $(TARGET) $(OBJECTS) core*
