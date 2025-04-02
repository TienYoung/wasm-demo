# WebAssembly Demo

This project demonstrates how to compile C code to WebAssembly using Emscripten and run it in a browser.

## Installation

### Install Emscripten
1. Clone the Emscripten SDK repository:
   ```bash
   git clone https://github.com/emscripten-core/emsdk.git
   ```
2. Navigate to the `emsdk` directory:
   ```bash
   cd emsdk
   ```
3. Install the latest version of Emscripten:
   ```bash
   ./emsdk install latest
   ```
4. Activate the latest version:
   ```bash
   ./emsdk activate latest
   ```
5. Set up the environment:
   - On Linux/macOS:
     ```bash
     source ./emsdk_env.sh
     ```
   - On Windows:
     ```cmd
     emsdk_env.bat
     ```

### Clone the wasm-demo Repository
1. Clone this repository:
   ```bash
   git clone https://github.com/TienYoung/wasm-demo.git
   ```
2. Navigate to the project directory:
   ```bash
   cd wasm-demo
   ```

## Build

Compile the C code to WebAssembly using the following command:
```bash
emcc ./main.c -o hello.js -sEXPORTED_FUNCTIONS=['_main','_say_my_name']
```

## Run

1. Start a local HTTP server:
   ```bash
   python -m http.server 8000
   ```
2. Open your browser and navigate to:
   ```
   http://localhost:8000/index.html
   ```

You should now see the WebAssembly demo running in your browser.
