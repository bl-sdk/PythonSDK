#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UByteProperty(py::module &m)
{
    py::class_< UByteProperty,  UProperty   >(m, "UByteProperty")
        .def("StaticClass", &UByteProperty::StaticClass, py::return_value_policy::reference)
          ;
}