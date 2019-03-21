#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UUIPropertyDataProvider(py::object m)
{
    py::class_< UUIPropertyDataProvider,  UUIDataProvider   >(m, "UUIPropertyDataProvider")
        .def_readwrite("ComplexPropertyTypes", &UUIPropertyDataProvider::ComplexPropertyTypes)
        .def("StaticClass", &UUIPropertyDataProvider::StaticClass, py::return_value_policy::reference)
        .def("eventGetCustomPropertyValue", &UUIPropertyDataProvider::eventGetCustomPropertyValue)
        .def("CanSupportComplexPropertyType", &UUIPropertyDataProvider::CanSupportComplexPropertyType)
          ;
}