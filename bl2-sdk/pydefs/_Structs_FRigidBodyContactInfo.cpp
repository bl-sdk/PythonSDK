#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FRigidBodyContactInfo()
{
    class_< FRigidBodyContactInfo >("FRigidBodyContactInfo", no_init)
        .def_readwrite("ContactPosition", &FRigidBodyContactInfo::ContactPosition)
        .def_readwrite("ContactNormal", &FRigidBodyContactInfo::ContactNormal)
        .def_readwrite("ContactPenetration", &FRigidBodyContactInfo::ContactPenetration)
        .def_readonly("ContactVelocity", &FRigidBodyContactInfo::ContactVelocity)
        .def_readonly("PhysMaterial", &FRigidBodyContactInfo::PhysMaterial)
  ;
}