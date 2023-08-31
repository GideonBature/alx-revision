#!/usr/bin/python3

class Customer:
    """
    A sample customer class

    >>> from doctest_customer import Customer
    >>> customer_1 = Customer("Gideon", "Bature", 5000)
    >>> customer_2 = Customer("Grace", "Andrew", 3000)
    >>> customer_1.customer_mail()
    'Gideon.Bature@email.com'
    >>> customer_2.customer_mail()
    'Grace.Andrew@email.com'
    >>> customer_1.customer_fullname()
    'Gideon Bature'
    >>> customer_2.customer_fullname()
    'Grace Andrew'
    >>> customer_1.apply_discount()
    4750
    >>> customer_2.apply_discount()
    2850

    """
    discount = 0.95

    def __init__(self, first, last, purchase):
        self.first = first
        self.last = last
        self.purchase = purchase

    def customer_mail(self):
        return f'{self.first}.{self.last}@email.com'

    def customer_fullname(self):
        return f'{self.first} {self.last}'

    def apply_discount(self):
        self.purchase = int(self.purchase * self.discount)
        return self.purchase

if __name__=='__main__':
    import doctest
    doctest.testmod()
