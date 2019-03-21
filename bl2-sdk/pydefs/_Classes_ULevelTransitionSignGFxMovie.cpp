#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ULevelTransitionSignGFxMovie()
{
    class_< ULevelTransitionSignGFxMovie, bases< UGFxMovieInteractiveObject >  , boost::noncopyable>("ULevelTransitionSignGFxMovie", no_init)
        .def("StaticClass", &ULevelTransitionSignGFxMovie::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventStart", &ULevelTransitionSignGFxMovie::eventStart)
        .staticmethod("StaticClass")
  ;
}