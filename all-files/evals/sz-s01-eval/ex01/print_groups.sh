#!/bin/bash

id -Gn $FT_USER | sed 's/ /,/g' | tr "\n" "\000"
