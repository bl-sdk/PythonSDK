#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_SetVelocity(py::object m)
{
    py::class_< USeqAct_SetVelocity,  USequenceAction   >(m, "USeqAct_SetVelocity")
        .def_readwrite("VelocityDir", &USeqAct_SetVelocity::VelocityDir)
        .def_readwrite("VelocityMag", &USeqAct_SetVelocity::VelocityMag)
        .def("StaticClass", &USeqAct_SetVelocity::StaticClass, py::return_value_policy::reference)
        .def("eventGetObjClassVersion", &USeqAct_SetVelocity::eventGetObjClassVersion)
          ;
}