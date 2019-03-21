#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AWillowCoopPlayerStart()
{
    class_< AWillowCoopPlayerStart, bases< APlayerStart >  , boost::noncopyable>("AWillowCoopPlayerStart", no_init)
        .def("StaticClass", &AWillowCoopPlayerStart::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}