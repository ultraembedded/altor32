#!/bin/bash

brew install gmp libmpc mpfr cloog isl

cd /opt

git clone git://github.com/openrisc/or1k-src.git 
git clone git://github.com/openrisc/or1k-gcc.git

mdkdir or1ksrc_build
cd or1ksrc_build

../or1k-src/configure --target=or1knd-elf --prefix=/opt/or1k-toolchain --enable-shared \ 
--disable-itcl --disable-tk --disable-tcl --disable-winsup --disable-libgui --disable-rda \ 
--disable-sid --disable-sim --disable-gdb --with-sysroot --disable-newlib --disable-libgloss --disable-werror 
make -j 4
make install

mkdir or1kgcc_build
cd or1kgcc_build

../or1k-gcc/configure --target=or1knd-elf --prefix=/opt/or1k-toolchain --enable-languages=c \ 
--disable-shared --disable-libssp --disable-werror 
make -j 4
make install

export PATH=/opt/or1k-toolchain/bin:$PATH

cd ..

rm -rf or1ksrc_build
mkdir or1ksrc_build
cd or1ksrc_build

../or1k-src/configure --target=or1knd-elf --prefix=/opt/or1k-toolchain --enable-shared \ 
--disable-itcl --disable-tk --disable-tcl --disable-winsup --disable-libgui --disable-rda \ 
--disable-sid --disable-sim --disable-gdb --with-sysroot --enable-newlib --disable-libgloss --disable-werror 
make -j 4
make install

cd ..
rm -rf or1kgcc_build
mkdir or1kgcc_build
cd or1kgcc_build

../or1k-gcc/configure --target=or1knd-elf --prefix=/opt/or1k-toolchain --enable-languages=c \ 
--disable-shared --disable-libssp --disable-werror --with-newlib
make -j 4
make install

