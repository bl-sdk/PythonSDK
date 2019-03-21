#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FStringIdToStringMapping()
{
    py::class_< FStringIdToStringMapping >("FStringIdToStringMapping")
        .def_readwrite("Id", &FStringIdToStringMapping::Id)
        .def_readwrite("Name", &FStringIdToStringMapping::Name)
  ;
}