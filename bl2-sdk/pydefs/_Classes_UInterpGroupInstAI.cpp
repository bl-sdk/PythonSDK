#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpGroupInstAI(py::module &m)
{
    py::class_< UInterpGroupInstAI,  UInterpGroupInst   >(m, "UInterpGroupInstAI")
        .def_readwrite("AIGroup", &UInterpGroupInstAI::AIGroup)
        .def_readwrite("SavedPhysics", &UInterpGroupInstAI::SavedPhysics)
        .def_readwrite("StageMarkActor", &UInterpGroupInstAI::StageMarkActor)
          ;
}