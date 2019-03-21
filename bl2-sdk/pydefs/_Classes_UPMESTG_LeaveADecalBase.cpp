#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPMESTG_LeaveADecalBase()
{
    py::class_< UPMESTG_LeaveADecalBase,  UParticleModuleEventSendToGame   >("UPMESTG_LeaveADecalBase")
        .def_readwrite("PhysicalMaterialPropertyClass", &UPMESTG_LeaveADecalBase::PhysicalMaterialPropertyClass)
        .def("StaticClass", &UPMESTG_LeaveADecalBase::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}