#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UByteAttributeProperty(py::module &m)
{
    py::class_< UByteAttributeProperty,  UByteProperty   >(m, "UByteAttributeProperty")
        .def("StaticClass", &UByteAttributeProperty::StaticClass, py::return_value_policy::reference)
          ;
}