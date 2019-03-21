#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowVehicleCombatAreaRenderingComponent()
{
    class_< UWillowVehicleCombatAreaRenderingComponent, bases< UPrimitiveComponent >  , boost::noncopyable>("UWillowVehicleCombatAreaRenderingComponent", no_init)
        .def("StaticClass", &UWillowVehicleCombatAreaRenderingComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}