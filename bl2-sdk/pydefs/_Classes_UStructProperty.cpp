#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UStructProperty(py::object m)
{
    py::class_< UStructProperty,  UProperty   >(m, "UStructProperty")
        .def_readonly("UnknownData00", &UStructProperty::UnknownData00)
        .def("StaticClass", &UStructProperty::StaticClass, py::return_value_policy::reference)
          ;
}