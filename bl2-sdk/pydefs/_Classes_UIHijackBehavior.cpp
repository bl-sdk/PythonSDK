#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIHijackBehavior()
{
    class_< UIHijackBehavior, bases< UInterface >  , boost::noncopyable>("UIHijackBehavior", no_init)
        .def("StaticClass", &UIHijackBehavior::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}