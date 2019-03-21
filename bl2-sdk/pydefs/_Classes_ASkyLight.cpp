#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ASkyLight()
{
    class_< ASkyLight, bases< ALight >  , boost::noncopyable>("ASkyLight", no_init)
        .def("StaticClass", &ASkyLight::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}