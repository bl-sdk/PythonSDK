#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FColiseumStat(py::module &m)
{
    py::class_< FColiseumStat >(m, "FColiseumStat")
        .def_readwrite("StatType", &FColiseumStat::StatType)
        .def_readwrite("StatValue", &FColiseumStat::StatValue)
  ;
}