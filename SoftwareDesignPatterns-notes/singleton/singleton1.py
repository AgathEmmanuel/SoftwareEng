
import threading
"""
Pattern name - SingleTon
Pattern type - Creational Design Pattern
"""

# Solution - 1
class SingleTon(object):
    _lock = threading.Lock()    # adding thread lock
    """
    Why not wrap the entire body of the __new__ method in the Lock context manager and avoid the second if not cls._instance check, like this?
    This would work, and at first glance is seems better because of the reduction in lines of code. The problem, however, is that acquiring locks is an expensive operation. Having a class/method which acquires locks when it does not need to can lead to slow code which is hard to pin down. Only acquire locks when it’s necessary.
    """
    def __new__(cls, *args, **kwargs):
        """
        __new__  dunder method is called whenever Python instantiates a new object of a class. Normally, __new__ goes to the super of the class, which is Object, and instantiates a new object which is then passed to __init__ with whatever args were passed to __new__. We intercept this method, and tell it to create one and only one class instance (i.e. the Singleton). This class object is then passed to the __init__ method as it normally would be.
        """
        with cls._lock:
        # another thread could have created the instance
        # before we acquired the lock. So check that the
        # instance is still nonexistent.
            if not hasattr(cls, '_instance'):
                cls._instance = super(SingleTon, cls).__new__(cls)
            return cls._instance

o1 = SingleTon()
o2 = SingleTon()

o1.data = 10
print(o1)
print(o1.data)
print(o2.data)
print()

o2.data = 5
print(o2)
print(o1.data)
print(o2.data)

# we can notice that the data is modified irrespective which object is acting apon it
# and to prevent multiple objects accessing at same time we use thread lock
