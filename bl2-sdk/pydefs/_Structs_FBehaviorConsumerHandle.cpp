#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FBehaviorConsumerHandle()
{
    class_< FBehaviorConsumerHandle >("FBehaviorConsumerHandle", no_init)
        .def_readwrite("PID", &FBehaviorConsumerHandle::PID)
  ;
}