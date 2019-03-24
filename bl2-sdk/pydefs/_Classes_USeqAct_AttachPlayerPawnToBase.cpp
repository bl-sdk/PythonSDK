#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_AttachPlayerPawnToBase(py::module &m)
{
    py::class_< USeqAct_AttachPlayerPawnToBase,  USequenceAction   >(m, "USeqAct_AttachPlayerPawnToBase")
		.def_static("StaticClass", &USeqAct_AttachPlayerPawnToBase::StaticClass, py::return_value_policy::reference)
        .def_readwrite("BoneName", &USeqAct_AttachPlayerPawnToBase::BoneName)
        .def_readwrite("RelativeOffset", &USeqAct_AttachPlayerPawnToBase::RelativeOffset)
        .def_readwrite("RelativeRotation", &USeqAct_AttachPlayerPawnToBase::RelativeRotation)
        .def_readwrite("PhysicsMode", &USeqAct_AttachPlayerPawnToBase::PhysicsMode)
          ;
}