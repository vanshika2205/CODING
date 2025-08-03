import os

# Specify the directory you want to list
directory_path = '.'  # Use '.' for the current directory

# Get the list of files and directories in the specified directory
try:
    contents = os.listdir(directory_path)
    print(f"Contents of '{directory_path}':")
    for item in contents:
        print(item)
except FileNotFoundError:
    print(f"The directory '{directory_path}' does not exist.")
except PermissionError:
    print(f"Permission denied to access '{directory_path}'.")
