#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIBehaviorProvider()
{
    class_< UIBehaviorProvider, bases< UInterface >  , boost::noncopyable>("UIBehaviorProvider", no_init)
        .def("StaticClass", &UIBehaviorProvider::StaticClass, return_value_policy< reference_existing_object >())
        .def("SetBehaviorProviderDefinition", &UIBehaviorProvider::SetBehaviorProviderDefinition)
        .def("GetBehaviorProviderDefinition", &UIBehaviorProvider::GetBehaviorProviderDefinition, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}