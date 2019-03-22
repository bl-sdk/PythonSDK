#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UFontImportOptions(py::module &m)
{
    py::class_< UFontImportOptions,  UObject   >(m, "UFontImportOptions")
        .def_readwrite("Data", &UFontImportOptions::Data)
        .def("StaticClass", &UFontImportOptions::StaticClass, py::return_value_policy::reference)
          ;
}