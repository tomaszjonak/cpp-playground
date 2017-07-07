#!/bin/bash

[ -e bin ] && rm -rf bin/* || mkdir bin
cd bin
cmake ..
cd -
