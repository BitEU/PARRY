# Makefile for PARRY - Faithful C recreation from LISP
# Compiles all components into a single executable

CC = gcc
CFLAGS = -Wall -Wextra -std=c99 -O2 -g
LDFLAGS = -lm

# Target executable
TARGET = parry_complete

# Source files
SOURCES = main_complete.c \
          parry_complete.c \
          parry_dictionary.c \
          parry_synonyms.c \
          parry_idioms.c \
          parry_flares.c

# Object files
OBJECTS = $(SOURCES:.c=.o)

# Header files
HEADERS = parry_complete.h

# Default target
all: $(TARGET)

# Link object files to create executable
$(TARGET): $(OBJECTS)
	$(CC) $(OBJECTS) -o $(TARGET) $(LDFLAGS)
	@echo ""
	@echo "========================================="
	@echo "PARRY built successfully!"
	@echo "Run with: ./$(TARGET)"
	@echo "========================================="

# Compile source files to object files
%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

# Clean build artifacts
clean:
	rm -f $(OBJECTS) $(TARGET) parry_conversation.log
	@echo "Cleaned build artifacts"

# Run the program
run: $(TARGET)
	./$(TARGET)

# Parse LISP data and regenerate C data files
parse:
	python parse_lisp_data.py

# Full rebuild from LISP sources
rebuild: clean parse all

.PHONY: all clean run parse rebuild
