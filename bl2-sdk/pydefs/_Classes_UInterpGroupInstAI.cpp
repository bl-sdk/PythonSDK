#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpGroupInstAI(py::module &m)
{
    py::class_< UInterpGroupInstAI,  UInterpGroupInst   >(m, "UInterpGroupInstAI")
		.def_static("StaticClass", &UInterpGroupInstAI::StaticClass, py::return_value_policy::reference)
        .def_readwrite("AIGroup", &UInterpGroupInstAI::AIGroup)
        .def_readwrite("SavedPhysics", &UInterpGroupInstAI::SavedPhysics)
        .def_readwrite("StageMarkActor", &UInterpGroupInstAI::StageMarkActor)
          ;
}