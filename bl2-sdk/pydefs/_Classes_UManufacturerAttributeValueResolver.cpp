#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UManufacturerAttributeValueResolver()
{
    py::class_< UManufacturerAttributeValueResolver,  UAttributeValueResolver   >("UManufacturerAttributeValueResolver")
        .def_readwrite("ValueIfNotMatched", &UManufacturerAttributeValueResolver::ValueIfNotMatched)
        .def_readwrite("Manufacturers", &UManufacturerAttributeValueResolver::Manufacturers)
        .def("StaticClass", &UManufacturerAttributeValueResolver::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}