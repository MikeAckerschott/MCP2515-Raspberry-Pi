#!/bin/bash
cd /home/$SUDO_USER/
sudo apt-get update
sudo apt install make
sudo apt install cmake
sudo apt-get install build-essential
sudo apt-get install libwxgtk3.0-gtk3-dev
wget http://www.airspayce.com/mikem/bcm2835/bcm2835-1.71.tar.gz
tar zxvf bcm2835-1.71.tar.gz
cd bcm2835-1.71
./configure
make
sudo make check
sudo make install