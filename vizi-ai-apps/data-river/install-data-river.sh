#!/bin/bash

install_path="/opt/adlink/dist/etc/vision-data-river/"
sudo mkdir -p ${install_path}
echo "Remove existing Data River Config from [$install_path]"
sudo rm -rf ${install_path}/*
echo "Installing Data River Config to [${install_path}]"
sudo cp -R data-river/* ${install_path}
