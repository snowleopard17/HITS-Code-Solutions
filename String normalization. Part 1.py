import re;
import sys;


def rgex(string, pattern):
    string = re.findall(pattern, string);
    a = ""
    for x in string:
        a+=x;
    print (a.lower());

def main():
    string = ""
    for line in sys.stdin:
        string+= line;
    rgex(string, r'[a-zA-Z0-9]* ?');



if __name__ == "__main__":
    main()
