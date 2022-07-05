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

def main():
    string1 = norm(input());
    string2 = norm(input());
    print(jac(string1, string2));



if __name__ == "__main__":
    main()
