#!/bin/sh

find . -name "*.sh" -print | sed 's/\.sh//' | sed 's/..//'
