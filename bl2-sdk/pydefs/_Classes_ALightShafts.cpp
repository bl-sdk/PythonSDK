#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ALightShafts()
{
    class_< ALightShafts, bases< ALight >  , boost::noncopyable>("ALightShafts", no_init)
        .def("StaticClass", &ALightShafts::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}