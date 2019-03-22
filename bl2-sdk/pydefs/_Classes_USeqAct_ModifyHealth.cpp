#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_ModifyHealth(py::module &m)
{
    py::class_< USeqAct_ModifyHealth,  USequenceAction   >(m, "USeqAct_ModifyHealth")
        .def_readwrite("DamageType", &USeqAct_ModifyHealth::DamageType)
        .def_readwrite("DamageTypeDefinition", &USeqAct_ModifyHealth::DamageTypeDefinition)
        .def_readwrite("ImpactDefinition", &USeqAct_ModifyHealth::ImpactDefinition)
        .def_readwrite("Momentum", &USeqAct_ModifyHealth::Momentum)
        .def_readwrite("Amount", &USeqAct_ModifyHealth::Amount)
        .def_readwrite("Radius", &USeqAct_ModifyHealth::Radius)
        .def_readwrite("Instigator", &USeqAct_ModifyHealth::Instigator)
        .def("eventGetObjClassVersion", &USeqAct_ModifyHealth::eventGetObjClassVersion)
          ;
}