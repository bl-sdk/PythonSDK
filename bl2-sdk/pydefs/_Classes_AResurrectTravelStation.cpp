#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AResurrectTravelStation()
{
    class_< AResurrectTravelStation, bases< ATravelStation >  , boost::noncopyable>("AResurrectTravelStation", no_init)
        .def("StaticClass", &AResurrectTravelStation::StaticClass, return_value_policy< reference_existing_object >())
        .def("CanResurrectHere", &AResurrectTravelStation::CanResurrectHere)
        .staticmethod("StaticClass")
  ;
}