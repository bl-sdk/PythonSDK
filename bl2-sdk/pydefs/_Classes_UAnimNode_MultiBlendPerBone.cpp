#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAnimNode_MultiBlendPerBone()
{
    class_< UAnimNode_MultiBlendPerBone, bases< UAnimNodeBlendBase >  , boost::noncopyable>("UAnimNode_MultiBlendPerBone", no_init)
        .def_readwrite("PawnOwner", &UAnimNode_MultiBlendPerBone::PawnOwner)
        .def_readwrite("MaskList", &UAnimNode_MultiBlendPerBone::MaskList)
        .def_readwrite("RotationBlendType", &UAnimNode_MultiBlendPerBone::RotationBlendType)
        .def("StaticClass", &UAnimNode_MultiBlendPerBone::StaticClass, return_value_policy< reference_existing_object >())
        .def("SetMaskWeight", &UAnimNode_MultiBlendPerBone::SetMaskWeight)
        .staticmethod("StaticClass")
  ;
}