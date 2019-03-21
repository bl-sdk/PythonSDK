#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_GetLocationAndRotation(py::object m)
{
    py::class_< USeqAct_GetLocationAndRotation,  USequenceAction   >(m, "USeqAct_GetLocationAndRotation")
        .def_readwrite("Location", &USeqAct_GetLocationAndRotation::Location)
        .def_readwrite("RotationVector", &USeqAct_GetLocationAndRotation::RotationVector)
        .def_readwrite("Rotation", &USeqAct_GetLocationAndRotation::Rotation)
        .def_readwrite("SocketOrBoneName", &USeqAct_GetLocationAndRotation::SocketOrBoneName)
        .def("StaticClass", &USeqAct_GetLocationAndRotation::StaticClass, py::return_value_policy::reference)
        .def("eventGetObjClassVersion", &USeqAct_GetLocationAndRotation::eventGetObjClassVersion)
          ;
}