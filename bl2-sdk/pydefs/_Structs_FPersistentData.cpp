#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPersistentData(py::object m)
{
    py::class_< FPersistentData >(m, "FPersistentData")
        .def_readwrite("VfTable", &FPersistentData::VfTable)
  ;
}