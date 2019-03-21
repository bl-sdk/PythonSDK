#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FColiseumPlayerInfo()
{
    py::class_< FColiseumPlayerInfo >("FColiseumPlayerInfo")
        .def_readwrite("WPC", &FColiseumPlayerInfo::WPC)
        .def_readwrite("Stats", &FColiseumPlayerInfo::Stats)
  ;
}