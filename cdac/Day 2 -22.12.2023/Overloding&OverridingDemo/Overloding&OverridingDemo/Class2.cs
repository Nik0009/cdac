using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Overloding_OverridingDemo
{
    internal class Class2
    {
        static void Main(string[] args)
        {
           //   Maths1 o = new Maths1();
           //   o.Print();
           //   o.Print(2);
            //  o.Print("moye moyee..");


            string[] str = {"abc","pqr","cde"};
            Master m = new A();
            m.Print(str);

            // m.GetPer();
            //   m.Display();
              


          //  Master m1 = new B();
        //    m1.GetPer();
         //   m1.Display();



            Console.ReadLine();
        }
    }
}
