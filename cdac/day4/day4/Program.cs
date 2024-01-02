using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace day4
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int? a = null;
            int ? b = null; 

            int c ;

            if (a == null)
            {
                //a = 10;
                a = 0;
            }

            c = a ?? b ?? 100;

            Console.WriteLine(c);

            Console.ReadLine();
        }
    }
}
