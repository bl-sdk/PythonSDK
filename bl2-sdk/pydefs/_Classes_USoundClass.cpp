#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USoundClass(py::object m)
{
    py::class_< USoundClass,  UObject   >(m, "USoundClass")
        .def_readwrite("Properties", &USoundClass::Properties)
        .def_readwrite("ChildClassNames", &USoundClass::ChildClassNames)
        .def_readonly("UnknownData00", &USoundClass::UnknownData00)
        .def("StaticClass", &USoundClass::StaticClass, py::return_value_policy::reference)
          ;
}