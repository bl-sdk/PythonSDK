#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ADominantDirectionalLightMovable()
{
    class_< ADominantDirectionalLightMovable, bases< ADominantDirectionalLight >  , boost::noncopyable>("ADominantDirectionalLightMovable", no_init)
        .def("StaticClass", &ADominantDirectionalLightMovable::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}