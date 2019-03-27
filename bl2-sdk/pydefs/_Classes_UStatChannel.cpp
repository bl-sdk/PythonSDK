#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UStatChannel(py::module &m)
{
    py::class_< UStatChannel,  UChannel   >(m, "UStatChannel")
		.def_static("StaticClass", &UStatChannel::StaticClass, py::return_value_policy::reference)
          ;
}