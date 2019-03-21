#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_SetSkelControlTarget()
{
    class_< USeqAct_SetSkelControlTarget, bases< USequenceAction >  , boost::noncopyable>("USeqAct_SetSkelControlTarget", no_init)
        .def_readwrite("SkelControlName", &USeqAct_SetSkelControlTarget::SkelControlName)
        .def_readwrite("TargetActors", &USeqAct_SetSkelControlTarget::TargetActors)
        .def("StaticClass", &USeqAct_SetSkelControlTarget::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}