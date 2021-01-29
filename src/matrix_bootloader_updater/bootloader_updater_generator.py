from tkinter import filedialog
import re

sketch_file = open("matrix_bootloader_updater.ino", "r+")
sketch = sketch_file.read()
# print(sketch)
bootloader_path = filedialog.askopenfilename(title = "Select new bootloader binary",filetypes = (("binary files","*.bin"),("all files","*.*")))
bootloader = open(bootloader_path, "rb").read()
bootloader_hex = "const char new_bootloader[]={"
for i in range(len(bootloader)):
    bootloader_hex += hex(bootloader[i])
    if i == len(bootloader) - 1:
        bootloader_hex += "};\n"
    else:
        bootloader_hex += ",\t"
        if i % 12 == 0:
            bootloader_hex += "\n\t"

# print(bootloader_hex)

regex = re.compile('const char new_bootloader.*?;', re.DOTALL)
sketch = re.sub(regex, bootloader_hex, sketch)
sketch_file.seek(0)
sketch_file.truncate(0)
sketch_file.write(sketch)
sketch_file.close();