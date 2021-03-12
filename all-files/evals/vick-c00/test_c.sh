#!/bin/bash

## Credits to @locorocorolling(Kevin Loh)
#  generates main.c template file with the option of automatically
#  testing and removing generated files for c functions without arguments
#  supply the function declaration as the first positional argument,
#  the main body statements as the second positional argument,
#  and 'keep' to generate templates without running & removing
##

[[ -z "${1// }" ]] && { echo >&2 "function prototype is not provided"; exit 1; }

[[ -z "${2// }" ]] && { echo >&2 "main body is not provided"; exit 1; }

function_invocation=$(echo $1 | sed 's/\s+/ /g' | awk '{for (i=2; i<NF; i++) printf $i " "; print $NF}')
filename=${function_invocation%(*}

#echo $filename

touch main.c
echo "#include<unistd.h>" > main.c
echo "#include<stdio.h>" >> main.c
echo $1 >> main.c
echo "int main(){" >> main.c
echo $2 >> main.c
echo "return 0;}" >> main.c

[ ! -z $3 ] && { echo "templates generated"; exit 0; }

norminette -R CheckForbiddenSourceHeader "$filename.c"
gcc -Wall -Wextra -Werror main.c "$filename.c"
echo "*************************PROGRAM OUTPUT BELOW*************************"
./a.out | cat -e
rm main.c ./a.out

echo "*************************PROGRAM OUTPUT ABOVE*************************"
echo "attempted to run files and removed them"
echo ""
