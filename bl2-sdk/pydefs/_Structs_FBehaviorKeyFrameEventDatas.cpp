#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBehaviorKeyFrameEventData(py::module &m)
{
    py::class_< FBehaviorKeyFrameEventData,  FSpecializedBehaviorEvent   >(m, "FBehaviorKeyFrameEventData")
        .def_readwrite("KeyTime", &FBehaviorKeyFrameEventData::KeyTime)
  ;
}