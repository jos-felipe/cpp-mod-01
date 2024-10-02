#!/bin/bash

is_right=`diff qa/input.txt.replace qa/input.txt.expected`
if [ -z "$is_right" ]; then
	echo "OK"
else
	echo "KO"
	cat $is_right
fi