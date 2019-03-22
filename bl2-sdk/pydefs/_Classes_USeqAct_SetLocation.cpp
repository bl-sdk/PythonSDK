#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_SetLocation(py::module &m)
{
    py::class_< USeqAct_SetLocation,  USequenceAction   >(m, "USeqAct_SetLocation")
        .def_readwrite("LocationValue", &USeqAct_SetLocation::LocationValue)
        .def_readwrite("RotationValue", &USeqAct_SetLocation::RotationValue)
        .def_readwrite("Target", &USeqAct_SetLocation::Target)
        .def("StaticClass", &USeqAct_SetLocation::StaticClass, py::return_value_policy::reference)
        .def("eventGetObjClassVersion", &USeqAct_SetLocation::eventGetObjClassVersion)
          ;
}