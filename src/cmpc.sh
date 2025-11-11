#!/bin/bash
INPUT_FILE="$1"
OUTPUT_FILE="$2"

gcc "$INPUT_FILE" -Wall -Werror -Wextra -o "$OUTPUT_FILE"
exit 0
