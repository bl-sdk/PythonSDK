#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UComponentProperty(py::object m)
{
    py::class_< UComponentProperty,  UObjectProperty   >(m, "UComponentProperty")
        .def("StaticClass", &UComponentProperty::StaticClass, py::return_value_policy::reference)
          ;
}