# GNU Makefile

TARGET=a.out

GCC     =  gcc
SRC     = ./src
ODIR    = ./obj
LDIR    = ./libs
LIBS    = -lm
INCLUDE = ./include
CFLAGS  = -I$(INCLUDE) -Wall

RM      = rm -f

# Resolve header files
_DEPS   = common.h file1.h file2.h
DEPS    = $(patsubst %,$(INCLUDE)/%,$(_DEPS))

# Resolve object files
_OBJ    = main.o file1.o file2.o
OBJ     = $(patsubst %,$(ODIR)/%,$(_OBJ))

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
