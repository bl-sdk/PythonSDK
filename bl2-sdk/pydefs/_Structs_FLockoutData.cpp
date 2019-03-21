#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FLockoutData()
{
    class_< FLockoutData >("FLockoutData", no_init)
        .def_readwrite("LockoutDef", &FLockoutData::LockoutDef)
        .def_readwrite("LockoutTime", &FLockoutData::LockoutTime)
  ;
}