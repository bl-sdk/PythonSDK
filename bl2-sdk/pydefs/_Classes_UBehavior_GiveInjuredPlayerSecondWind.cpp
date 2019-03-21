#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_GiveInjuredPlayerSecondWind()
{
    class_< UBehavior_GiveInjuredPlayerSecondWind, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_GiveInjuredPlayerSecondWind", no_init)
        .def("StaticClass", &UBehavior_GiveInjuredPlayerSecondWind::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_GiveInjuredPlayerSecondWind::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}