#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_ChangeCollision(py::object m)
{
    py::class_< USeqAct_ChangeCollision,  USequenceAction   >(m, "USeqAct_ChangeCollision")
        .def_readwrite("CollisionType", &USeqAct_ChangeCollision::CollisionType)
        .def("StaticClass", &USeqAct_ChangeCollision::StaticClass, py::return_value_policy::reference)
        .def("eventGetObjClassVersion", &USeqAct_ChangeCollision::eventGetObjClassVersion)
          ;
}