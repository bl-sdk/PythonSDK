#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_GetVelocity(py::module &m)
{
    py::class_< USeqAct_GetVelocity,  USequenceAction   >(m, "USeqAct_GetVelocity")
		.def_static("StaticClass", &USeqAct_GetVelocity::StaticClass, py::return_value_policy::reference)
        .def_readwrite("VelocityMag", &USeqAct_GetVelocity::VelocityMag)
        .def_readwrite("VelocityVect", &USeqAct_GetVelocity::VelocityVect)
        .def("eventGetObjClassVersion", &USeqAct_GetVelocity::eventGetObjClassVersion)
          ;
}