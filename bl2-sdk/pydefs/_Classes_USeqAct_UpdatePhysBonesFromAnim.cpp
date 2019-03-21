#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_UpdatePhysBonesFromAnim()
{
    class_< USeqAct_UpdatePhysBonesFromAnim, bases< USequenceAction >  , boost::noncopyable>("USeqAct_UpdatePhysBonesFromAnim", no_init)
        .def("StaticClass", &USeqAct_UpdatePhysBonesFromAnim::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventGetObjClassVersion", &USeqAct_UpdatePhysBonesFromAnim::eventGetObjClassVersion)
        .staticmethod("StaticClass")
  ;
}