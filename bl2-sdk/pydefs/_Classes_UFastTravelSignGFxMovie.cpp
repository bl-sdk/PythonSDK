#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UFastTravelSignGFxMovie()
{
    class_< UFastTravelSignGFxMovie, bases< UGFxMovieInteractiveObject >  , boost::noncopyable>("UFastTravelSignGFxMovie", no_init)
        .def("StaticClass", &UFastTravelSignGFxMovie::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventStart", &UFastTravelSignGFxMovie::eventStart)
        .staticmethod("StaticClass")
  ;
}