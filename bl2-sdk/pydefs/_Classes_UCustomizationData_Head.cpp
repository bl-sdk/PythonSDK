#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UCustomizationData_Head()
{
    class_< UCustomizationData_Head, bases< UCustomizationData >  , boost::noncopyable>("UCustomizationData_Head", no_init)
        .def_readwrite("HeadMesh", &UCustomizationData_Head::HeadMesh)
        .def_readwrite("InstanceDataName", &UCustomizationData_Head::InstanceDataName)
        .def("StaticClass", &UCustomizationData_Head::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyCustomizationToInstanceDataSet", &UCustomizationData_Head::ApplyCustomizationToInstanceDataSet)
        .staticmethod("StaticClass")
  ;
}