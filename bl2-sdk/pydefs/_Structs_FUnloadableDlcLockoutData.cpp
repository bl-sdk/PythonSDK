#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FUnloadableDlcLockoutData()
{
    class_< FUnloadableDlcLockoutData >("FUnloadableDlcLockoutData", no_init)
        .def_readwrite("LockoutDefName", &FUnloadableDlcLockoutData::LockoutDefName)
        .def_readwrite("LockoutTime", &FUnloadableDlcLockoutData::LockoutTime)
        .def_readwrite("DlcPackageId", &FUnloadableDlcLockoutData::DlcPackageId)
  ;
}