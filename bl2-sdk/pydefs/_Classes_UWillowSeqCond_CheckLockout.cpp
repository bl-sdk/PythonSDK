#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqCond_CheckLockout()
{
    class_< UWillowSeqCond_CheckLockout, bases< USequenceCondition >  , boost::noncopyable>("UWillowSeqCond_CheckLockout", no_init)
        .def_readwrite("LockoutDef", &UWillowSeqCond_CheckLockout::LockoutDef)
        .def("StaticClass", &UWillowSeqCond_CheckLockout::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}