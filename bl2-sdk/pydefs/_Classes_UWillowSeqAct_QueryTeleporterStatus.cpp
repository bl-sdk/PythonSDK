#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_QueryTeleporterStatus()
{
    py::class_< UWillowSeqAct_QueryTeleporterStatus,  USequenceAction   >("UWillowSeqAct_QueryTeleporterStatus")
        .def("StaticClass", &UWillowSeqAct_QueryTeleporterStatus::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}