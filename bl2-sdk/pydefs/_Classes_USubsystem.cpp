#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USubsystem(py::module &m)
{
    py::class_< USubsystem,  UObject   >(m, "USubsystem")
		.def_static("StaticClass", &USubsystem::StaticClass, py::return_value_policy::reference)
        .def_readwrite("VfTable_FExec", &USubsystem::VfTable_FExec)
          ;
}