#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_DestroyWeatherSystem()
{
    class_< UBehavior_DestroyWeatherSystem, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_DestroyWeatherSystem", no_init)
        .def("StaticClass", &UBehavior_DestroyWeatherSystem::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_DestroyWeatherSystem::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}