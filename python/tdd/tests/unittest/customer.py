#!/usr/bin/python3

class Customer:
    """A sample customer class"""
    discount = 0.95

    def __init__(self, first_name, last_name, purchase):
        self.first_name = first_name
        self.last_name = last_name
        self.purchase = purchase

        @property
        def customer_mail(self):
            return f'{self.first}.{self.last}@email.com'

        @property
        def customer_fullname(self):
            return f'{self.first} {self.last}'

        def apply_discount(self):
            self.purchase = int(self.purchase * self.discount)

