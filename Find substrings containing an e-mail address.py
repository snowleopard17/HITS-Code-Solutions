import re;
import sys;

def rgex(string, pattern):
    matches = re.finditer(pattern, string, re.MULTILINE)

    for matchNum, match in enumerate(matches, start=1):
        print ("{match}".format(matchNum = matchNum, start = match.start(), end = match.end(), match = match.group()))
    
def main():
    string = []
    for line in sys.stdin:
        string.append(line);
    a=0
    for x in string:
        rgex(x, r"[A-Za-z0-9_]+@([a-zA-Z0-9-\.]{1,61}\.)([a-zA-Z]{2,4})")
if __name__ == "__main__":
    main()

