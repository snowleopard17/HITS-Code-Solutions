import re;
import sys;

def callev(st1, st2):

    m, n = len(st1), len(st2)
    table = [[0 for x in range(n + 1)] for x in range(m + 1)]
 
    for i in range(m + 1):
        for j in range(n + 1):
 
            if i == 0:
                table[i][j] = j
 
            elif j == 0:
                table[i][j] = i
 
            elif st1[i-1] == st2[j-1]:
                table[i][j] = table[i-1][j-1]
 
            else:
                table[i][j] = 1 + min(table[i][j-1],
                                   table[i-1][j],       
                                   table[i-1][j-1])
 
    return table[m][n]
 
    
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
    print(callev(string1, string2));



if __name__ == "__main__":
    main()
