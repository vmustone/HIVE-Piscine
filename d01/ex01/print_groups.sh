#!/bin/sh
FT_USER=$(id -p | grep "uid" | cut -f 2)
id -Gn $FT_USER | tr ' ' ','
