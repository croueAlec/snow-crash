# Download file to have root permissions on local machine
`scp -P 4242 level02@<VM address>:level08 .`

# Token file cannot directly be openned so we'll use a symlink to bypass this
`ln -s /home/user/level08/token /tmp/flag`

# Get the token and the flag
```bash
./level8 /tmp/flag
su flag08
getflag
```
