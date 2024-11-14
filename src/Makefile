# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -std=c99

# Target executable
TARGET = test_ogre

# Source and object files
SRC = ogre_device.c test_ogre.c
OBJ = $(SRC:.c=.o)

# Default target
all: $(TARGET)

# Build target
$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

# Compile .c files into .o files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up object files and executable
clean:
	rm -f $(OBJ) $(TARGET)

# Phony targets
.PHONY: all clean
