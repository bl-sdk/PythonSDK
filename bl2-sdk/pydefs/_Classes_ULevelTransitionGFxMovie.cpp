#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ULevelTransitionGFxMovie()
{
    class_< ULevelTransitionGFxMovie, bases< UWillowGFxMovie >  , boost::noncopyable>("ULevelTransitionGFxMovie", no_init)
        .def("StaticClass", &ULevelTransitionGFxMovie::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}