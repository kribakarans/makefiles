## Makefile: Static soure-code analysis

**Tags:**<br>
```splint-usage```  ```make-lint```

**Description:**<br>
Splint is a tool for statically checking C programs for security vulnerabilities and coding mistakes.
Install Splint package by ```sudo apt install splint``` in debian flavours.
Run ```make lint``` to state static code analysis.

**Features:**
- Do static source code analysis with Splint tool
- Auto resolve header file changes
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
https://splint.org<br>
https://github.com/oclint<br>
https://docs.oracle.com/cd/E19504-01/802-5880/make-53/index.html<br>

