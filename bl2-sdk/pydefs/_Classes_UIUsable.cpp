#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIUsable()
{
    class_< UIUsable, bases< UInterface >  , boost::noncopyable>("UIUsable", no_init)
        .def("StaticClass", &UIUsable::StaticClass, return_value_policy< reference_existing_object >())
        .def("NotifyUserCouldNotAffordAttemptedUse", &UIUsable::NotifyUserCouldNotAffordAttemptedUse)
        .def("SetInteractionIcon", &UIUsable::SetInteractionIcon)
        .def("UseObject", &UIUsable::UseObject)
        .staticmethod("StaticClass")
  ;
}