#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_AttachToActor(py::module &m)
{
    py::class_< USeqAct_AttachToActor,  USequenceAction   >(m, "USeqAct_AttachToActor")
        .def_readwrite("BoneName", &USeqAct_AttachToActor::BoneName)
        .def_readwrite("RelativeOffset", &USeqAct_AttachToActor::RelativeOffset)
        .def_readwrite("RelativeRotation", &USeqAct_AttachToActor::RelativeRotation)
        .def("StaticClass", &USeqAct_AttachToActor::StaticClass, py::return_value_policy::reference)
        .def("eventGetObjClassVersion", &USeqAct_AttachToActor::eventGetObjClassVersion)
          ;
}