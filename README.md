# WebAssembly Demo

This project demonstrates how to compile C code to WebAssembly using Emscripten and run it in a browser.

## Installation

### Install Emscripten

   ```bash
   # 1. Clone the Emscripten SDK repository:
   git clone https://github.com/emscripten-core/emsdk.git
   # 2. Navigate to the `emsdk` directory:
   cd emsdk
   # 3. Install the latest version of Emscripten:
   ./emsdk install latest
   # 4. Activate the latest version:
   ./emsdk activate latest
   # 5. Set up the environment:
   # On Linux/macOS:
   source ./emsdk_env.sh
   # On Windows:
   emsdk_env.bat
   ```

### Clone the wasm-demo Repository

   ```bash
   # 1. Clone this repository:
   git clone https://github.com/TienYoung/wasm-demo.git
   # 2. Navigate to the project directory:
   cd wasm-demo
   ```

## Build

Compile the C code to WebAssembly using the following command:
```bash
emcc ./main.c -o hello.js -sEXPORTED_FUNCTIONS="['_main','_say_my_name']"
```

## Run

1. Start a local HTTP server:
   ```bash
   python -m http.server 8000
   ```
2. Open your browser and navigate to: http://localhost:8000/index.html

3. Press F12 open the dev tools, navigate to the console, and execute the following function:
   ```javascript
   say_my_name();
   ```

You should now see the WebAssembly demo running in your browser.
