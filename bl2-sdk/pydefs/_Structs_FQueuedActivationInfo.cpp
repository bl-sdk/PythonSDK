#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FQueuedActivationInfo()
{
    class_< FQueuedActivationInfo >("FQueuedActivationInfo", no_init)
        .def_readwrite("ActivatedEvent", &FQueuedActivationInfo::ActivatedEvent)
        .def_readwrite("InOriginator", &FQueuedActivationInfo::InOriginator)
        .def_readwrite("InInstigator", &FQueuedActivationInfo::InInstigator)
        .def_readwrite("ActivateIndices", &FQueuedActivationInfo::ActivateIndices)
  ;
}