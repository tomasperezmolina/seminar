if [ -d "build" ] 
then
    rm -r build
fi

mkdir build

gcc 1.1.c -o build/1.1.out
gcc 1.2.c -o build/1.2.out
gcc 1.3.c -o build/1.3.out

gcc 2.1.c -o build/2.1.out
gcc 2.2.c -o build/2.2.out

gcc 3.1.c -o build/3.1.out
gcc 3.2.c -o build/3.2.out
gcc 3.3.c -o build/3.3.out

gcc 4.1-2.c -o build/4.1.out
gcc 4.1-2.c -o build/4.2.out -m32 # comment this if using WSL1, it cannot run 32bit binaries