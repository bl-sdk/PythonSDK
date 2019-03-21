#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGFxMovieInteractiveObject()
{
    class_< UGFxMovieInteractiveObject, bases< UGearboxGFxMovie >  , boost::noncopyable>("UGFxMovieInteractiveObject", no_init)
        .def("StaticClass", &UGFxMovieInteractiveObject::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}