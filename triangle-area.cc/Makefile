CXX = g++
CXXFLAGS = -Wall -std=c++17
######################################
files = *cc
######################################
all: triangle-area

programa: $(files)
	@$(CXX) $(CXXFLAGS) -o triangle-area $(files)

######################################
.PHONY: clean
######################################
clean:
	@echo "cleaning up the directory..."
	@rm -rf *.o *gch *.out triangle-area
######################################
