using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp1
{
     class Test2
    {
        int[] age = { 12, 32, 14, 22 };

        var a=from i in age where i>20 orderby i dec
             select i;
            foreach (String item in a){

            }

    }
}
