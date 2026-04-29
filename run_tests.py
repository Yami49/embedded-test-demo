import os

def run():
    os.system("mkdir -p build")
    os.system("cd build && cmake ..")
    os.system("cd build && make")
    os.system("cd build && ./runTests")

if __name__ == "__main__":
    run()
