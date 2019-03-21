#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowDeclarations(py::object m)
{
    py::class_< UWillowDeclarations,  UObject   >(m, "UWillowDeclarations")
        .def("StaticClass", &UWillowDeclarations::StaticClass, py::return_value_policy::reference)
          ;
}