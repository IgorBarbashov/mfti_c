# preprocessing
gcc -E 01_hello_world.c > 01_hello_world_preprocessing.c

# compilation
gcc -c 01_hello_world_preprocessing.c

# linking, make executable file
gcc 01_hello_world_preprocessing.o -o hello.exe