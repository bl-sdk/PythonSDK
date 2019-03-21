#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowAnimNodeAimOffset_BoundaryTurret()
{
    class_< UWillowAnimNodeAimOffset_BoundaryTurret, bases< UWillowAnimNodeAimOffset >  , boost::noncopyable>("UWillowAnimNodeAimOffset_BoundaryTurret", no_init)
        .def("StaticClass", &UWillowAnimNodeAimOffset_BoundaryTurret::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetDesiredAim", &UWillowAnimNodeAimOffset_BoundaryTurret::GetDesiredAim)
        .staticmethod("StaticClass")
  ;
}