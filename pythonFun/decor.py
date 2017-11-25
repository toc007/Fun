@before
@after
def incr(x):
    print "inside incr: ", str(x+1)
    return x+1

# function based decorators
def before(bef):
    def deco(f):
        def g(*args):
            bef(*args)
            return f(*args)
        return g
    return deco 

def after(aft):
    def deco(f):
        def g(*args):
            rv = f(*args)
            aft(*args)
            return rv
        return g
    return deco 

# class based decorators
def before(bef):
    class deco:
        def __init__(self,f):
            self.f = f
        def __call__(self, *args):
            bef(*args)
            return self.f(*args)
    return deco

def after(aft):
    class deco:
        def __init__(self,f):
            self.f = f
        def __call__(self, *args):
            rv = f(*args)
            aft(*args)
            return rv
    return deco

#1. function def
#2. class based decorator
#   constructor takes in a function
#   
#3. fun theorm of dec

@average
def id(x): return x

# function take in a function and returns a fucntion
def average:
    def deco(f):
        def g(*args):
            return f(*args)
        return g
    return deco
