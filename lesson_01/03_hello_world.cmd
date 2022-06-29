# preprocessing
gcc -E 01_hello_world.c > 03_hello_world_preprocessing.c

# compilation
gcc -c 03_hello_world_preprocessing.c

# linking, make executable file
gcc 03_hello_world_preprocessing.o -o hello.exe