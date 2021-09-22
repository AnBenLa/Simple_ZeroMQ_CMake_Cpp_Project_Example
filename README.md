Installation on Windows:
========================
It is recommended to use an IDE (CLion, Visual Studio, ...) but everything can be done without as well  

**Requirements**:  
- [git](https://gitforwindows.org/)
- [cmake](https://cmake.org/download/)
- compiler and cmake generator i.e. [MSVC](https://visualstudio.microsoft.com/de/downloads/), [MinGW-w64](https://sourceforge.net/projects/mingw-w64/)  
  
**Note**: One way to install MinGW 64:
- install [MSYS2](https://www.msys2.org/)  
- open the newly installed MSYS2 Shell
- install MinGW 64 using the MSYS2 Shell  
```
pacman -S mingw-w64-x86_64-gcc
```  
- add the folder MSYS2_root/mingw64/bin (i.e. C:\msys64\mingw64\bin) to your PATH environment variable  
   
You can also follow this [tutorial](https://www.youtube.com/watch?v=f3Ion00p78M) to install MinGW 64.    
  
  
**Step 0**: open the windows console (cmd) and go into the folder where the project files should be saved
  
**Step 1**: clone the repository 
```
git clone --recursive https://github.com/AnBenLa/ZeroMQ_CMake_Cpp_Project_Example
```  
**Note**: this will copy the necessary project files into the current directory.    
  
**Step 2**: create a build folder in the project folder
```
cd ZeroMQ_CMake_Cpp_Project_Example
mkdir build
```  

**Step 4**: inside the build folder generate the cmake project
```
cd build
cmake ..
```

**Step 5**: make the project and execute the application
```
cmake --build . --target zmq_server
./zmq_server.exe
```

**Note**: Depending on the used cmake tool the the created zmq_server.exe might be in a Debug or Release subdirectory. 
