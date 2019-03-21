#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FBehaviorThread()
{
    class_< FBehaviorThread >("FBehaviorThread", no_init)
        .def_readwrite("ThreadState", &FBehaviorThread::ThreadState)
        .def_readwrite("OwningProcessID", &FBehaviorThread::OwningProcessID)
        .def_readwrite("ThreadSequenceState", &FBehaviorThread::ThreadSequenceState)
        .def_readwrite("NextBehavior", &FBehaviorThread::NextBehavior)
        .def_readwrite("ActivateTime", &FBehaviorThread::ActivateTime)
        .def_readwrite("BehaviorStartedTime", &FBehaviorThread::BehaviorStartedTime)
  ;
}