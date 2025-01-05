# WebAssembly Simple App

A simple WebAssembly application that performs basic arithmetic operations (addition, subtraction, multiplication, and division) using a C program compiled to WebAssembly. The app demonstrates how to interact with WebAssembly in the browser by passing command-line arguments.

## Features
- Perform addition, subtraction, multiplication, and division.
- Interact with the WebAssembly module using JavaScript.
- Example of passing arguments to the main function in WebAssembly.

## Project Structure

```
WebAssembly-Simple-App/  
├── .git/              # Git repository  
├── LICENSE            # License file  
├── README.md          # Project documentation  
├── build.sh           # Script to build the project  
├── calculator.c       # C code for WebAssembly  
├── calculator.js      # JavaScript glue code generated by Emscripten  
├── calculator.wasm    # WebAssembly binary file  
├── index.html         # Web interface for the calculator  
├── script.js          # Custom JavaScript logic
```

## Requirements

- [Emscripten](https://emscripten.org/docs/getting_started/downloads.html)
- A modern web browser

## Building the Project

1. Install Emscripten by following the instructions on the [Emscripten website](https://emscripten.org/docs/getting_started/downloads.html).
2. Clone the repository:
   ```bash
   git clone https://github.com/BaseMax/WebAssembly-Simple-App.git
   cd WebAssembly-Simple-App
   ```

3. Run the build script to compile the C code into WebAssembly:
```bash
./build.sh
```

## Running the Project

Once the project is built, you can serve the files using a local web server. If you have Python installed, you can use:

```bash
python3 -m http.server
or
python -m http.server
```

Open the browser and navigate to `http://localhost:8000` to view the app.

Open the browser console to see the output of the arithmetic operations performed by the WebAssembly module.

### Example Usage

The app runs the following operations in the console:

```
Addition: runMainWithArgs(5, 3, 0); // Result: 8
Subtraction: runMainWithArgs(10, 4, 1); // Result: 6
Multiplication: runMainWithArgs(6, 7, 2); // Result: 42
Division: runMainWithArgs(8, 2, 3); // Result: 4
```

### License

This project is licensed under the MIT License - see the LICENSE file for details.

Copyright 2025, Max Base
