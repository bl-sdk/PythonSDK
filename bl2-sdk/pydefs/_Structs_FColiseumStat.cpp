#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FColiseumStat()
{
    py::class_< FColiseumStat >("FColiseumStat")
        .def_readwrite("StatType", &FColiseumStat::StatType)
        .def_readwrite("StatValue", &FColiseumStat::StatValue)
  ;
}