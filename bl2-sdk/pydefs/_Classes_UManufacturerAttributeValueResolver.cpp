#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UManufacturerAttributeValueResolver(py::module &m)
{
    py::class_< UManufacturerAttributeValueResolver,  UAttributeValueResolver   >(m, "UManufacturerAttributeValueResolver")
        .def_readwrite("ValueIfNotMatched", &UManufacturerAttributeValueResolver::ValueIfNotMatched)
        .def_readwrite("Manufacturers", &UManufacturerAttributeValueResolver::Manufacturers)
          ;
}