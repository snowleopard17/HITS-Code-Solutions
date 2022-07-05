import re;
import sys;

# Reference from gfg after understading the algorthm

def KMPSearch(pat, txt):
    M = len(pat)
    N = len(txt)

    lps = [0]*M
    j = 0
    computeLPSArray(pat, M, lps)
 
    i = 0
    while i < N:
        if pat[j] == txt[i]:
            i += 1
            j += 1
 
        if j == M:
            print (i-j+1, end=' ')
            j = lps[j-1]
        elif i < N and pat[j] != txt[i]:
            if j != 0:
                j = lps[j-1]
            else:
                i += 1
    print()

def computeLPSArray(pat, M, lps):
    len = 0
    i = 1
    while i < M:
        if pat[i]== pat[len]:
            len += 1
            lps[i] = len
            i += 1
        else:
            len = 0
            lps[i] = 0
            i += 1
def main():
    string = input()
    itr = int(input())

    for i in range(itr):
        pat = input()
        KMPSearch(pat, string);



if __name__ == "__main__":
    main()
