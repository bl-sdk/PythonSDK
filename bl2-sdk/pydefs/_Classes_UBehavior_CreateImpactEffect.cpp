#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_CreateImpactEffect(py::module &m)
{
    py::class_< UBehavior_CreateImpactEffect,  UBehaviorBase   >(m, "UBehavior_CreateImpactEffect")
        .def_readwrite("ImpactDefinition", &UBehavior_CreateImpactEffect::ImpactDefinition)
        .def_readwrite("ImpactPointName", &UBehavior_CreateImpactEffect::ImpactPointName)
        .def_readwrite("ImpactDirection", &UBehavior_CreateImpactEffect::ImpactDirection)
        .def_readwrite("ImpactTraceLength", &UBehavior_CreateImpactEffect::ImpactTraceLength)
        .def_readwrite("ImpactTraceStartBackupLength", &UBehavior_CreateImpactEffect::ImpactTraceStartBackupLength)
        .def("ApplyBehaviorToContext", &UBehavior_CreateImpactEffect::ApplyBehaviorToContext)
          ;
}