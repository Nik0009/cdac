using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace FunctionDemo
{
    internal class GetSetDemo
    {
        int a;
        
        public int aProp
        {
            set
            {
                if (value <= 12)
                {
                    a = value;
                }
                else
                {
                    a = 0;
                }
            }
        }
    }
}
