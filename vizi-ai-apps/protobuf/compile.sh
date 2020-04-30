#!/bin/bash

set -e

echo "Generate from [$(pwd)]"

mkdir -p .gen

check_dir() {
    dir=$1
    if [ ! -d $dir ]; then
        mkdir -p $dir
        echo "Creating [${dir}]"
    fi
}

generate_models() {
    name=$1
    path="vision-protobuf-data-models"
    target_src="../protobuf-models/src"
    target_inc="../protobuf-models/include/${path}"
    output="${target_src}/${name}.pb.cpp"

    check_dir $target_inc
    check_dir $target_src

    /opt/oasys/protobuf/bin/protoc -I. --cpp_out=.gen ${name}.proto
    echo "Build models [${name}]"

    if [ -f ${output} ]; then
        echo "Remove previous models [${output}]"
        rm ${output}
    fi


    echo "Copy source to [${output}]"
    echo "Copy header to [${target_inc}]"
    mv .gen/${name}.pb.cc ${output}
    mv .gen/${name}.pb.h ${target_inc}

    echo "Cleanup Headers  [${name}]"
    SRC="#include \"${name}.pb.h\""
    DST="#include <$path\/${name}.pb.h>"
    sed -i "s/${SRC}/${DST}/g" ${output}
}

generate() {
    name=$1
    generate_models $name
}

generate common
generate config
generate device
generate data-interfaces
generate smart-pallet
generate alarm

rm -rf .gen
