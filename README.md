# Mini Shell

**A simple Unix-like command-line shell implemented in C**

---

##  Overview
This project is a basic shell written in C that can:
- Execute system commands (like `ls`, `pwd`, `echo`, etc.)
- Support built-in commands (`cd`, `exit`)
- Optionally handle multiple commands, piping, and I/O redirection.

It’s designed to help understand **process creation**, **system calls**, and **basic shell architecture**.

---

##  Project Structure
```
mini-shell/
├─ src/
│  ├─ main.c         # Entry point, main loop
│  ├─ parser.c       # Tokenizer and command parser
│  └─ executor.c     # Process creation and execution logic
├─ include/
│  └─ shell.h        # Header file for shared definitions
├─ Makefile          # Build instructions
└─ README.md
```

---

##  Features & Roadmap
- [x] Basic command execution with `fork()` and `execvp()`
- [x] Built-in `cd` and `exit`
- [ ] Command chaining with `;`
- [ ] I/O redirection (`>`, `<`)
- [ ] Pipes (`|`)
- [ ] Environment variables

---

##  Learning Goals
- Understand `fork()`, `exec()`, `wait()` system calls
- Work with string parsing and tokenization
- Learn about file descriptors and redirection
- Explore how real shells (bash, zsh) work under the hood

---

##  Tech Used
- **Language:** C (C99)
- **Build:** Makefile
- **Platform:** Linux / macOS (POSIX)

---

## License
This project is licensed under the MIT License — feel free to use and modify for learning purposes.

---

Once this is working, try adding pipes, redirection, and custom prompts to make it feel more like a real shell!
