using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace FunctionDemo
{
   public class A{
        int inst = 10;
    public virtual void InstOfInd()
    {
            Console.WriteLine(this.inst);
    }
    }

    public class B : A
    {
        int inst1 = 20;
       public override void InstOfInd()
        {
            Console.WriteLine(this.inst1);
        }
    }
}
