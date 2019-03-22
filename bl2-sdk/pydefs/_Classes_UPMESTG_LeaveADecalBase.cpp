#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPMESTG_LeaveADecalBase(py::module &m)
{
    py::class_< UPMESTG_LeaveADecalBase,  UParticleModuleEventSendToGame   >(m, "UPMESTG_LeaveADecalBase")
        .def_readwrite("PhysicalMaterialPropertyClass", &UPMESTG_LeaveADecalBase::PhysicalMaterialPropertyClass)
          ;
}