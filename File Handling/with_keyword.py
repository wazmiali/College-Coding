with open("D:\Python Video Notes\Python Programs\File Handling\demo.txt", "r") as f:
      data = f.read()
      print(data)

with open("D:\Python Video Notes\Python Programs\File Handling\demo.txt", "w") as f:
      f.write("New data")   