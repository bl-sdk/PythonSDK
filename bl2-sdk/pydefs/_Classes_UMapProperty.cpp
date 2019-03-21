#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMapProperty(py::object m)
{
    py::class_< UMapProperty,  UProperty   >(m, "UMapProperty")
        .def("StaticClass", &UMapProperty::StaticClass, py::return_value_policy::reference)
          ;
}