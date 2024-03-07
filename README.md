## Overview
This C++ project implements Huffman Encoding and Decoding, techniques used for lossless data compression and decompression, respectively. Huffman Encoding assigns variable-length codes to input characters, with shorter codes assigned to more frequently occurring characters, resulting in efficient compression. Huffman Decoding reverses this process to reconstruct the original data.

## Features
- Reads a message input from the user.
- Calculates the frequency of each character in the input message.
- Constructs a Huffman tree based on the character frequencies.
- Generates Huffman codes for each character in the input message.
- Compresses the input message using the generated Huffman codes.
- Decompresses the compressed message back to its original form.

## Usage
1. Clone the repository to your local machine.
2. Compile the C++ source code using a C++ compiler (e.g., g++).
3. Run the compiled executable.
4. Follow the prompts to enter a message to compress and decompress.
