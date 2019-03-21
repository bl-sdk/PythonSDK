#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FUnloadableDlcEchoCallData()
{
    class_< FUnloadableDlcEchoCallData >("FUnloadableDlcEchoCallData", no_init)
        .def_readwrite("CallDefName", &FUnloadableDlcEchoCallData::CallDefName)
        .def_readwrite("DlcPackageId", &FUnloadableDlcEchoCallData::DlcPackageId)
  ;
}