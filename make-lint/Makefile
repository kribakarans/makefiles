
# GNU Makefile

TARGET    =  a.out

# Makefile specifics
RM        = -rm -f

# Compiler flags
GCC       =  clang
INCLUDE   = ./include
GCC_FLAGS = -Wall -g3 -I$(INCLUDE)

# Splint flags
LINT        =  splint
LINT_FLAGS  = -standard +posixlib
LINT_FLAGS += -DSPLINT_FLAG_ENABLED

SRC_DIR   = ./src
OBJ_DIR   = ./obj

# Collect all .c source code
SRC = $(wildcard src/*.c)
#SRC = src/main.c src/file1.c src/file2.c # manually adding source code

# Build object filename to store in OBJ_DIR
OBJ = $(SRC:%.c=$(OBJ_DIR)/%.o)

# Create .d files containing dependencies
DEP = $(OBJ:%.o=%.d)

# Build rules starts here
all: info $(TARGET)

info:
	@printf "\nProject dependencies:"
	@printf "\nTARGET     =  $(TARGET)"
	@printf "\nCOMPILER   =  $(GCC)"
	@printf "\nGCC-FLAGS  = $(GCC_FLAGS)"
	@printf "\nOBJ_DIR    = $(OBJ_DIR)"
	@printf "\nINCLUDE    = $(INCLUDE)"
	@printf "\nDEPS       = $(DEP)"
	@printf "\nSOURCES    = $(SRC)\n"
	@printf "\nCompiling source files:\n"

lint:
	@printf "\nStatic code analysis:"
	@printf "\nLINT       =  $(LINT)"
	@printf "\nLINT_FLAGS = $(LINT_FLAGS)"
	@printf "\nSOURCE     =  $(SRC)\n"
	@$(LINT) $(LINT_FLAGS) -I$(INCLUDE) $(SRC)

# Binary file as Target
$(TARGET) : $(OBJ)
	@printf "\nLinking object files:\n"
	$(GCC) $(GCC_FLAGS) $^ -o $@
	@printf "\nBuild completed.\n\n"

# Include all .d files
-include $(DEP)

# Build target for every single object file.
# The potential dependency on header files is covered by calling `-include $(DEP)`.
# The -MMD flags in GCC create dependency(.d) file with same name as .o file
$(OBJ_DIR)/%.o : %.c
	@mkdir -p $(@D)
	$(GCC) $(GCC_FLAGS) -MMD -c $< -o $@

clean :
	$(RM) $(TARGET) $(OBJ) $(DEP)

.PHONY : clean lint

#EOF
