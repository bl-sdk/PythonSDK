#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USubsystem()
{
    py::class_< USubsystem,  UObject   >("USubsystem")
        .def_readwrite("VfTable_FExec", &USubsystem::VfTable_FExec)
        .def("StaticClass", &USubsystem::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}