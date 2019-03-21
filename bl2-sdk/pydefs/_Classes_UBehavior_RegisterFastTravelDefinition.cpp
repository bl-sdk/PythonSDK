#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_RegisterFastTravelDefinition()
{
    class_< UBehavior_RegisterFastTravelDefinition, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_RegisterFastTravelDefinition", no_init)
        .def_readwrite("StationToRegister", &UBehavior_RegisterFastTravelDefinition::StationToRegister)
        .def("StaticClass", &UBehavior_RegisterFastTravelDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_RegisterFastTravelDefinition::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}