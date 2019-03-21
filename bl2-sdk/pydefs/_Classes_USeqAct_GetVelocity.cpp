#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_GetVelocity()
{
    py::class_< USeqAct_GetVelocity,  USequenceAction   >("USeqAct_GetVelocity")
        .def_readwrite("VelocityMag", &USeqAct_GetVelocity::VelocityMag)
        .def_readwrite("VelocityVect", &USeqAct_GetVelocity::VelocityVect)
        .def("StaticClass", &USeqAct_GetVelocity::StaticClass, py::return_value_policy::reference)
        .def("eventGetObjClassVersion", &USeqAct_GetVelocity::eventGetObjClassVersion)
        .staticmethod("StaticClass")
  ;
}