## Simple Makefile

**Tags:**<br>
```include-dir``` ```src-dir``` ```obj-dir``` ```auto-resolve-header-dependencies``` ```auto-resolve-object-files``` ```clear-objects```

**Description:**<br>
If we want to start putting our ```.h``` files in an ```include``` directory, our source code in a ```src``` directory, and some local libraries in a ```lib``` directory? Also, can we somehow hide those annoying ```.o``` files that hang around all over the place?<br>
<br>
The answer, of course, is yes.<br>
<br>
The following makefile defines paths to the ```include``` and ```lib``` directories, and places the object files in an ```obj``` subdirectory within the ```src``` directory. It also has a macro defined for any libraries you want to include, such as the math library ```-lm```.<br>

Note that it also includes a rule for cleaning up your source and object directories if you type ```make clean```.<br>
The ```.PHONY``` rule keeps make from doing something with a file named clean.<br>

**Limitations:**<br>
1. Manual header file inclusion in ```_DEPS``` variable
2. Header file path defined in ```INCLUDE``` variable always looks in ```./include``` directory
3. Manual source or object file inclusion in ```_OBJ``` variable

**Features**<br>
- Self descriptive build rules
- Modular compilation:
```
include -- collection of header files
src     -- collections of source codes
obj     -- used by Makefile to generate object code
```
- Remove object files, core files and swap files
- Re-compiling project based on Header file dependencies
- Sample project to test the build
```
    simple-makefile
    │
    ├── Makefile
    │
    ├── include
    │   ├── common.h
    │   ├── file1.h
    │   └── file2.h
    ├── obj
    └── src
        ├── file1.c
        ├── file2.c
        └── main.c
```

**Reference**<br>
https://www.cs.colby.edu/maxwell/courses/tutorials/maketutor<br>

