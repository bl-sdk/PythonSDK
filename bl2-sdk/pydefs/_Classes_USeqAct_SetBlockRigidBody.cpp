#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_SetBlockRigidBody(py::object m)
{
    py::class_< USeqAct_SetBlockRigidBody,  USequenceAction   >(m, "USeqAct_SetBlockRigidBody")
        .def("StaticClass", &USeqAct_SetBlockRigidBody::StaticClass, py::return_value_policy::reference)
          ;
}