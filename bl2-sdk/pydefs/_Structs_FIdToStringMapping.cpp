#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FIdToStringMapping(py::object m)
{
    py::class_< FIdToStringMapping >(m, "FIdToStringMapping")
        .def_readwrite("Id", &FIdToStringMapping::Id)
        .def_readwrite("Name", &FIdToStringMapping::Name)
  ;
}