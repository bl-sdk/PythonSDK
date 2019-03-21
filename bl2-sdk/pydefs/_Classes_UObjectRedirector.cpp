#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UObjectRedirector(py::object m)
{
    py::class_< UObjectRedirector,  UObject   >(m, "UObjectRedirector")
        .def("StaticClass", &UObjectRedirector::StaticClass, py::return_value_policy::reference)
          ;
}