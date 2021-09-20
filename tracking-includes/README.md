## Makefile: Automatic #include dependency tracking

**Tags:**<br>
```-MM gcc flag usage```  ```tracking-headerfile-changes``` ```modularity```

**Description:**<br>

If we want *.o to be rebuilt whenever a header file changes instead of full re-build, the GCC compiler can assemble a list of dependencies for you by passing ```-MM``` option. This will generate the dependency file by looking at the #include lines in the source files. This is done with the ‘-M’ option  variants of the compiler.

**Features:**
- Track header-file changes which rebuilt only the modified objects
- Support for source code modularity
- Self descriptive build rules
- Object files created by the GCC will be placed in ```OBJ_DIR```. The directory structure is similar to ```SRC_DIR```.
```
headerfile-tracking
│
├── a.out             << Target binary
├── include           << Common Header files location
│   └── common.h
├── Makefile
├── obj              << GCC generated object and dependency file location
│   └── src             Directory structure is similar to SRC
│       ├── file1.d
│       ├── file1.o
│       ├── file2.d
│       ├── file2.o
│       ├── main.d
│       └── main.o
├── README.md
└── src              << Source code location
    ├── file1.c
    ├── file1.h
    ├── file2.c
    ├── file2.h
    └── main.c

4 directories, 15 files
```

**Reference**<br>
https://makefiletutorial.com/#makefile-cookbook<br>
http://nuclear.mutantstargoat.com/articles/make<br>
https://newbedev.com/makefile-header-dependencies<br>
https://spin.atomicobject.com/2016/08/26/makefile-c-projects<br>

