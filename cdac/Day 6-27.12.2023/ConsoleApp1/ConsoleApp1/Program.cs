using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp1
{
    internal class Program
    {
        static void Main(string[] args)
        {
            try
            {
                int a = 10;
                int b = 0;
                int c = a / b;
                Console.WriteLine(c);
            }catch(Exception e)
            {
                //Console.WriteLine("you got exception bro..!!!");
                Console.WriteLine(e.ToString());
            }
            finally { Console.WriteLine("check your code bro!!"); }

            Console.ReadLine();
        }
    }
}
