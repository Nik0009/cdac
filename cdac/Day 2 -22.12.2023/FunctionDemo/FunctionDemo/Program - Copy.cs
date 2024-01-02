using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace FunctionDemo
{
  
    internal class ProgramOverloading
 
    {
        
            void display( int a)
            {
                Console.WriteLine("value of a is "+a);
            }
            void display(int a,int b)
            {
                Console.WriteLine("value of a is " + a+" and value of b is "+b);
            }
        

        static void Main(string[] args)
        {
            ProgramOverloading program = new ProgramOverloading();
            program.display(1); 
            program.display(2,3); 
            Console.ReadLine();
        }
    }
}
