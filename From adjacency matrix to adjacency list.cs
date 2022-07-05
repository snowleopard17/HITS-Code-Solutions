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
        static string[] edgeList(int[,] matrix, int x)
        {
            string[] retMat = new string [x];
            string to;
            for(int i=0; i<x; i++){
                to = $"{i+1}: ";
                for(int j=0; j<x; j++){
                    if(matrix[i,j]==1)
                        to += $"{j+1} ";
                }
                retMat[i] += to;
            }
            return retMat;
        }
        static void printList(string[] matrix)
        {
            foreach (string r in matrix)
            {
                Console.WriteLine(r);
            }
        }
        static void Main(string[] args)
        {
                       
            int x = int.Parse(Console.ReadLine());
            int[,] matrix = new int[x,x];
            inputMat(ref matrix, ref x);
            string[] edList = edgeList(matrix,  x); //Stores data in list
            printList(edList);
        }
    }
}