CXX = g++
CXXFLAGS = -Wall -std=c++17
######################################
files = *cc
######################################
all: random_numbers

programa: $(files)
	@$(CXX) $(CXXFLAGS) -o random_numbers $(files)

######################################
.PHONY: clean
######################################
clean:
	@echo "cleaning up the directory..."
	@rm -rf *.o *gch *.out random_numbers
######################################
