import re;
import sys;

def rgex(string, pattern):
    string = re.findall(pattern, string);
    a = ""
    for x in string:
        a+=x;
    return (a);
def norm(string):
    string = rgex(string, r'[a-zA-Z0-9]* ?');
    string = rgex(string, r'\w{4,} ?');

    return string.lower();

def main():
    string = ""
    for line in sys.stdin:
        string+= line;
    print(norm(string));    



if __name__ == "__main__":
    main()
