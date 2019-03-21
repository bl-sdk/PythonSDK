#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FUnloadableDlcEchoCallData()
{
    py::class_< FUnloadableDlcEchoCallData >("FUnloadableDlcEchoCallData")
        .def_readwrite("CallDefName", &FUnloadableDlcEchoCallData::CallDefName)
        .def_readwrite("DlcPackageId", &FUnloadableDlcEchoCallData::DlcPackageId)
  ;
}