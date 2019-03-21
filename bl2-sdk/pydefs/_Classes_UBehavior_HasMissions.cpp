#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_HasMissions()
{
    class_< UBehavior_HasMissions, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_HasMissions", no_init)
        .def("StaticClass", &UBehavior_HasMissions::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_HasMissions::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}