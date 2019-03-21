#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_ModifyHealth()
{
    class_< USeqAct_ModifyHealth, bases< USequenceAction >  , boost::noncopyable>("USeqAct_ModifyHealth", no_init)
        .def_readwrite("DamageType", &USeqAct_ModifyHealth::DamageType)
        .def_readwrite("DamageTypeDefinition", &USeqAct_ModifyHealth::DamageTypeDefinition)
        .def_readwrite("ImpactDefinition", &USeqAct_ModifyHealth::ImpactDefinition)
        .def_readwrite("Momentum", &USeqAct_ModifyHealth::Momentum)
        .def_readwrite("Amount", &USeqAct_ModifyHealth::Amount)
        .def_readwrite("Radius", &USeqAct_ModifyHealth::Radius)
        .def_readwrite("Instigator", &USeqAct_ModifyHealth::Instigator)
        .def("StaticClass", &USeqAct_ModifyHealth::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventGetObjClassVersion", &USeqAct_ModifyHealth::eventGetObjClassVersion)
        .staticmethod("StaticClass")
  ;
}