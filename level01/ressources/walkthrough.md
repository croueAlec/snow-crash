# Level01

Look for flag01 password in `/etc/passwd`.
>`cat /etc/passwd | grep flag01`

Decode the password with ***John The Ripper***.
>`echo "42hDRfypTqqnw" > pass`

>`john pass --show`

>abcdefg

Switch user and get the flag.
>`su flag01`

>`getflag`
