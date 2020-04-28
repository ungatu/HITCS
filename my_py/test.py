one = 1 
two = one + one
doing = "make your hand dirty"
if two > one :
    print("two bigger than one")
elif(two<one):
    print("two smaller than one")
else:
    print("Equal")
i = 0
while i <= 10:
    print(i)
    i+=1
loop_condition = True
#while loop_condition:
#    print("Loop Conditioon keeps: %d" %(loop_condition))
for i in range(1, 11):
    print(i)
my_integars = [1, 2, 3, 4, 5]
for i in range(0, 5):
    print(my_integars[i])
    i+=1

bookshelf = []
bookshelf.append(5)
bookshelf.append("The linux")
bookshelf.append("Stupid")
print(bookshelf[0]+1)

dictionary_example = {
	"key1":"value1",
	"key2":"value2",
	"key3":10
}
print("My name is %s" %(dictionary_example["key1"]))

class Vehicle:
	def __init__(self, a, b, c)
	self.a = a
	self.b = b
	self.c = c


car = Vehicle()
print(car)