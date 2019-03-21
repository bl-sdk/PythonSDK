#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FBehaviorKeyFrameEventData()
{
    class_< FBehaviorKeyFrameEventData, bases< FSpecializedBehaviorEvent >  >("FBehaviorKeyFrameEventData", no_init)
        .def_readwrite("KeyTime", &FBehaviorKeyFrameEventData::KeyTime)
  ;
}