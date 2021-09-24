
# GNU Makefile

# Final binary name
TARGET  =  libtest.so

# Compiler flags
CC      =  gcc
INCLUDE = -I./include
CFLAGS  = -fPIC -g3 -Wall $(INCLUDE)
LDFLAGS = -shared

SRCDIR  = ./src
OBJDIR  = ./obj
TESTDIR = ./test

# Makefile specifics
RM      =  rm -f

# Collect all .c source code
SRCS = $(wildcard src/*.c) # Automatically fetch .c code
#SRC = src/main.c src/file1.c src/file2.c # manually adding source code

# Build object filename to store in OBJDIR
OBJS  = $(SRCS:%.c=$(OBJDIR)/%.o)

# Create .d files containing dependencies
DEPS  = $(OBJS:%.o=%.d)

all: info $(TARGET) #test

info:
	@printf "\nBuild dependencies:"
	@printf "\nTARGET   =  $(TARGET)"
	@printf "\nCOMPILER =  $(CC)"
	@printf "\nCFLAGS   = $(CFLAGS)"
	@printf "\nINCLUDE  = $(INCLUDE)"
	@printf "\nDEPS     = $(DEPS)"
	@printf "\nOBJECTS  = $(OBJS)\n"
	@printf "\nCompiling source files:\n"

$(TARGET): $(OBJS)
	@printf "\nLinking object files:\n"
	$(CC) $(LDFLAGS) -o $@ $^
	@printf "\nBuild completed.\n\n"

# Include all .d files
-include $(DEPS)

# Build target for every single object file.
# The potential dependency on header files is covered by calling `-include $(DEPS)`.
# The -MMD flags in GCC create dependency(.d) file with same name as .o file
$(OBJDIR)/%.o : %.c
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -MMD -c $< -o $@

clean:
	$(RM) $(TARGET) $(OBJS) $(DEPS) core
	$(MAKE) -C test clean

test:
	$(MAKE) -C test

.PHONY: all clean test

#EOF
