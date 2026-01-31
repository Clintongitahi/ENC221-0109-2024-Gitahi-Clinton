class Roommate:
    def _init_(self, name, age, personality, hobby):
        self.name = name
        self.age = age
        self.personality = personality
        self.hobby = hobby

    def describe(self):
        print("Roommate Description:")
        print("Name:", self.name)
        print("Age:", self.age)
        print("Personality:", self.personality)
        print("Hobby:", self.hobby)
my_roommate =("Jeremy", 22, "Calm and friendly", "cooking")
