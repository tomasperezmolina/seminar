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
gcc 4.3-4.c -o build/4.3.out
gcc 4.3-4.c -o build/4.4.out -m32 # comment this if using WSL1, it cannot run 32bit binaries

gcc 5.1.c -o build/5.1.out
gcc 5.2.c -o build/5.2.out

gcc 6.1.c -o build/6.1.out
gcc 6.2.c -o build/6.2.out
gcc 6.3.c -o build/6.3.out
gcc 6.4.c -o build/6.4.out
gcc 6.5.c -o build/6.5.out
gcc 6.6.c -o build/6.6.out
gcc 6.7.c -o build/6.7.out
gcc 6.8.c -o build/6.8.out
gcc 6.9.c -o build/6.9.out
# gcc 6.10.c -o build/6.10.out will not compile

gcc 7.1.c -o build/7.1.out
gcc 7.2.c -o build/7.2.out
gcc 7.3.c -o build/7.3.out
gcc 7.4.c -o build/7.4.out
gcc 7.5.c -o build/7.5.out
gcc 7.6.c -o build/7.6.out
gcc 7.7.c -o build/7.7.out

gcc 8.1.c -o build/8.1.out
gcc 8.2.c -o build/8.2.out
gcc 8.3.c -o build/8.3.out
gcc 8.4.c -o build/8.4.out
gcc 8.5.c -o build/8.5.out
gcc 8.6.c -o build/8.6.out
gcc 8.7.c -o build/8.7.out
