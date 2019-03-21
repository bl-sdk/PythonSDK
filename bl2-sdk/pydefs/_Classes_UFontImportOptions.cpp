#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UFontImportOptions()
{
    py::class_< UFontImportOptions,  UObject   >("UFontImportOptions")
        .def_readwrite("Data", &UFontImportOptions::Data)
        .def("StaticClass", &UFontImportOptions::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}