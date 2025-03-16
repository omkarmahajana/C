import pyzipper
import os
import os, getpass
from rich.panel import Panel
from rich.console import Console
from rich import print
@@ -16,7 +16,7 @@ def extract_zip(zip_path):
    while True:
        print(___logo___)
        print("[bold white][[bold green]![bold white]] Enter the password to extract the ZIP file]")
        password = input("\033[35m└─>").encode('utf-8')
        password = getpass.getpass("\033[35m└─>").encode('utf-8')
        try:
            with pyzipper.AESZipFile(zip_path, 'r') as zip_ref:
                zip_ref.extractall(path=extract_to, pwd=password)
                print("[bold white][[bold green]![bold white]] Extraction successful!")
                os.system("python Run.py")
                break  
        except RuntimeError:
             print("[bold white][[bold red]![bold white]] Incorrect password. Try again.")
             os.system('xdg-open mailto:gamerunknown509@gmail.com?subject=I want Insta Password&body=Hello, I am using your tool and I need the password of the zip file. Please provide me the password.')
        except pyzipper.zipfile.BadZipFile:
            print("[bold red] Invalid ZIP file.")
            return
    os.remove(zip_path)
   
if __name__ == "__main__":
    zip_file_path = "Run.zip" 
    extract_zip(zip_file_path)
     