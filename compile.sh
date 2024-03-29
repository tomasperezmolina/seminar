if [ -d "build" ] 
then
    rm -r build
fi

mkdir build
mkdir build/1.memory-manipulation
mkdir build/2.memory-allocation
mkdir build/3.input-output
mkdir build/4.compilation

./file_setup.sh

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

gcc 2.memory-allocation/1.1.c -o build/2.memory-allocation/1.1.out
gcc 2.memory-allocation/1.2.c -o build/2.memory-allocation/1.2.out

gcc 2.memory-allocation/2.1.c -o build/2.memory-allocation/2.1.out
gcc 2.memory-allocation/2.2.c -o build/2.memory-allocation/2.2.out
gcc 2.memory-allocation/2.3.c -o build/2.memory-allocation/2.3.out
gcc 2.memory-allocation/2.4.c -o build/2.memory-allocation/2.4.out

gcc 2.memory-allocation/3.1.c -o build/2.memory-allocation/3.1.out

gcc 2.memory-allocation/4.1.c -o build/2.memory-allocation/4.1.out

gcc 2.memory-allocation/5.1.c -no-pie -o build/2.memory-allocation/5.1.out
gcc 2.memory-allocation/5.2.c -no-pie -o build/2.memory-allocation/5.2.out

gcc 2.memory-allocation/6.1.c -o build/2.memory-allocation/6.1.out
gcc 2.memory-allocation/6.2.c -o build/2.memory-allocation/6.2.out
gcc 2.memory-allocation/6.3.c -o build/2.memory-allocation/6.3.out
gcc 2.memory-allocation/6.4.c -w -o build/2.memory-allocation/6.4.out
gcc 2.memory-allocation/6.5.c -o build/2.memory-allocation/6.5.out

gcc 2.memory-allocation/7.1.c -o build/2.memory-allocation/7.1.out

gcc 2.memory-allocation/8.1.c -w -g -o build/2.memory-allocation/8.1.out

gcc 2.memory-allocation/9.1.c -o build/2.memory-allocation/9.1.out

gcc 2.memory-allocation/10.1.c -o build/2.memory-allocation/10.1.out
gcc 2.memory-allocation/10.2.c -o build/2.memory-allocation/10.2.out

gcc 2.memory-allocation/12.1.c -o build/2.memory-allocation/12.1.out
gcc 2.memory-allocation/12.2.c -o build/2.memory-allocation/12.2.out

gcc 2.memory-allocation/13.1.c -o build/2.memory-allocation/13.1.out

gcc 2.memory-allocation/14.1.c -o build/2.memory-allocation/14.1.out
gcc 2.memory-allocation/14.2.c -o build/2.memory-allocation/14.2.out

gcc 2.memory-allocation/15.1.c -o build/2.memory-allocation/15.1.out
gcc 2.memory-allocation/15.2.c -o build/2.memory-allocation/15.2.out

gcc 2.memory-allocation/16.1.c -o build/2.memory-allocation/16.1.out

gcc 2.memory-allocation/17.1.c -w -o build/2.memory-allocation/17.1.out
gcc 2.memory-allocation/17.2.c -o build/2.memory-allocation/17.2.out

gcc 2.memory-allocation/18.1.c -g -o build/2.memory-allocation/18.1.out

gcc 2.memory-allocation/19.1.c -o build/2.memory-allocation/19.1.out

gcc 3.input-output/1.1.c -o build/3.input-output/1.1.out

gcc 3.input-output/2.1.c -o build/3.input-output/2.1.out

gcc 3.input-output/3.1.c -o build/3.input-output/3.1.out
gcc 3.input-output/3.2.c -o build/3.input-output/3.2.out

gcc 3.input-output/4.1.c -o build/3.input-output/4.1.out

gcc 3.input-output/5.1.c -o build/3.input-output/5.1.out

gcc 3.input-output/6.1.c -o build/3.input-output/6.1.out
gcc 3.input-output/6.2.c -o build/3.input-output/6.2.out
gcc 3.input-output/6.3.c -o build/3.input-output/6.3.out

gcc 3.input-output/7.1.c -o build/3.input-output/7.1.out
gcc 3.input-output/7.2.c -o build/3.input-output/7.2.out

gcc 3.input-output/8.1.c -o build/3.input-output/8.1.out
gcc 3.input-output/8.2.c -o build/3.input-output/8.2.out

gcc 3.input-output/9.1.c -o build/3.input-output/9.1.out

gcc 3.input-output/10.1.c -o build/3.input-output/10.1.out
gcc 3.input-output/10.2.c -o build/3.input-output/10.2.out
gcc 3.input-output/10.3.c -o build/3.input-output/10.3.out
gcc 3.input-output/10.4.c -o build/3.input-output/10.4.out

gcc 3.input-output/11.1.c -o build/3.input-output/11.1.out

gcc 4.compilation/1.1.c -E -o build/4.compilation/1.1.i
gcc 4.compilation/1.2.a.c -E -o build/4.compilation/1.2.i
gcc 4.compilation/1.3.c -DTEST=1 -E -o build/4.compilation/1.3.i
gcc 4.compilation/1.4.c -E -o build/4.compilation/1.4.i

gcc 4.compilation/2.1.c -S -masm=intel -o build/4.compilation/2.1.asm
gcc 4.compilation/2.1.c -c -o build/4.compilation/2.1.o

gcc 4.compilation/3.1.a.c 4.compilation/3.1.b.c -o build/4.compilation/3.1.out
gcc 4.compilation/3.3.c 4.compilation/3.1.b.c -o build/4.compilation/3.3.out
gcc 4.compilation/3.7.a.c -o build/4.compilation/3.7.out