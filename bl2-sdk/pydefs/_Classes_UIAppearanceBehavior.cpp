#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIAppearanceBehavior()
{
    class_< UIAppearanceBehavior, bases< UInterface >  , boost::noncopyable>("UIAppearanceBehavior", no_init)
        .def("StaticClass", &UIAppearanceBehavior::StaticClass, return_value_policy< reference_existing_object >())
        .def("Behavior_ChangeVisibility", &UIAppearanceBehavior::Behavior_ChangeVisibility)
        .def("Behavior_ToggleVisibility", &UIAppearanceBehavior::Behavior_ToggleVisibility)
        .staticmethod("StaticClass")
  ;
}