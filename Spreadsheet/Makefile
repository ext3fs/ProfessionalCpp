CC	= g++
OBJECTS	= main.o Spreadsheet.o SpreadsheetCell.o SpreadsheetImpl.o
#OBJECTS	= main.o Spreadsheet.o SpreadsheetCell.o
TARGET	= test


.SUFFIXES : .c .o

.c.o :
	$(CC) -std=c++17 -O2 -c -g -Wall $<

$(TARGET) : $(OBJECTS)
	$(CC) -o $(TARGET) $(OBJECTS)
	
clean :
	rm -rf $(TARGET) $(OBJECTS) core*
