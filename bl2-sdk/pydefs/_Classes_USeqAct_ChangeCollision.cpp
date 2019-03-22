#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_ChangeCollision(py::module &m)
{
    py::class_< USeqAct_ChangeCollision,  USequenceAction   >(m, "USeqAct_ChangeCollision")
        .def_readwrite("CollisionType", &USeqAct_ChangeCollision::CollisionType)
        .def("eventGetObjClassVersion", &USeqAct_ChangeCollision::eventGetObjClassVersion)
          ;
}