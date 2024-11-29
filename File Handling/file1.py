# Read mode to open a file 
# f = open("D:\Python Video Notes\Python Programs\File Handling\demo.txt", "r")
# data = f.read()
# print(data)
# print(type(data))
# f.close()



f = open("D:\Python Video Notes\Python Programs\File Handling\demo.txt", "r")

# data = f.read(5)
# print(data)
line1 = f.readline()
print(line1)

f.close()
