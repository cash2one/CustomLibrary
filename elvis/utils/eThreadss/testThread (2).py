#!/usr/bin/env python

import thread
from time import sleep, ctime

def loop0():
    print "start loop 0 at :", ctime()
    sleep(4)
    print "loop 0 done at :", ctime()
    
def loop1():
    print "start loop 1 at :", ctime()
    sleep(2)
    print "loop 1 done at :", ctime()
 
def main():
    print "starting at:", ctime()
    thread.start_new(loop0, ())
    thread.start_new(loop1, ())
    sleep(6)
    print "all done at :", ctime()
    
    
if __name__ == '__main__':
    main()