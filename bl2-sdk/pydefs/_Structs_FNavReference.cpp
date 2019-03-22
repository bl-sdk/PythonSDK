#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FNavReference(py::module &m)
{
    py::class_< FNavReference >(m, "FNavReference")
        .def_readwrite("Nav", &FNavReference::Nav)
        .def_readwrite("Guid", &FNavReference::Guid)
  ;
}