#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPMESTG_LeaveADecalBase()
{
    class_< UPMESTG_LeaveADecalBase, bases< UParticleModuleEventSendToGame >  , boost::noncopyable>("UPMESTG_LeaveADecalBase", no_init)
        .def_readwrite("PhysicalMaterialPropertyClass", &UPMESTG_LeaveADecalBase::PhysicalMaterialPropertyClass)
        .def("StaticClass", &UPMESTG_LeaveADecalBase::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}