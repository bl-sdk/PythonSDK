#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USearchOrigin_CurrentLocation()
{
    class_< USearchOrigin_CurrentLocation, bases< USearchOrigin >  , boost::noncopyable>("USearchOrigin_CurrentLocation", no_init)
        .def("StaticClass", &USearchOrigin_CurrentLocation::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}