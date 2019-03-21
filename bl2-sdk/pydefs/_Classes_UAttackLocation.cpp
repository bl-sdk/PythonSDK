#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAttackLocation()
{
    class_< UAttackLocation, bases< UObject >  , boost::noncopyable>("UAttackLocation", no_init)
        .def("StaticClass", &UAttackLocation::StaticClass, return_value_policy< reference_existing_object >())
        .def("ValidLocation", &UAttackLocation::ValidLocation)
        .def("IsRunning", &UAttackLocation::IsRunning)
        .def("CanPath", &UAttackLocation::CanPath)
        .staticmethod("StaticClass")
  ;
}