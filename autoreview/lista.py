import os
import subprocess

import pexpect


class Lista:
    def __init__(self, listadir) -> None:
        self.listadir = listadir

    def review(self):
        self.ccompile()
        for root, dirs, files in os.walk(self.listadir):
            relative_path = os.path.relpath(root, self.listadir)

        for root, dirs, files in os.walk(self.listadir):
            relative_path = os.path.relpath(root, self.listadir)
            for file in files:
                binary = os.path.splitext(file)
                if hasattr(self, binary[0]):
                    try:
                        atv = getattr(self, binary[0])
                        atv(f"{root}/{binary[0]}")

                    except pexpect.exceptions.EOF as e:
                        print(e)
                    except Exception as e:
                        print(e)

    def ccompile(self):
        output_dir = os.path.join(os.getcwd(), "binarios")

        for root, dirs, files in os.walk(self.listadir):
            relative_path = os.path.relpath(root, self.listadir)
            target_dir = os.path.join(output_dir, relative_path)
            os.makedirs(target_dir, exist_ok=True)

        for root, dirs, files in os.walk(self.listadir):
            relative_path = os.path.relpath(root, self.listadir)
            target_dir = os.path.join(output_dir, relative_path)
            for file in files:
                output_file = os.path.splitext(file)
                if output_file[1] == ".c":
                    output_file_path = os.path.join(target_dir, output_file[0])
                    input_file_path = os.path.join(root, file)
                    subprocess.run(["gcc", input_file_path, "-o", output_file_path])
        self.listadir = output_dir
