#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPlayerStat(py::module &m)
{
    py::class_< FPlayerStat >(m, "FPlayerStat")
        .def_readwrite("ViewId", &FPlayerStat::ViewId)
        .def_readwrite("PropertyId", &FPlayerStat::PropertyId)
        .def_readwrite("Data", &FPlayerStat::Data)
  ;
}