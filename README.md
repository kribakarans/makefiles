## Makefile

Makefile templates that are suitable for most of the projects.
Each makefile folder has a test project to experiment how it works.
Visit each of the below templates for more understanding.

1. [Simple Makefile:](https://github.com/kribakarans/makefiles/tree/master/simple-makefile)
   - Simple makefile with basic rules
   - Separate directory for object files

2. [Makefile to track header file changes:](https://github.com/kribakarans/makefiles/tree/master/tracking-includes)
    - Track header-file changes used to rebuilt only the modified object files
    - Simple rules and Build directory for object files

3. [Makefile to build shared library:](https://github.com/kribakarans/makefiles/tree/master/shared-library)
    - Build shared library (.so) file
    - Automatic header-file dependency tracking

3. [Makefile to do the static source code analysis with "splint" tool:](https://github.com/kribakarans/makefiles/tree/master/make-lint)
    - Makefile rule to execute splint program to start static source code analysis
    - Splint is a tool for statically checking C programs for security vulnerabilities and coding mistakes.
    - Automatic header-file dependency tracking

## Changelog:
**Sep 24 2021 03:10**
- Added ```shared-library``` module

**Sep 20 2021 01:30**
- Added ```make-lint``` module

**Sep 19 2021 18:05**
- Added ```tracking-includes``` module

**Sep 19 2021 14:45**
- Added ```simple-makefile``` module

