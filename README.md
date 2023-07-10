# Steganography Image Encoder/Decoder

## Project Overview

This project is implemented in C++ and utilizes a steganography technique that enables users to hide messages within digital images. Steganography is the art of hiding data or information within other unsuspicious data. In this project, it involves encoding messages into an image in such a way that the human eye cannot distinguish it from the original image.

Digital images provide an excellent medium for steganography since humans usually perceive the colors represented by the pixels. However, these pixels contain data that can be manipulated in subtle ways to encode information without affecting the image visibly.

## Features

- **Encode Messages**: Hide a text message within an image by altering the image's pixel data.
- **Decode Messages**: Extract hidden messages from an image that has been encoded using this tool.
- **File I/O**: Read and write images, as well as the hidden text messages.
- **Object-Oriented Programming**: The project is designed using OOP principles for better structure and maintainability.

## Compilation and Execution

This project comes with a UNIX Makefile that helps in easily building and cleaning up the project.

To build the project, run the following command:

```sh
make
```
This will produce an executable file named `proj3.exe`.
To run the executable, use the command:
```sh
./proj3.exe
```

## Usage
- Encoding a Message: To encode a message into an image, you need to specify the image file and the text message as input parameters to the program.

- Decoding a Message: To decode a message from an image, specify the image file, and the program will display the hidden message.

Note: Exact command usage and parameters can be found in the project documentation or by running the program with a help flag (e.g. `./proj3.exe --help`).

## Dependencies
- Ensure you have a C++ compiler installed (e.g., g++).
- This project might rely on external libraries for image processing; refer to the Makefile for specifics.

## Installation
- Clone this repository to your local machine.
- Navigate to the project directory.
- Run make to build the project.
- Execute the program with `./proj3.exe`.

## Contributions
Contributions to this project are welcome. Please fork this repository and create a pull request with your changes. Ensure that your code is clean and well-documented.

## Submission Requirements
For submission, you must include:

- All header files (*.h).
- All source files (*.cpp).
- The UNIX Makefile.
- A typescript file showing your program being built and executed with valgrind.

