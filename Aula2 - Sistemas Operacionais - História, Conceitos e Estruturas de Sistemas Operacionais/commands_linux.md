## Common Linux Terminal Commands
 
- Linux terminal commands are essential for interacting with the operating system via the command line. Below are some commonly used commands categorized for better understanding:

# Navigating Directories

ls: Lists files and directories in the current directory.

cd [directory]: Changes the current directory to the specified one.

pwd: Displays the current directory path.

mkdir [directory]: Creates a new directory.

rm [file]: Deletes a file. Use rm -r [directory] to delete a directory recursively.

# File Operations

cp [source] [destination]: Copies files or directories.

mv [source] [destination]: Moves or renames files or directories.

touch [file]: Creates an empty file or updates the timestamp of an existing file.

cat [file]: Displays the content of a file.

head [file]: Shows the first 10 lines of a file.

tail [file]: Shows the last 10 lines of a file.

# System Information

uname -a: Displays system and kernel information.
df -h: Shows disk space usage in a human-readable format.

free -m: Displays memory usage in megabytes.

uptime: Shows system uptime and load averages.

whoami: Displays the current logged-in user.

# Process Management

ps: Lists active processes.

top: Displays real-time system processes and resource usage.

kill [PID]: Terminates a process by its Process ID.

killall [process_name]: Terminates all processes with the specified name.

# Permissions and Ownership

chmod [permissions] [file]: Changes file 
permissions. Example: chmod 755 file.

chown [user]:[group] [file]: Changes the owner and group of a file.

# Networking

ping [host]: Sends ICMP packets to test connectivity.

ifconfig: Displays network interface configurations.
netstat -tup: Shows active network connections and their associated processes.

# Package Management

For Debian-based systems: apt-get install [package]: Installs a package. apt-get remove [package]: 

Removes a package. apt-get update: Updates the package list.

For Red Hat-based systems: yum install [package]: Installs a package. yum remove [package]: Removes a package.

# Archiving and Compression

tar -cvf [archive.tar] [files]: Creates a tar archive.

tar -xvf [archive.tar]: Extracts a tar archive.

gzip [file]: Compresses a file.

gunzip [file.gz]: Decompresses a file.

# Searching and Filtering

grep [pattern] [file]: Searches for a pattern in a file.

find [directory] -name [filename]: Searches for a file in a directory.

locate [filename]: Quickly finds a file by name.
Miscellaneous

man [command]: Displays the manual for a command.

history: Shows the history of executed commands.

clear: Clears the terminal screen.

exit: Logs out of the current session.