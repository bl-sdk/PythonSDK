#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPersistentData()
{
    py::class_< FPersistentData >("FPersistentData")
        .def_readwrite("VfTable", &FPersistentData::VfTable)
  ;
}