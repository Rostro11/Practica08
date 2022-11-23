CXX = g++
CXXFLAGS = -Wall -std=c++17
######################################
files = *cc
######################################
all: floating-point-arithmetics

programa: $(files)
	@$(CXX) $(CXXFLAGS) -o floating-point-arithmetics $(files)

######################################
.PHONY: clean
######################################
clean:
	@echo "cleaning up the directory..."
	@rm -rf *.o *gch *.out floating-point-arithmetics
######################################
