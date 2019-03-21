#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UEventFilter_OnTouch()
{
    py::class_< UEventFilter_OnTouch,  UBehaviorEventFilterBase   >("UEventFilter_OnTouch")
        .def("StaticClass", &UEventFilter_OnTouch::StaticClass, py::return_value_policy::reference)
        .def("eventAllowedToRunThisEvent", &UEventFilter_OnTouch::eventAllowedToRunThisEvent)
        .def("PassesAllegianceTests", &UEventFilter_OnTouch::PassesAllegianceTests)
        .staticmethod("StaticClass")
  ;
}