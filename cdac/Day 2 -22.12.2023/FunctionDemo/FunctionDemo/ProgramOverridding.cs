using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace FunctionDemo
{
    internal class ProgramOverridding
    {
        static void Main(string[] args)
        {
            A a=new A();
            a.InstOfInd();

            a=new B();  
            a.InstOfInd();

            Console.ReadLine();

        }
    }
}
