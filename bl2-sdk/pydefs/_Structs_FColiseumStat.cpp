#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FColiseumStat()
{
    class_< FColiseumStat >("FColiseumStat", no_init)
        .def_readwrite("StatType", &FColiseumStat::StatType)
        .def_readwrite("StatValue", &FColiseumStat::StatValue)
  ;
}