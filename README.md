# Smart Home System

# Hardwares
- STM32 Blue Pill (STM32F103C8T6)

# IDE
- VIM
- Tmux

# Environment Development
Windows Subsystem for Linux (WSL) is a feature of Windows that allows you to run a Linux environment on your Windows machine, without the need for a separate virtual machine or dual booting. WSL is designed to provide a seamless and productive experience for developers who want to use both Windows and Linux at the same time.

# Toolchains
- GNU Arm Embedded Toolchain
- STlink toolset
- STM32CubeF1
- CMSIS
- STM32CubeMX

# Static Analysis
Cppcheck is a static analysis tool for C/C++ code. It provides unique code analysis to detect bugs and focuses on detecting undefined behaviour and dangerous coding constructs. The goal is to have very few false positives. Cppcheck is designed to be able to analyze your C/C++ code even if it has non-standard syntax (common in embedded projects). 
```
rake cppcheck
```

# Build Tools
Ceedling is a build system for C projects that is something of an extension around Ruby’s Rake (make-ish) build system. Ceedling also makes TDD (Test-Driven Development) in C a breeze by integrating CMock, Unity, and CException -- three other awesome open-source projects you can’t live without if you're creating awesomeness in the C language. Ceedling is also extensible with a handy plugin mechanism.

## Build
```
rake release
```
## Test
```
rake test:all
```

# Program into the target
```
rake flash
```

# Coding Standards
Using clang-format as vim plugin to auto format code with LLVM coding standards.

# Code Coverage
Run code coverage:
```
rake gcov
```
Create code coverage report:
```
rake utils:gcov
```

