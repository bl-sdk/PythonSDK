#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ARB_Thruster()
{
    class_< ARB_Thruster, bases< ARigidBodyBase >  , boost::noncopyable>("ARB_Thruster", no_init)
        .def_readwrite("ThrustStrength", &ARB_Thruster::ThrustStrength)
        .def("StaticClass", &ARB_Thruster::StaticClass, return_value_policy< reference_existing_object >())
        .def("OnToggle", &ARB_Thruster::OnToggle)
        .staticmethod("StaticClass")
  ;
}