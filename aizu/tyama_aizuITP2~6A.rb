#!/usr/bin/ruby
n=gets.to_i
a=gets.split.map &:to_i
gets.to_i.times{k=gets.to_i;i=(0...n).bsearch{|i|a[i]>=k};p i&&a[i]==k ? 1 : 0}
