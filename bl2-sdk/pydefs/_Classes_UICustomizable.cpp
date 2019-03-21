#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UICustomizable()
{
    class_< UICustomizable, bases< UInterface >  , boost::noncopyable>("UICustomizable", no_init)
        .def("StaticClass", &UICustomizable::StaticClass, return_value_policy< reference_existing_object >())
        .def("AllowFallbackToDefaultCustomizations", &UICustomizable::AllowFallbackToDefaultCustomizations)
        .def("RefreshCustomizationsOnInstanceData", &UICustomizable::RefreshCustomizationsOnInstanceData)
        .def("GetCustomizableName", &UICustomizable::GetCustomizableName)
        .def("GetDesiredCustomizationOfType", &UICustomizable::GetDesiredCustomizationOfType, return_value_policy< reference_existing_object >())
        .def("CustomizationApplied", &UICustomizable::CustomizationApplied)
        .def("GetCustomizableInstanceDataSets", &UICustomizable::GetCustomizableInstanceDataSets)
        .staticmethod("StaticClass")
  ;
}