import re;
import sys;

def merlin(string, pattern):
    matches = re.finditer(pattern, string, re.MULTILINE)
    x=""
    a = 0
    for matchNum, match in enumerate(matches, start=1):
        # print ("{match}".format(matchNum = matchNum, start = match.start(), end = match.end(), match = match.group()))
        x = ("{match}".format(matchNum = matchNum, start = match.start(), end = match.end(), match = match.group()))
        a = match.start()
    return a,x

def main():
    string = []
    for line in sys.stdin:
        string.append(line);
    a,q=0,0
    for i in string:
        q+=1
        a,x = (merlin(i, r"(?:Avada-ke-davra)"))
        b,y = (merlin(i, r"(?:Merlin speaks)"))

        if a>0 and x!="" and y!="":
            print(q, end=' ')
            print(a+1)
        
if __name__ == "__main__":
    main()
