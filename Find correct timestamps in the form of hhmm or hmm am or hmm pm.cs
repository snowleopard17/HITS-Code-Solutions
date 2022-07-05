using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading;
using System.IO;
using System.Text.RegularExpressions;

 
namespace ConsoleApplication8
{
    class Program
    {
    	
    	public static void rgex(string input, string pattern)
    	{
    		Regex rg = new Regex(pattern);
        	MatchCollection matchedReg = rg.Matches(input);
        	input = "";
        	foreach (Match match in matchedReg) 
                Console.WriteLine(match.Groups[0]);
    	}
        static void Main(string[] args)
        {
            string input = "";
            string line;
            while((line= Console.ReadLine())!=null){
                input += line;
                input += '\n';
            }
            input = input.Remove(input.Length-1);
            string pattern = @"(1?[0-2]|[0-9]):[0-5][0-9] (am|pm)|([01][0-9]|2[0-3]):[0-5][0-9]";
            rgex(input, pattern);
        }
    }
}