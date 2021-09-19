# GNU Makefile

# Tags: include-dir src-dir auto-resolve-header-dependencies auto-resolve-object-files clear-objects

# Description:
# If we want to start putting our .h files in an include directory, our source code in a src directory, and some local
# libraries in a lib directory? Also, can we somehow hide those annoying .o files that hang around all over the place?
#
# The answer, of course, is yes.

# The following makefile defines paths to the include and lib directories, and places the object files in an obj subdirectory
# within the src directory. It also has a macro defined for any libraries you want to include, such as the math library -lm.

# Note that it also includes a rule for cleaning up your source and object directories if you type make clean.
# The .PHONY rule keeps make from doing something with a file named clean.

# Limitations:
# 1. Manual header file inclusion in _DEPS variable 
#    Solution: Replace _DEPS variable with _DEPS=*.h
# 2. Manual source or object file inclusion in _OBJ variable

# https://www.cs.colby.edu/maxwell/courses/tutorials/maketutor

TARGET=a.out

GCC  =  gcc
SRC  = ./src
ODIR = ./obj
LDIR = ./libs
LIBS = -lm
INCLUDE = ./include
CFLAGS  = -I$(INCLUDE) -Wall

RM = rm -f

# Resolve header files
_DEPS = common.h file1.h file2.h
DEPS  = $(patsubst %,$(INCLUDE)/%,$(_DEPS))

# Resolve object files
_OBJ = main.o file1.o file2.o
OBJ  = $(patsubst %,$(ODIR)/%,$(_OBJ))

# Build start here
all: info $(TARGET)

info:
	@printf "\nProject dependencies:"
	@printf "\nTARGET     =  $(TARGET)"
	@printf "\nCOMPILER   =  $(GCC)"
	@printf "\nCFLAGS     = $(CFLAGS)"
	@printf "\nODIR       = $(ODIR)"
	@printf "\nLDIR       = $(LDIR)"
	@printf "\nLIBS       = $(LIBS)"
	@printf "\nINCLUDE    = $(INCLUDE)"
	@printf "\nDEPS       = $(DEPS)"
	@printf "\nOBJ        = $(OBJ)\n"
	@printf "\nCompiling source files:\n"

$(ODIR)/%.o: $(SRC)/%.c $(DEPS)
	$(GCC) -c -o $@ $< $(CFLAGS)

# Target : Dependencies
$(TARGET): $(OBJ)
	@printf "\nLinking object files:\n"
	$(GCC) -o $@ $^ $(CFLAGS) $(LIBS)
	@printf "\nBuild completed.\n\n"

.PHONY: clean

clean: CORE_FILES=core
clean: OBJ_FILES=$(ODIR)/*.o #OBJ
clean: SWAP_FILES=$(INCLUDE)/*~ $(ODIR)/*~
clean:  
	$(RM) $(TARGET) $(OBJ_FILES) $(SWAP_FILES) $(CORE_FILES)

#EOF
