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
def jac(st1, st2):
    leno = min(len(st1), len(st2));
    count = 0;
    for i in range(leno):
        if(st1[i]==st2[i]):
            count+=1;
    return count/(len(st1)+len(st2)-count)
def plague(string):
    for x in range(len(string)):
        for y in range(x+1, len(string)):
            count = 0
            w1 = [qr for qr in re.split(r'\s',string[x]) if qr!=""]
            w2 = [qr for qr in re.split(r'\s',string[y]) if qr!=""]
            for i in w1:
                for j in w2:
                    if jac(i,j)>0.45:
                        count+=1;
            pt = count/(len(w1)+len(w2)-count)
            if(pt>0.25):
                print(x+1, y+1)

def main():
    string = []
    for line in sys.stdin:
        line = norm(line)
        string.append(line);
    plague(string);

if __name__ == "__main__":
    main()
