using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;


namespace ConsoleApplication8{

    class Program
    {

        
        static void inputMat(ref int[,] matrix, ref int x){
            string[] line;
            for(int i=0; i<x; i++){
                line = Console.ReadLine().Split(' ');
                for(int j=0; j<x; j++){
                    matrix[i,j] = int.Parse(line[j]);
                }
            }
        }
        static string[] edgeList(ref int[,] matrix, ref int x){
            string[] xor = new string[x];
            for(int i=0; i<x; i++){
                for(int j=0; j<x; j++){
                    if(matrix[i, j]==1 && i>j){
                        xor[j] += $"{j+1} {i+1}\n";
                    }
                }
            }
            return xor;
        }

        static void printLen(string[] xxr)
        {
            foreach (string x in xxr) 
            {
                if(x!=null)
                {
                    Console.Write(x);
                }
            }
        }
        static void Main(string[] args)
        {               
            int x = int.Parse(Console.ReadLine());
            int[,] matrix = new int[x,x];
            inputMat(ref matrix, ref x);
            string[] xor = edgeList(ref matrix, ref x);
            printLen(xor);
        }
    }
}