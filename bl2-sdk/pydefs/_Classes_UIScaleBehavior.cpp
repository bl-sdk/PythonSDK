#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIScaleBehavior()
{
    class_< UIScaleBehavior, bases< UInterface >  , boost::noncopyable>("UIScaleBehavior", no_init)
        .def("StaticClass", &UIScaleBehavior::StaticClass, return_value_policy< reference_existing_object >())
        .def("Behavior_ChangeScale", &UIScaleBehavior::Behavior_ChangeScale)
        .staticmethod("StaticClass")
  ;
}