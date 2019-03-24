#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_SetVelocity(py::module &m)
{
    py::class_< USeqAct_SetVelocity,  USequenceAction   >(m, "USeqAct_SetVelocity")
		.def_static("StaticClass", &USeqAct_SetVelocity::StaticClass, py::return_value_policy::reference)
        .def_readwrite("VelocityDir", &USeqAct_SetVelocity::VelocityDir)
        .def_readwrite("VelocityMag", &USeqAct_SetVelocity::VelocityMag)
        .def("eventGetObjClassVersion", &USeqAct_SetVelocity::eventGetObjClassVersion)
          ;
}