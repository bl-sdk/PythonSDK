#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBehaviorThread()
{
    py::class_< FBehaviorThread >("FBehaviorThread")
        .def_readwrite("ThreadState", &FBehaviorThread::ThreadState)
        .def_readwrite("OwningProcessID", &FBehaviorThread::OwningProcessID)
        .def_readwrite("ThreadSequenceState", &FBehaviorThread::ThreadSequenceState)
        .def_readwrite("NextBehavior", &FBehaviorThread::NextBehavior)
        .def_readwrite("ActivateTime", &FBehaviorThread::ActivateTime)
        .def_readwrite("BehaviorStartedTime", &FBehaviorThread::BehaviorStartedTime)
  ;
}