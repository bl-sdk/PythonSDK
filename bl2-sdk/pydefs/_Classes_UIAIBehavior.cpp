#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIAIBehavior()
{
    class_< UIAIBehavior, bases< UInterface >  , boost::noncopyable>("UIAIBehavior", no_init)
        .def("StaticClass", &UIAIBehavior::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}