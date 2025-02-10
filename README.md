# Tic-Tac-Toe-GUI
Old Tic-Tac-Toe game but make it GUI
To configure the current environment for the current terminal session run:
```
cd C:\Users\idasu\Desktop\Folders\College\McGill\Programming Projects\TicTacToe\Tic-Tac-Toe-GUI\emsdk

emsdk_env.bat
```
After that, you can verify if Emscripten is working by running:
```
emcc -v
```

Compiling:
try:
```
emcc board.cpp gameplay.cpp -o tictactoe.js -s WASM=1
```
or if you're including emscripten.h in your code:
```
emcc board.cpp gameplay.cpp -o tictactoe.js -s WASM=1 -I C:\Users\idasu\Desktop\Folders\College\McGill\Programming Projects\TicTacToe\Tic-Tac-Toe-GUI\emsdk\upstream\emscripten\system\include
```