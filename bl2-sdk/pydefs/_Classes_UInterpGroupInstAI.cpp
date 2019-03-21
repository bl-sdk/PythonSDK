#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpGroupInstAI()
{
    py::class_< UInterpGroupInstAI,  UInterpGroupInst   >("UInterpGroupInstAI")
        .def_readwrite("AIGroup", &UInterpGroupInstAI::AIGroup)
        .def_readwrite("SavedPhysics", &UInterpGroupInstAI::SavedPhysics)
        .def_readwrite("StageMarkActor", &UInterpGroupInstAI::StageMarkActor)
        .def("StaticClass", &UInterpGroupInstAI::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}