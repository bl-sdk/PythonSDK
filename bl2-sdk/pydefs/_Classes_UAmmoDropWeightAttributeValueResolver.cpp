#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAmmoDropWeightAttributeValueResolver(py::object m)
{
    py::class_< UAmmoDropWeightAttributeValueResolver,  UAttributeValueResolver   >(m, "UAmmoDropWeightAttributeValueResolver")
        .def_readwrite("Resource", &UAmmoDropWeightAttributeValueResolver::Resource)
        .def_readwrite("ResourceThreshold", &UAmmoDropWeightAttributeValueResolver::ResourceThreshold)
        .def_readwrite("AboveThresholdWeight", &UAmmoDropWeightAttributeValueResolver::AboveThresholdWeight)
        .def_readwrite("NoPoolWeight", &UAmmoDropWeightAttributeValueResolver::NoPoolWeight)
        .def_readwrite("MinBelowThresholdWeight", &UAmmoDropWeightAttributeValueResolver::MinBelowThresholdWeight)
        .def_readwrite("MaxBelowThresholdWeight", &UAmmoDropWeightAttributeValueResolver::MaxBelowThresholdWeight)
        .def("StaticClass", &UAmmoDropWeightAttributeValueResolver::StaticClass, py::return_value_policy::reference)
          ;
}