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
        static void outMat(ref int[,] matrix, ref int x){
            for(int i=0; i<x; i++){
                for(int j=0; j<x; j++){
                    Console.Write(matrix[i,j]+ " ");
                }
                Console.WriteLine();
            }
        }
        static void inputEdg(ref int[,] matrix, ref int x){

            string line;
            string[] lob; 
            while((line = Console.ReadLine())!=null){
                lob = line.Split();
                int i = int.Parse(lob[0]);
                int j = int.Parse(lob[1]);
                matrix[i-1,j-1] = 1;
                matrix[j-1,i-1] = 1;
            }

        }
        static void edgeList(ref int[,] matrix, ref int x){
            for(int i=0; i<x; i++){
                Console.Write(i+1 + ": ");
                for(int j=0; j<x; j++){
                    if(matrix[i,j]==1)
                        Console.Write(j+1 + " ");
                }
                Console.WriteLine();
            }
        }
        static void Main(string[] args)
        {
                       
            int x = int.Parse(Console.ReadLine().Split()[0]);
            int[,] matrix = new int[x,x];
            inputEdg(ref matrix, ref x);
            edgeList(ref matrix, ref x);
        }
    }
}