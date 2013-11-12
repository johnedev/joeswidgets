#!/bin/sh

prefix=$1

count=0
for f in joes_widgets_products*; do
        mv "$f" $(echo $f | sed 's/^joes_widgets_products/joes_widgets_joes_widgets_products/');
done 
