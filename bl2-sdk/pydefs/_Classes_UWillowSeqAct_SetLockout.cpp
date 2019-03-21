#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_SetLockout()
{
    class_< UWillowSeqAct_SetLockout, bases< USequenceAction >  , boost::noncopyable>("UWillowSeqAct_SetLockout", no_init)
        .def_readwrite("LockoutDef", &UWillowSeqAct_SetLockout::LockoutDef)
        .def("StaticClass", &UWillowSeqAct_SetLockout::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}