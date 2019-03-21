#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIFlagProvider()
{
    class_< UIFlagProvider, bases< UInterface >  , boost::noncopyable>("UIFlagProvider", no_init)
        .def("StaticClass", &UIFlagProvider::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}