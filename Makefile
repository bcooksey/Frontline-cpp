########################################################
# Compilation vars

# Name/type of compiler
CC = g++

# Compiling flags to be used
CFLAGS = -c -Wall

# Name of executable
APP_NAME = frontline.exe

########################################################
# Source files (with extension)
#
SOURCES = main.cpp

########################################################
# Libraries to be linked at compile-time
#
LIBS = 

########################################################
# Included directories
#
INCLUDES = -I/. -I./include

########################################################
# Make rules
#
OBJECTS = $(addsuffix .o, $(basename $(SOURCES)))

all: $(SOURCES) $(APP_NAME)
	
$(APP_NAME): $(OBJECTS)
	$(CC) $(OBJECTS) -o $@ $(LIBS) 

%.o: %.cxx %.h
	$(CC) $(CFLAGS) $(INCLUDES) $*.cxx -o $@

%.o: %.c %.h
	$(CC) $(CFLAGS) $(INCLUDES) $*.c -o $@

%.o: %.cpp %.h
	$(CC) $(CFLAGS) $(INCLUDES) $*.cpp -o $@

tidy:
	-rm -f *~ *.o src/*~ src/*.o include/*~

clean: tidy
	-rm -f $(APP_NAME)

remake: clean all

run: all
	./$(APP_NAME)

