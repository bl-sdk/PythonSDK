#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FRigidBodyContactInfo(py::module &m)
{
    py::class_< FRigidBodyContactInfo >(m, "FRigidBodyContactInfo")
        .def_readwrite("ContactPosition", &FRigidBodyContactInfo::ContactPosition)
        .def_readwrite("ContactNormal", &FRigidBodyContactInfo::ContactNormal)
        .def_readwrite("ContactPenetration", &FRigidBodyContactInfo::ContactPenetration)
  ;
}