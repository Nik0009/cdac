using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Overloding_OverridingDemo
{
    internal class Maths1
    {
        public void Print()
        {
            Console.WriteLine("Welcome :");
        }
        public void Print(int a)
        {
            Console.WriteLine("Int Value :"+a.ToString());
        }
        public void Print(String a)
        {
            Console.WriteLine("String a :"+a);
        }
    }
}
