#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UProscribedReachSpec(py::module &m)
{
    py::class_< UProscribedReachSpec,  UReachSpec   >(m, "UProscribedReachSpec")
		.def_static("StaticClass", &UProscribedReachSpec::StaticClass, py::return_value_policy::reference)
          ;
}