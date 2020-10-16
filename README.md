## tcpsockets

### Install VPN (global Connect: address: campusvpn.ucr.edu). 
Enter your netid and password to connect.
Open terminal/ command line and type: ssh YourNetID@bolt.cs.ucr.edu, and then enter your lab password.
Now you will be able to access your linux env. To know about the version, type: cat /etc/os-release

### Here are few steps to compile and run today’s discussed Client/Server Architecture:
At your home directory, type: git init, this will initialise local git repository.
Now you need to clone the repo that I gave link to. So do: git clone https://github.com/sdahi002/tcpsockets.git
Perform following steps to run files:
```
# cd tspsockets
# make server.c
# make client.c
# ./server
# ./client               (on another terminal)
```
Now you can make changes to the files by:
```
# vim FILENAME.c 
```
Here, you can make changes and save by pressing `esc `  and then pressing `:wq` to save and `:qa!`  to exit without saving.
Remember, after making changes, you need to again repeat about steps.

### Useful(!) Resources 
--------------------------
1. IP Linux Implementation: https://man7.org/linux/man-pages/man7/ip.7.html
2. C Library stdlib.h: https://www.tutorialspoint.com/c_standard_library/stdlib_h.htm
