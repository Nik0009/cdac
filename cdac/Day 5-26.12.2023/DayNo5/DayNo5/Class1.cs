using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DayNo5
{
    

    internal class deligateExample
    {
        public deligate void HelloFunctionDeligate(string msg);

        class Program
        {
            public void Main()
            {
                HelloFunctionDeligate del = new HelloFunctionDeligate(Hello);
                del("hello from deligate");
            }
            public static void Hello(string strmsg)
            {
                Console.log();
            }
        }


    }
}
