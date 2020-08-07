# Object oritented Programming in Python

class Dog:
	def __init__ (self, name, age):
		self.name = name
		self.age =age

	def getName(self):
		return self.name

	def getAge(self):
		return self.age

	def setName(self, name):
		self.name = name

	def setAge(self, age):
		self.age =age

d= Dog("Timmy", 11)
print(type(d))
print(d.getAge())
print(d.getName())
print("---------------------------------------------------------------------------------")
class Student:
	def __init__(self, name, grade):
		self.name = name
		self.grade = grade
	
	def getName(self):
		return self.name
	
	def getGrade(self):
		return self.grade

class Course:
	def __init__ (self, name, max_students):
		self.name = name
		self.max_students = max_students
		self.students = []

	def add_student(self, Student):
		if self.max_students > len(self.students):
			self.students.append(Student)
		else:
			return False

	def avg_marks(self):
		sum = 0
		for student in self.students:
			sum += student.getGrade()

		return sum / len(self.students)


s1 = Student("Kartick", 100)
s2 = Student("Poorvi", 90)
s3 = Student("Tim", 80)

c1 = Course("Science", 2)

c1.add_student(s1)
c1.add_student(s2)
print(c1.add_student(s3)) # Because this step Does not take place
print(c1.avg_marks())
print(c1.students[0].getName())
print("--------------------------------------------------------------------")

print("Demonstration for Inheritance")

class Pet:
	def __init__ (self, name, age):
		self.name = name
		self.age = age
	
	def speak(self):
		print(" I don't know what I speak")

class Cat(Pet):
	def speak(self):
	 return 