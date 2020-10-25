#install MPLAB
From: https://www.medo64.com/2019/09/installing-mplab-x-ide-5-25-on-64-bit-ubuntu-19-04/

While I love seeing companies provide Linux version of their software, it still annoys me when they do it as lazily as possible. For example Microchip not only doesn’t provide repository for their software, making you download and install every version separately, but they also don’t provide up-to-date instructions. Their section describing Ubuntu 14.04 and above simply doesn’t work.

To install MPLAB X on newer Ubuntu one must first explicitly add architecture:

Terminal 
```
sudo dpkg --add-architecture i386
sudo apt-get update
sudo apt install libc6:i386 libx11-6:i386 libxext6:i386 libstdc++6:i386 libexpat1:i386
```
Only once those are up you can proceed installing MPLAB IDE X itself:

Terminal 
```
tar -xvf MPLABX-v*-linux-installer.tar
chmod +x MPLABX-v*-linux-installer.sh
sudo ./MPLABX-v*-linux-installer.sh
```
Of course, installing compiler follows (XC8 in this case):

Terminal 
```
chmod u+x xc8-v*-full-install-linux-installer.run
sudo ./xc8-v*-full-install-linux-installer.run
```
And now MPLAB X IDE is installed.

#Run MPLAB

Terminal
```
mplab_ide &
```

