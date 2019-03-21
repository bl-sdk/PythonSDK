#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FConditionalAnimationData()
{
    py::class_< FConditionalAnimationData >("FConditionalAnimationData")
        .def_readwrite("Expression", &FConditionalAnimationData::Expression)
        .def_readwrite("AnimationName", &FConditionalAnimationData::AnimationName)
        .def_readwrite("CameraAnim", &FConditionalAnimationData::CameraAnim)
        .def_readwrite("AnimSet", &FConditionalAnimationData::AnimSet)
  ;
}