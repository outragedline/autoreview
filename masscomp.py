#!/usr/bin/python
import os
import sys
import subprocess

path = sys.argv[1]
if not os.path.isdir(path):
    print("Diretorio informado não existe")
    sys.exit(1)


def ccompile(srcdir):
    output_dir = os.path.join(os.getcwd(), "binarios")

    for root, dirs, files in os.walk(srcdir):
        relative_path = os.path.relpath(root, srcdir)
        target_dir = os.path.join(output_dir, relative_path)
        os.makedirs(target_dir, exist_ok=True)

    for root, dirs, files in os.walk(srcdir):
        relative_path = os.path.relpath(root, srcdir)
        target_dir = os.path.join(output_dir, relative_path)
        for file in files:
            output_file = os.path.splitext(file)
            if output_file[1] == ".c":
                output_file_path = os.path.join(target_dir, output_file[0])
                input_file_path = os.path.join(root, file)
                subprocess.run(["gcc", input_file_path, "-o", output_file_path])


ccompile(path)
