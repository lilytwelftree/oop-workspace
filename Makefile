# Makefile

CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra
TARGET = test_runner
SRCS = main.cpp Invoice.cpp InvoiceTest.cpp
OBJS = $(SRCS:.cpp=.o)
HEADERS = Invoice.h InvoiceTest.h UnitTest.h

.PHONY: all
all: $(TARGET)
	./$(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

.PHONY: test
test: $(TARGET)
	./$(TARGET)

.PHONY: clean
clean:
	rm -f $(TARGET) $(OBJS)

.PHONY: help
help:
	@echo "Available targets:"
	@echo "  all     - Build and run all tests (default)"
	@echo "  test    - Run tests (assumes already built)"
	@echo "  clean   - Remove built files"
	@echo "  help    - Show this help message"