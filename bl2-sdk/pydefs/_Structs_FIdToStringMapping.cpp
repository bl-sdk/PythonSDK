#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FIdToStringMapping()
{
    py::class_< FIdToStringMapping >("FIdToStringMapping")
        .def_readwrite("Id", &FIdToStringMapping::Id)
        .def_readwrite("Name", &FIdToStringMapping::Name)
  ;
}