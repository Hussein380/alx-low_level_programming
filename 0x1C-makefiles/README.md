Project Name: Makefiles

Table of Contents
1. [Description](#description)
2. [File Structure](#file-structure)
3. [Usage](#usage)
4. [Requirements](#requirements)
5. [Contributing](#contributing)
6. [License](#license)



Description <a name="description"></a>

This project contains a series of Makefiles designed to automate the compilation process of C programs. Each Makefile progressively adds more features and complexity, demonstrating the power and flexibility of Makefiles in managing software projects.



File Structure <a name="file-structure"></a>

The project directory is organized as follows:


0x1C-makefiles/
│
├── 0-Makefile
├── 1-Makefile
├── 2-Makefile
├── 3-Makefile
├── 4-Makefile
├── 5-island_perimeter.py
├── 5-main.py
└── 100-Makefile

Each `.c` file referenced in the Makefiles is assumed to exist in the same directory.



Usage <a name="usage"></a>

To use any of the Makefiles, simply run the `make` command followed by the desired target. For example:


make -f 0-Makefile
make -f 1-Makefile
make -f 2-Makefile
make -f 3-Makefile
make -f 4-Makefile
make -f 100-Makefile


Requirements <a name="requirements"></a>

- The system should have `gcc` installed to compile the C programs.
- For Makefile `5-island_perimeter.py`, Python 3 must be installed.


Contributing <a name="contributing"></a>

Contributions are welcome! If you find any issues or have suggestions for improvements, please feel free to open an issue or create a pull request.



License <a name="license"></a>

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

