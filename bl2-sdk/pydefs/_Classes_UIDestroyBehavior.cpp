#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIDestroyBehavior()
{
    class_< UIDestroyBehavior, bases< UInterface >  , boost::noncopyable>("UIDestroyBehavior", no_init)
        .def("StaticClass", &UIDestroyBehavior::StaticClass, return_value_policy< reference_existing_object >())
        .def("Behavior_Destroy", &UIDestroyBehavior::Behavior_Destroy)
        .staticmethod("StaticClass")
  ;
}