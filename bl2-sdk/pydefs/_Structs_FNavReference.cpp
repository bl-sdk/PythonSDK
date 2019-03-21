#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FNavReference()
{
    py::class_< FNavReference >("FNavReference")
        .def_readwrite("Nav", &FNavReference::Nav)
        .def_readwrite("Guid", &FNavReference::Guid)
  ;
}