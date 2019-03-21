#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_AttachToActor()
{
    class_< USeqAct_AttachToActor, bases< USequenceAction >  , boost::noncopyable>("USeqAct_AttachToActor", no_init)
        .def_readwrite("BoneName", &USeqAct_AttachToActor::BoneName)
        .def_readwrite("RelativeOffset", &USeqAct_AttachToActor::RelativeOffset)
        .def_readwrite("RelativeRotation", &USeqAct_AttachToActor::RelativeRotation)
        .def("StaticClass", &USeqAct_AttachToActor::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventGetObjClassVersion", &USeqAct_AttachToActor::eventGetObjClassVersion)
        .staticmethod("StaticClass")
  ;
}