#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBehaviorKeyFrameEventData()
{
    py::class_< FBehaviorKeyFrameEventData,  FSpecializedBehaviorEvent   >("FBehaviorKeyFrameEventData")
        .def_readwrite("KeyTime", &FBehaviorKeyFrameEventData::KeyTime)
  ;
}