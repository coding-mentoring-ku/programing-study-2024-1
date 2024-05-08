class Person:
    def __init__(self, name=''):
        self.__name = name

    def getName(self):
        print(self.__name)


class Family:
    def __init__(self, size, name):
        self.__size = size
        self.__family_name = name
        self.__people = []

    def setName(self, i, name):
        p = Person(name)
        self.__people.insert(i, p)

    def show(self):
        for p in self.__people:
            p.getName()


def main():
    simpson = Family(4, "Simpson")
    simpson.setName(0, "Mr. Simpson")
    simpson.setName(1, "Mrs. Simpson")
    simpson.setName(2, "Bart Simpson")
    simpson.setName(3, "Lisa Simpson")
    simpson.show()


if __name__ == '__main__':
    main()
