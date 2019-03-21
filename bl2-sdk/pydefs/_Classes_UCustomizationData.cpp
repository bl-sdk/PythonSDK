#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UCustomizationData()
{
    class_< UCustomizationData, bases< UGBXDefinition >  , boost::noncopyable>("UCustomizationData", no_init)
        .def_readwrite("MyDefinition", &UCustomizationData::MyDefinition)
        .def_readwrite("PickupMesh", &UCustomizationData::PickupMesh)
        .def_readwrite("PickupFlagIcon", &UCustomizationData::PickupFlagIcon)
        .def_readwrite("NumReferencers", &UCustomizationData::NumReferencers)
        .def("StaticClass", &UCustomizationData::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyCustomizationToInstanceDataSet", &UCustomizationData::ApplyCustomizationToInstanceDataSet)
        .def("ApplyCustomization", &UCustomizationData::ApplyCustomization)
        .def("ApplyCustomizationToDataSets", &UCustomizationData::ApplyCustomizationToDataSets)
        .staticmethod("StaticClass")
  ;
}