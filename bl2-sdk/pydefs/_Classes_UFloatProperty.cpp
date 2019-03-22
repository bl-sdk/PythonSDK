#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UFloatProperty(py::module &m)
{
    py::class_< UFloatProperty,  UProperty   >(m, "UFloatProperty")
        .def("StaticClass", &UFloatProperty::StaticClass, py::return_value_policy::reference)
          ;
}