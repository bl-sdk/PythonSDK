#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_SetRigidBodyIgnoreVehicles()
{
    py::class_< USeqAct_SetRigidBodyIgnoreVehicles,  USequenceAction   >("USeqAct_SetRigidBodyIgnoreVehicles")
        .def("StaticClass", &USeqAct_SetRigidBodyIgnoreVehicles::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}