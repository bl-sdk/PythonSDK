#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UStructProperty(py::object m)
{
    py::class_< UStructProperty,  UProperty   >(m, "UStructProperty")
        .def("StaticClass", &UStructProperty::StaticClass, py::return_value_policy::reference)
          ;
}