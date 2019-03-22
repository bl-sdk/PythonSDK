#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAttributeModifier(py::module &m)
{
    py::class_< UAttributeModifier,  UObject   >(m, "UAttributeModifier")
        .def_readwrite("Type", &UAttributeModifier::Type)
        .def_readwrite("Value", &UAttributeModifier::Value)
        .def("StaticClass", &UAttributeModifier::StaticClass, py::return_value_policy::reference)
          ;
}