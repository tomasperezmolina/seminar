if [ -d "build" ] 
then
    rm -r build
fi

mkdir build
mkdir build/1.memory-manipulation

gcc 1.memory-manipulation/1.1.c -o build/1.memory-manipulation/1.1.out
gcc 1.memory-manipulation/1.2.c -o build/1.memory-manipulation/1.2.out
gcc 1.memory-manipulation/1.3.c -o build/1.memory-manipulation/1.3.out
gcc 1.memory-manipulation/1.4.c -w -o build/1.memory-manipulation/1.4.out

gcc 1.memory-manipulation/2.1.c -o build/1.memory-manipulation/2.1.out
gcc 1.memory-manipulation/2.2.c -o build/1.memory-manipulation/2.2.out

gcc 1.memory-manipulation/3.1.c -o build/1.memory-manipulation/3.1.out
gcc 1.memory-manipulation/3.2.c -o build/1.memory-manipulation/3.2.out
gcc 1.memory-manipulation/3.3.c -o build/1.memory-manipulation/3.3.out

gcc 1.memory-manipulation/4.1-2.c -o build/1.memory-manipulation/4.1.out
gcc 1.memory-manipulation/4.1-2.c -m32 -o build/1.memory-manipulation/4.2.out # comment this if using WSL1, it cannot run 32bit binaries
gcc 1.memory-manipulation/4.3-4.c -o build/1.memory-manipulation/4.3.out
gcc 1.memory-manipulation/4.3-4.c -m32 -o build/1.memory-manipulation/4.4.out # comment this if using WSL1, it cannot run 32bit binaries

gcc 1.memory-manipulation/5.1.c -o build/1.memory-manipulation/5.1.out
gcc 1.memory-manipulation/5.2.c -o build/1.memory-manipulation/5.2.out

gcc 1.memory-manipulation/6.1.c -o build/1.memory-manipulation/6.1.out
gcc 1.memory-manipulation/6.2.c -o build/1.memory-manipulation/6.2.out
gcc 1.memory-manipulation/6.3.c -o build/1.memory-manipulation/6.3.out
gcc 1.memory-manipulation/6.4.c -o build/1.memory-manipulation/6.4.out
gcc 1.memory-manipulation/6.5.c -o build/1.memory-manipulation/6.5.out
gcc 1.memory-manipulation/6.6.c -o build/1.memory-manipulation/6.6.out
gcc 1.memory-manipulation/6.7.c -o build/1.memory-manipulation/6.7.out
gcc 1.memory-manipulation/6.8.c -o build/1.memory-manipulation/6.8.out
gcc 1.memory-manipulation/6.9.c -o build/1.memory-manipulation/6.9.out
# gcc 1.memory-manipulation/6.10.c -o build/6.10.out will not compile

gcc 1.memory-manipulation/7.1.c -o build/1.memory-manipulation/7.1.out
gcc 1.memory-manipulation/7.2.c -o build/1.memory-manipulation/7.2.out
gcc 1.memory-manipulation/7.3.c -o build/1.memory-manipulation/7.3.out
gcc 1.memory-manipulation/7.4.c -o build/1.memory-manipulation/7.4.out
gcc 1.memory-manipulation/7.5.c -o build/1.memory-manipulation/7.5.out
gcc 1.memory-manipulation/7.6.c -o build/1.memory-manipulation/7.6.out
gcc 1.memory-manipulation/7.7.c -o build/1.memory-manipulation/7.7.out

gcc 1.memory-manipulation/8.1.c -o build/1.memory-manipulation/8.1.out
gcc 1.memory-manipulation/8.2.c -o build/1.memory-manipulation/8.2.out
gcc 1.memory-manipulation/8.3.c -o build/1.memory-manipulation/8.3.out
gcc 1.memory-manipulation/8.4.c -o build/1.memory-manipulation/8.4.out
gcc 1.memory-manipulation/8.5.c -o build/1.memory-manipulation/8.5.out
gcc 1.memory-manipulation/8.6.c -o build/1.memory-manipulation/8.6.out
gcc 1.memory-manipulation/8.7.c -o build/1.memory-manipulation/8.7.out

gcc 1.memory-manipulation/9.1.c -o build/1.memory-manipulation/9.1.out
gcc 1.memory-manipulation/9.2.c -o build/1.memory-manipulation/9.2.out
gcc 1.memory-manipulation/9.3.c -o build/1.memory-manipulation/9.3.out
