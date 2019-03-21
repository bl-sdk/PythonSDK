#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FConditionalAnimationData()
{
    class_< FConditionalAnimationData >("FConditionalAnimationData", no_init)
        .def_readwrite("Expression", &FConditionalAnimationData::Expression)
        .def_readwrite("AnimationName", &FConditionalAnimationData::AnimationName)
        .def_readwrite("CameraAnim", &FConditionalAnimationData::CameraAnim)
        .def_readwrite("AnimSet", &FConditionalAnimationData::AnimSet)
  ;
}