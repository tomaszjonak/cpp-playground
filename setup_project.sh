#!/bin/bash

BUILD_DIR=build

[ -e $BUILD_DIR ] && rm -rf $BUILD_DIR/*
cmake -H. -B$BUILD_DIR

