#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIFocusable()
{
    class_< UIFocusable, bases< UInterface >  , boost::noncopyable>("UIFocusable", no_init)
        .def("StaticClass", &UIFocusable::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetFocusScreenOffset", &UIFocusable::GetFocusScreenOffset)
        .def("GetFocusRadius", &UIFocusable::GetFocusRadius)
        .def("GetFocusLocation", &UIFocusable::GetFocusLocation)
        .def("EndFocus", &UIFocusable::EndFocus)
        .def("BeginFocus", &UIFocusable::BeginFocus)
        .staticmethod("StaticClass")
  ;
}