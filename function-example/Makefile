CXX = g++
CXXFLAGS = -Wall -std=c++17
######################################
files = *cc
######################################
all: function-example

programa: $(files)
	@$(CXX) $(CXXFLAGS) -o function-example $(files)

######################################
.PHONY: clean
######################################
clean:
	@echo "cleaning up the directory..."
	@rm -rf *.o *gch *.out function-example
######################################
