CXX = g++
CXXFLAGS = -Wall -std=c++17
######################################
files = *cc
######################################
all: change-case

programa: $(files)
	@$(CXX) $(CXXFLAGS) -o change-case $(files)

######################################
.PHONY: clean
######################################
clean:
	@echo "cleaning up the directory..."
	@rm -rf *.o *gch *.out change-case
######################################
