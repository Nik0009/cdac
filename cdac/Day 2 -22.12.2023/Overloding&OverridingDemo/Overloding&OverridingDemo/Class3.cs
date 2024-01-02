using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Overloding_OverridingDemo
{
    public abstract  class Master
    {
        public abstract void GetPer();
        public abstract void Display();
        public abstract void Print(params string[] str);
    }

    public class A :Master
    {
        public double IntRate;

       public override void GetPer() 
        {
            IntRate = 10;
        }

        public override void Display() {
            Console.WriteLine("per rate"+this.IntRate);
            Console.ReadLine();
        }

        public override void Print(params string[] str)
        {
            foreach(string s in str){
                Console.WriteLine(s); 
                
            }
        }
    }

    public class B:A
    {
        public override void GetPer()
        {
            IntRate = 20;
        }

        public override void Display()
        {
            Console.WriteLine("per rate" + this.IntRate);
            Console.ReadLine();
        }
    }
}
