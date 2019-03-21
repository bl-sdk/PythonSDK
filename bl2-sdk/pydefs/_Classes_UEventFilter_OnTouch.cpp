#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UEventFilter_OnTouch()
{
    class_< UEventFilter_OnTouch, bases< UBehaviorEventFilterBase >  , boost::noncopyable>("UEventFilter_OnTouch", no_init)
        .def("StaticClass", &UEventFilter_OnTouch::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventAllowedToRunThisEvent", &UEventFilter_OnTouch::eventAllowedToRunThisEvent)
        .def("PassesAllegianceTests", &UEventFilter_OnTouch::PassesAllegianceTests)
        .staticmethod("StaticClass")
  ;
}