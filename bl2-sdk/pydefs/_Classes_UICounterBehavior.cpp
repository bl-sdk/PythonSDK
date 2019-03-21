#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UICounterBehavior()
{
    class_< UICounterBehavior, bases< UInterface >  , boost::noncopyable>("UICounterBehavior", no_init)
        .def("StaticClass", &UICounterBehavior::StaticClass, return_value_policy< reference_existing_object >())
        .def("SetCounterState", &UICounterBehavior::SetCounterState)
        .def("GetCounterState", &UICounterBehavior::GetCounterState)
        .def("OnCounterEvent", &UICounterBehavior::OnCounterEvent)
        .staticmethod("StaticClass")
  ;
}