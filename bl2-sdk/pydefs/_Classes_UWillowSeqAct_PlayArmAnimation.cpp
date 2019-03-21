#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_PlayArmAnimation()
{
    class_< UWillowSeqAct_PlayArmAnimation, bases< USequenceAction >  , boost::noncopyable>("UWillowSeqAct_PlayArmAnimation", no_init)
        .def_readwrite("AnimationType", &UWillowSeqAct_PlayArmAnimation::AnimationType)
        .def("StaticClass", &UWillowSeqAct_PlayArmAnimation::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}