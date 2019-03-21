#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAmmoDropWeightAttributeValueResolver()
{
    class_< UAmmoDropWeightAttributeValueResolver, bases< UAttributeValueResolver >  , boost::noncopyable>("UAmmoDropWeightAttributeValueResolver", no_init)
        .def_readwrite("Resource", &UAmmoDropWeightAttributeValueResolver::Resource)
        .def_readwrite("ResourceThreshold", &UAmmoDropWeightAttributeValueResolver::ResourceThreshold)
        .def_readwrite("AboveThresholdWeight", &UAmmoDropWeightAttributeValueResolver::AboveThresholdWeight)
        .def_readwrite("NoPoolWeight", &UAmmoDropWeightAttributeValueResolver::NoPoolWeight)
        .def_readwrite("MinBelowThresholdWeight", &UAmmoDropWeightAttributeValueResolver::MinBelowThresholdWeight)
        .def_readwrite("MaxBelowThresholdWeight", &UAmmoDropWeightAttributeValueResolver::MaxBelowThresholdWeight)
        .def("StaticClass", &UAmmoDropWeightAttributeValueResolver::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}