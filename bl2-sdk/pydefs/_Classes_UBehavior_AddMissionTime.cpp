#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_AddMissionTime()
{
    class_< UBehavior_AddMissionTime, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_AddMissionTime", no_init)
        .def_readwrite("SecondsToAdd", &UBehavior_AddMissionTime::SecondsToAdd)
        .def("StaticClass", &UBehavior_AddMissionTime::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_AddMissionTime::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}