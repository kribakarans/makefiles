
## Makefile: Shared library

**Tags:**<br>
```shared-library``` ```headerfile-dependency``` ```test-app```

**Description**
Makefile to build a C shared library.

**Features:**
- Build ```libtest.so``` shared library
- Test project to test the compiled shared library
- Do ```make``` in ```test``` directory to build test application
- ```test.out``` uses ```libtest.so``` at runtime

**Other features:**
- Track header-file changes which rebuilt only the modified objects
- Module compilation
- Self descriptive build rules

```
shared-library/
├── include
│   └── common.h      << Library header files
├── libtest.so        << Shared library
├── Makefile
├── obj               << Library object files
│   └── src
│       ├── file1.d
│       ├── file1.o
│       ├── file2.d
│       └── file2.o
├── README.md
├── src               << Library source code
│   ├── file1.c
│   ├── file1.h
│   ├── file2.c
│   └── file2.h
└── test              << Test application
    ├── Makefile
    ├── test.c
    ├── test.d
    ├── test.o
    └── test.out

5 directories, 17 files
```
**Reference**<br>
http://codechunks.org/blog/2012/10/24/a-makefile-for-the-simplest-shared-library<br>
https://www.topbug.net/blog/2019/10/28/makefile-template-for-a-shared-library-in-c-with-explanations<br>

