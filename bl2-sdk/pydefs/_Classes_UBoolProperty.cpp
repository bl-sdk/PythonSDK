#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBoolProperty(py::module &m)
{
    py::class_< UBoolProperty,  UProperty   >(m, "UBoolProperty")
        .def("StaticClass", &UBoolProperty::StaticClass, py::return_value_policy::reference)
          ;
}