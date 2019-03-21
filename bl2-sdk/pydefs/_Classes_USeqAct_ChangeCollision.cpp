#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_ChangeCollision()
{
    py::class_< USeqAct_ChangeCollision,  USequenceAction   >("USeqAct_ChangeCollision")
        .def_readwrite("CollisionType", &USeqAct_ChangeCollision::CollisionType)
        .def("StaticClass", &USeqAct_ChangeCollision::StaticClass, py::return_value_policy::reference)
        .def("eventGetObjClassVersion", &USeqAct_ChangeCollision::eventGetObjClassVersion)
        .staticmethod("StaticClass")
  ;
}