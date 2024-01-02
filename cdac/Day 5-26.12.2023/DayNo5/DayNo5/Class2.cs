using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DayNo5
{

    internal class GenricsExample
    {
        DataStore<string> store = new DataStore<string>();

    }
    class DataStore<T>
    {
        public T Data { get; set; }
    }

    DataStore<string> store = new DataStore<string>()
;
    store.Data="hello";
}
