#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UTravelStationNozzleComponent()
{
    class_< UTravelStationNozzleComponent, bases< UPrimitiveComponent >  , boost::noncopyable>("UTravelStationNozzleComponent", no_init)
        .def("StaticClass", &UTravelStationNozzleComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}