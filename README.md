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


