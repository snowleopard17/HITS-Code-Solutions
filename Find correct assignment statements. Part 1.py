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
    	rgex(x, r"\w+\s*=\s*\w+;")
if __name__ == "__main__":
    main()
