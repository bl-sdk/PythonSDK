#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIPursuitBehavior()
{
    class_< UIPursuitBehavior, bases< UInterface >  , boost::noncopyable>("UIPursuitBehavior", no_init)
        .def("StaticClass", &UIPursuitBehavior::StaticClass, return_value_policy< reference_existing_object >())
        .def("Behavior_SetPreferredNodeType", &UIPursuitBehavior::Behavior_SetPreferredNodeType)
        .staticmethod("StaticClass")
  ;
}