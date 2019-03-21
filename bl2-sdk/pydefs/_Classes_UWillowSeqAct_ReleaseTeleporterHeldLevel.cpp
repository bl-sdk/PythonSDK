#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_ReleaseTeleporterHeldLevel()
{
    py::class_< UWillowSeqAct_ReleaseTeleporterHeldLevel,  USequenceAction   >("UWillowSeqAct_ReleaseTeleporterHeldLevel")
        .def("StaticClass", &UWillowSeqAct_ReleaseTeleporterHeldLevel::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}