#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowVendingMachineDefinition()
{
    class_< UWillowVendingMachineDefinition, bases< UInteractiveObjectDefinition >  , boost::noncopyable>("UWillowVendingMachineDefinition", no_init)
        .def("StaticClass", &UWillowVendingMachineDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("OnFeaturedItemSet", &UWillowVendingMachineDefinition::OnFeaturedItemSet)
        .staticmethod("StaticClass")
  ;
}