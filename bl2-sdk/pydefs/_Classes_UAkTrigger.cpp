#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAkTrigger(py::module &m)
{
    py::class_< UAkTrigger,  UAkObject   >(m, "UAkTrigger")
		.def_static("StaticClass", &UAkTrigger::StaticClass, py::return_value_policy::reference)
          ;
}