#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UCustomizationData_Skin()
{
    class_< UCustomizationData_Skin, bases< UCustomizationData >  , boost::noncopyable>("UCustomizationData_Skin", no_init)
        .def_readwrite("BodyMaterial", &UCustomizationData_Skin::BodyMaterial)
        .def_readwrite("HeadMaterial", &UCustomizationData_Skin::HeadMaterial)
        .def("StaticClass", &UCustomizationData_Skin::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplySkinToMaterial", &UCustomizationData_Skin::ApplySkinToMaterial)
        .def("ApplyCustomizationToInstanceDataSet", &UCustomizationData_Skin::ApplyCustomizationToInstanceDataSet)
        .staticmethod("StaticClass")
  ;
}