#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_AttachPlayerPawnToBase()
{
    class_< USeqAct_AttachPlayerPawnToBase, bases< USequenceAction >  , boost::noncopyable>("USeqAct_AttachPlayerPawnToBase", no_init)
        .def_readwrite("BoneName", &USeqAct_AttachPlayerPawnToBase::BoneName)
        .def_readwrite("RelativeOffset", &USeqAct_AttachPlayerPawnToBase::RelativeOffset)
        .def_readwrite("RelativeRotation", &USeqAct_AttachPlayerPawnToBase::RelativeRotation)
        .def_readwrite("PhysicsMode", &USeqAct_AttachPlayerPawnToBase::PhysicsMode)
        .def("StaticClass", &USeqAct_AttachPlayerPawnToBase::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}