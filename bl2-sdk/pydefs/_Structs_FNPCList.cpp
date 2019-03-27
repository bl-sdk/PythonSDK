#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FNPCList(py::module &m)
{
    py::class_< FNPCList >(m, "FNPCList")
        .def_readwrite("Mind", &FNPCList::Mind)
        .def_readwrite("LastPathTime", &FNPCList::LastPathTime)
        .def_readwrite("PathRequestTime", &FNPCList::PathRequestTime)
        .def_readwrite("Score", &FNPCList::Score)
  ;
}