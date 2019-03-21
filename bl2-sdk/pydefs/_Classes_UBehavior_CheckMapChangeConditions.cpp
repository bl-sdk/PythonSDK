#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_CheckMapChangeConditions()
{
    class_< UBehavior_CheckMapChangeConditions, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_CheckMapChangeConditions", no_init)
        .def_readwrite("MapChangeCustomEvent", &UBehavior_CheckMapChangeConditions::MapChangeCustomEvent)
        .def_readwrite("PlayerBusyCustomEvent", &UBehavior_CheckMapChangeConditions::PlayerBusyCustomEvent)
        .def("StaticClass", &UBehavior_CheckMapChangeConditions::StaticClass, return_value_policy< reference_existing_object >())
        .def("PlayerBusyEvent", &UBehavior_CheckMapChangeConditions::PlayerBusyEvent)
        .def("MapChangeEvent", &UBehavior_CheckMapChangeConditions::MapChangeEvent)
        .def("GetDestinationStationDefinition", &UBehavior_CheckMapChangeConditions::GetDestinationStationDefinition, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_CheckMapChangeConditions::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}